#include "converter_da.h"
#include "ui_converter_da.h"
#include "stylehelper.h"


converter_da::converter_da(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::converter_da)
{
    ui->setupUi(this);
    setInterface();
    donwloader = new donwload(this);

    /*по нажатию на кнопку запускается получение данных по http*/
    connect(ui->pushButton, SIGNAL(clicked(bool)), donwloader, SLOT(getData()));
    /*при завершении получения данных сайта и записи в файл, парсинг данных*/
    connect(donwloader, SIGNAL(onReady()), this, SLOT(parsFile()));

    /*при изменении комбо-боксов, очистка результирующего lineEdita*/
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeLineAndBox()));
    connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(changeLineAndBox()));
    /*при изменении текста в LineEdit, очитка результирующего LineEdita*/
    connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(changeLineAndBox()));
}

converter_da::~converter_da()
{
    delete ui;
}

/*установка интерфейса*/
void converter_da::setInterface()
{
 /*задний фон*/
 this->setStyleSheet("background: #17212f");
 /*стили для lineEditov*/
 ui->lineEdit->setStyleSheet(styleHelper::getStyleLineEdit());
 ui->lineEdit_3->setStyleSheet(styleHelper::getStyleLineEdit());
 /*стили для комбо-боксов*/
 ui->comboBox->setStyleSheet(styleHelper::getStyleComboBox());
 ui->comboBox_2->setStyleSheet(styleHelper::getStyleComboBox());
 /*стили для лейблов*/
 ui->label->setStyleSheet(styleHelper::getStyleLabel());
 ui->label_2->setStyleSheet(styleHelper::getStyleLabel());
 /*стиль для кнопки*/
 ui->pushButton->setStyleSheet(styleHelper::getStylePushButton());
 /*иконка самого приложения*/
 setWindowIcon(QIcon(":/img/img/icon.png"));
 /*иконки флагов для первого комбо-бокса*/
 ui->comboBox->addItem(QIcon(":/img/img/rus.png"), "RUS");
 ui->comboBox->addItem(QIcon(":/img/img/amd.png"), "AMD");
 ui->comboBox->addItem(QIcon(":/img/img/aud.png"), "AUD");
 ui->comboBox->addItem(QIcon(":/img/img/azn.png"), "AZN");
 ui->comboBox->addItem(QIcon(":/img/img/bgn.png"), "BGN");
 ui->comboBox->addItem(QIcon(":/img/img/brl.png"), "BRL");
 ui->comboBox->addItem(QIcon(":/img/img/byn.png"), "BYN");
 ui->comboBox->addItem(QIcon(":/img/img/cad.png"), "CAD");
 ui->comboBox->addItem(QIcon(":/img/img/chf.png"), "CHF");
 ui->comboBox->addItem(QIcon(":/img/img/cny.png"), "CNY");
 ui->comboBox->addItem(QIcon(":/img/img/czk.png"), "CZK");
 ui->comboBox->addItem(QIcon(":/img/img/dkk.png"), "DKK");
 ui->comboBox->addItem(QIcon(":/img/img/eur.png"), "EUR");
 ui->comboBox->addItem(QIcon(":/img/img/gbp.png"), "GBP");
 ui->comboBox->addItem(QIcon(":/img/img/hkd.png"), "HKD");
 ui->comboBox->addItem(QIcon(":/img/img/huf.png"), "HUF");
 ui->comboBox->addItem(QIcon(":/img/img/inr.png"), "INR");
 ui->comboBox->addItem(QIcon(":/img/img/jpy.png"), "JPY");
 ui->comboBox->addItem(QIcon(":/img/img/kgs.png"), "KGS");
 ui->comboBox->addItem(QIcon(":/img/img/krw.png"), "KRW");
 ui->comboBox->addItem(QIcon(":/img/img/kzt.png"), "KZT");
 ui->comboBox->addItem(QIcon(":/img/img/mdl.png"), "MDL");
 ui->comboBox->addItem(QIcon(":/img/img/nok.png"), "NOK");
 ui->comboBox->addItem(QIcon(":/img/img/pln.png"), "PLN");
 ui->comboBox->addItem(QIcon(":/img/img/ron.png"), "RON");
 ui->comboBox->addItem(QIcon(":/img/img/sek.png"), "SEK");
 ui->comboBox->addItem(QIcon(":/img/img/sgd.png"), "SGD");
 ui->comboBox->addItem(QIcon(":/img/img/tjs.png"), "TJS");
 ui->comboBox->addItem(QIcon(":/img/img/tmt.png"), "TMT");
 ui->comboBox->addItem(QIcon(":/img/img/try.png"), "TRY");
 ui->comboBox->addItem(QIcon(":/img/img/uah.png"), "UAH");
 ui->comboBox->addItem(QIcon(":/img/img/usd.png"), "USD");
 ui->comboBox->addItem(QIcon(":/img/img/uzs.png"), "UZS");
 ui->comboBox->addItem(QIcon(":/img/img/zar.png"), "ZAR");
/***********************************************************/
 /*Иконки для второго комбо-бокса*/
 ui->comboBox_2->addItem(QIcon(":/img/img/rus.png"), "RUS");
 ui->comboBox_2->addItem(QIcon(":/img/img/amd.png"), "AMD");
 ui->comboBox_2->addItem(QIcon(":/img/img/aud.png"), "AUD");
 ui->comboBox_2->addItem(QIcon(":/img/img/azn.png"), "AZN");
 ui->comboBox_2->addItem(QIcon(":/img/img/bgn.png"), "BGN");
 ui->comboBox_2->addItem(QIcon(":/img/img/brl.png"), "BRL");
 ui->comboBox_2->addItem(QIcon(":/img/img/byn.png"), "BYN");
 ui->comboBox_2->addItem(QIcon(":/img/img/cad.png"), "CAD");
 ui->comboBox_2->addItem(QIcon(":/img/img/chf.png"), "CHF");
 ui->comboBox_2->addItem(QIcon(":/img/img/cny.png"), "CNY");
 ui->comboBox_2->addItem(QIcon(":/img/img/czk.png"), "CZK");
 ui->comboBox_2->addItem(QIcon(":/img/img/dkk.png"), "DKK");
 ui->comboBox_2->addItem(QIcon(":/img/img/eur.png"), "EUR");
 ui->comboBox_2->addItem(QIcon(":/img/img/gbp.png"), "GBP");
 ui->comboBox_2->addItem(QIcon(":/img/img/hkd.png"), "HKD");
 ui->comboBox_2->addItem(QIcon(":/img/img/huf.png"), "HUF");
 ui->comboBox_2->addItem(QIcon(":/img/img/inr.png"), "INR");
 ui->comboBox_2->addItem(QIcon(":/img/img/jpy.png"), "JPY");
 ui->comboBox_2->addItem(QIcon(":/img/img/kgs.png"), "KGS");
 ui->comboBox_2->addItem(QIcon(":/img/img/krw.png"), "KRW");
 ui->comboBox_2->addItem(QIcon(":/img/img/kzt.png"), "KZT");
 ui->comboBox_2->addItem(QIcon(":/img/img/mdl.png"), "MDL");
 ui->comboBox_2->addItem(QIcon(":/img/img/nok.png"), "NOK");
 ui->comboBox_2->addItem(QIcon(":/img/img/pln.png"), "PLN");
 ui->comboBox_2->addItem(QIcon(":/img/img/ron.png"), "RON");
 ui->comboBox_2->addItem(QIcon(":/img/img/sek.png"), "SEK");
 ui->comboBox_2->addItem(QIcon(":/img/img/sgd.png"), "SGD");
 ui->comboBox_2->addItem(QIcon(":/img/img/tjs.png"), "TJS");
 ui->comboBox_2->addItem(QIcon(":/img/img/tmt.png"), "TMT");
 ui->comboBox_2->addItem(QIcon(":/img/img/try.png"), "TRY");
 ui->comboBox_2->addItem(QIcon(":/img/img/uah.png"), "UAH");
 ui->comboBox_2->addItem(QIcon(":/img/img/usd.png"), "USD");
 ui->comboBox_2->addItem(QIcon(":/img/img/uzs.png"), "UZS");
 ui->comboBox_2->addItem(QIcon(":/img/img/zar.png"), "ZAR");
/****************************************************************/
 ui->comboBox->setCurrentIndex(0);    //значения комбо-боксов по умолчанию
 ui->comboBox_2->setCurrentIndex(31);
}


/*отрисовка заднего фона*/
void converter_da::paintEvent(QPaintEvent *event)
{
  QStyleOption so;
  so.initFrom(this);
  QPainter p(this);
  style()->drawPrimitive(QStyle::PE_Widget, &so, &p, this);
  QWidget::paintEvent(event);
}




/*парсим данные с вычислениями*/
void converter_da::parsFile()
{   QFile file("C:/example/file.xml");
    if(!file.open(QIODevice::ReadOnly)){
       qDebug() << "error file!!!!!!";
       return;
    }
    else {
         /*Первый случай, когда рубля нет ни в одном из комбо-боксов*/
        if (ui->comboBox->currentText()!= "RUS" && ui->comboBox->currentText()!= "RUS"){
            QXmlStreamReader xml(&file);
                  while (!xml.atEnd()) {
                    xml.readNext();
                    if (xml.isStartElement() && xml.name()==QString("CharCode")){
                      if (xml.readElementText() == ui->comboBox->currentText()) {
                        xml.readNext();
                        nominal = xml.readElementText().toFloat();
                        xml.readNext();
                        xml.skipCurrentElement();
                        xml.readNext();
                        QString val = xml.readElementText();
                        val.replace(',','.');
                        value = val.toFloat();
                        break;
                      }
                    }
                  }
                  file.seek(0);
                  xml.setDevice(&file);
                  while (!xml.atEnd()) {
                    xml.readNext();
                    if (xml.isStartElement() && xml.name()==QString("CharCode")){
                      if (xml.readElementText() == ui->comboBox_2->currentText()) {
                        xml.readNext();
                        nominal1 = xml.readElementText().toFloat();
                        xml.readNext();
                        xml.skipCurrentElement();
                        xml.readNext();
                        QString val = xml.readElementText();
                        val.replace(',','.');
                        value1 = val.toFloat();
                        break;
                      }
                    }
                  }
                  xml.clear();
                  file.close();
                  //вычисления
                  float course = value/nominal;
                  float course1 = value1/nominal1;
                  float line = ui->lineEdit->text().toFloat();
                  float res = line * course / course1;
                  ui->lineEdit_3->setText(QString("%1").arg(QString::number(res, 'f', 2)));
                }
     /***************************************Конец первого случая****************************************/


        /*Второй случай, когда в первом комбо-боксе выбран рубль*/
        if(ui->comboBox->currentText() == "RUS"){
            QString sp = "CharCode";
            QXmlStreamReader xml(&file);
            do {
                xml.readNext();
                if(xml.name() == sp){
                  if(xml.readElementText() == ui->comboBox_2->currentText()){
                      xml.readNext();
                      nominal = xml.readElementText().toFloat();
                      xml.readNext();
                      xml.skipCurrentElement();
                      xml.readNext();
                      QString val = xml.readElementText();
                      val.replace(',','.');
                      value= val.toFloat();
                      break;
               }
              }
            }
            while(!xml.atEnd());
            xml.clear();
            file.close();
            //вычисления
            float course = value / nominal;
            float line = ui->lineEdit->text().toFloat();
            float res = line / course;
            ui->lineEdit_3->setText(QString ("%1").arg(QString::number(res, 'f', 2)));
        }
        /***************************************Конец второго случая****************************************/


          /*Третий случай, когда рубль выбран в нижнем комбо-боксе*/
        if(ui->comboBox_2->currentText() == "RUS"){
            QString sp = "CharCode";
            QXmlStreamReader xml(&file);
            do{
                xml.readNext();
                if(xml.name() == sp){
                    if(xml.readElementText() == ui->comboBox->currentText()){
                        xml.readNext();
                        nominal = xml.readElementText().toFloat();
                        xml.readNext();
                        xml.skipCurrentElement();
                        xml.readNext();
                        QString val = xml.readElementText();
                        val.replace(',','.');
                        value=val.toFloat();
                        break;
                    }
                }
            }
            while(!xml.atEnd());
            xml.clear();
            file.close();
            //вычисления
            float course = value / nominal; //вычисляем курс валюты
            float line = ui->lineEdit->text().toFloat(); //достаем введенное значение, которое нужно конвертировать
            float res = line * course; //получаем результирующее значение
            ui->lineEdit_3->setText(QString("%1").arg(QString::number(res, 'f', 2))); //округляю до двух знаков после точки
        }
        /***************************************Конец третьего случая****************************************/


      }

}

void converter_da::changeLineAndBox()
{
    ui->lineEdit_3->clear();
}








