#include "donwload.h"
donwload::donwload(QObject *parent) : QObject (parent)
{
  /*инициализация менеджера*/
  manager = new QNetworkAccessManager;

  /*подключаю сигнал о завершении получения данных к обработчику полученного ответа*/
  connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(onResult(QNetworkReply*)));
}

void donwload::getData()
{
  QUrl url("https://www.cbr.ru/scripts/XML_daily.asp?date_req=19/08/2022"); //URL, через который буду получать данные
  QNetworkRequest request;   //отправляю запрос
  request.setUrl(url);       //устанавливаю URL в запрос
  manager->get(request);     //выполняю запрос
}

QByteArray donwload::toUtf8(const unsigned char *src)
{
    if (*src < 0x80)
          return QByteArray((char*)src, 1);
        switch (*src) {
          case 0x80:
           return QByteArray("\xD0\x82",2);
          case 0x81:
           return QByteArray("\xD0\x83",2);
          case 0x82:
           return QByteArray("\xE2\x80\x9A",3);
          case 0x83:
           return QByteArray("\xD1\x93",2);
          case 0x84:
           return QByteArray("\xE2\x80\x9E",3);
          case 0x85:
           return QByteArray("\xE2\x80\xA6",3);
          case 0x86:
           return QByteArray("\xE2\x80\xA0",3);
          case 0x87:
           return QByteArray("\xE2\x80\xA1",3);
          case 0x88:
           return QByteArray("\xE2\x82\xAC",3);
          case 0x89:
           return QByteArray("\xE2\x80\xB0",3);
          case 0x8A:
           return QByteArray("\xD0\x89",2);
          case 0x8B:
           return QByteArray("\xE2\x80\xB9",3);
          case 0x8C:
           return QByteArray("\xD0\x8A",2);
          case 0x8D:
           return QByteArray("\xD0\x8C",2);
          case 0x8E:
           return QByteArray("\xD0\x8B",2);
          case 0x8F:
           return QByteArray("\xD0\x8F",2);
          case 0x90:
           return QByteArray("\xD1\x92",2);
          case 0x91:
           return QByteArray("\xE2\x80\x98",3);
          case 0x92:
           return QByteArray("\xE2\x80\x99",3);
          case 0x93:
           return QByteArray("\xE2\x80\x9C",3);
          case 0x94:
           return QByteArray("\xE2\x80\x9D",3);
          case 0x95:
           return QByteArray("\xE2\x80\xA2",3);
          case 0x96:
           return QByteArray("\xE2\x80\x93",3);
          case 0x97:
           return QByteArray("\xE2\x80\x94",3);
          case 0x98:
           return QByteArray("\xC2\x98",2);
          case 0x99:
           return QByteArray("\xE2\x84\xA2",3);
          case 0x9A:
           return QByteArray("\xD1\x99",2);
          case 0x9B:
           return QByteArray("\xE2\x80\xBA",3);
          case 0x9C:
           return QByteArray("\xD1\x9A",2);
          case 0x9D:
           return QByteArray("\xD1\x9C",2);
          case 0x9E:
           return QByteArray("\xD1\x9B",2);
          case 0x9F:
           return QByteArray("\xD1\x9F",2);
          case 0xA0:
           return QByteArray("\xC2\xA0",2);
          case 0xA1:
           return QByteArray("\xD0\x8E",2);
          case 0xA2:
           return QByteArray("\xD1\x9E",2);
          case 0xA3:
           return QByteArray("\xD0\x88",2);
          case 0xA4:
           return QByteArray("\xC2\xA4",2);
          case 0xA5:
           return QByteArray("\xD2\x90",2);
          case 0xA6:
           return QByteArray("\xC2\xA6",2);
          case 0xA7:
           return QByteArray("\xC2\xA7",2);
          case 0xA8:
           return QByteArray("\xD0\x81",2);
          case 0xA9:
           return QByteArray("\xC2\xA9",2);
          case 0xAA:
           return QByteArray("\xD0\x84",2);
          case 0xAB:
           return QByteArray("\xC2\xAB",2);
          case 0xAC:
           return QByteArray("\xC2\xAC",2);
          case 0xAD:
           return QByteArray("\xC2\xAD",2);
          case 0xAE:
           return QByteArray("\xC2\xAE",2);
          case 0xAF:
           return QByteArray("\xD0\x87",2);
          case 0xB0:
           return QByteArray("\xC2\xB0",2);
          case 0xB1:
           return QByteArray("\xC2\xB1",2);
          case 0xB2:
           return QByteArray("\xD0\x86",2);
          case 0xB3:
           return QByteArray("\xD1\x96",2);
          case 0xB4:
           return QByteArray("\xD2\x91",2);
          case 0xB5:
           return QByteArray("\xC2\xB5",2);
          case 0xB6:
           return QByteArray("\xC2\xB6",2);
          case 0xB7:
           return QByteArray("\xC2\xB7",2);
          case 0xB8:
           return QByteArray("\xD1\x91",2);
          case 0xB9:
           return QByteArray("\xE2\x84\x96",3);
          case 0xBA:
           return QByteArray("\xD1\x94",2);
          case 0xBB:
           return QByteArray("\xC2\xBB",2);
          case 0xBC:
           return QByteArray("\xD1\x98",2);
          case 0xBD:
           return QByteArray("\xD0\x85",2);
          case 0xBE:
           return QByteArray("\xD1\x95",2);
          case 0xBF:
           return QByteArray("\xD1\x97",2);
          case 0xC0:
           return QByteArray("\xD0\x90",2);
          case 0xC1:
           return QByteArray("\xD0\x91",2);
          case 0xC2:
           return QByteArray("\xD0\x92",2);
          case 0xC3:
           return QByteArray("\xD0\x93",2);
          case 0xC4:
           return QByteArray("\xD0\x94",2);
          case 0xC5:
           return QByteArray("\xD0\x95",2);
          case 0xC6:
           return QByteArray("\xD0\x96",2);
          case 0xC7:
           return QByteArray("\xD0\x97",2);
          case 0xC8:
           return QByteArray("\xD0\x98",2);
          case 0xC9:
           return QByteArray("\xD0\x99",2);
          case 0xCA:
           return QByteArray("\xD0\x9A",2);
          case 0xCB:
           return QByteArray("\xD0\x9B",2);
          case 0xCC:
           return QByteArray("\xD0\x9C",2);
          case 0xCD:
           return QByteArray("\xD0\x9D",2);
          case 0xCE:
           return QByteArray("\xD0\x9E",2);
          case 0xCF:
           return QByteArray("\xD0\x9F",2);
          case 0xD0:
           return QByteArray("\xD0\xA0",2);
          case 0xD1:
           return QByteArray("\xD0\xA1",2);
          case 0xD2:
           return QByteArray("\xD0\xA2",2);
          case 0xD3:
           return QByteArray("\xD0\xA3",2);
          case 0xD4:
           return QByteArray("\xD0\xA4",2);
          case 0xD5:
           return QByteArray("\xD0\xA5",2);
          case 0xD6:
           return QByteArray("\xD0\xA6",2);
          case 0xD7:
           return QByteArray("\xD0\xA7",2);
          case 0xD8:
           return QByteArray("\xD0\xA8",2);
          case 0xD9:
           return QByteArray("\xD0\xA9",2);
          case 0xDA:
           return QByteArray("\xD0\xAA",2);
          case 0xDB:
           return QByteArray("\xD0\xAB",2);
          case 0xDC:
           return QByteArray("\xD0\xAC",2);
          case 0xDD:
           return QByteArray("\xD0\xAD",2);
          case 0xDE:
           return QByteArray("\xD0\xAE",2);
          case 0xDF:
           return QByteArray("\xD0\xAF",2);
          case 0xE0:
           return QByteArray("\xD0\xB0",2);
          case 0xE1:
           return QByteArray("\xD0\xB1",2);
          case 0xE2:
           return QByteArray("\xD0\xB2",2);
          case 0xE3:
           return QByteArray("\xD0\xB3",2);
          case 0xE4:
           return QByteArray("\xD0\xB4",2);
          case 0xE5:
           return QByteArray("\xD0\xB5",2);
          case 0xE6:
           return QByteArray("\xD0\xB6",2);
          case 0xE7:
           return QByteArray("\xD0\xB7",2);
          case 0xE8:
           return QByteArray("\xD0\xB8",2);
          case 0xE9:
           return QByteArray("\xD0\xB9",2);
          case 0xEA:
           return QByteArray("\xD0\xBA",2);
          case 0xEB:
           return QByteArray("\xD0\xBB",2);
          case 0xEC:
           return QByteArray("\xD0\xBC",2);
          case 0xED:
           return QByteArray("\xD0\xBD",2);
          case 0xEE:
           return QByteArray("\xD0\xBE",2);
          case 0xEF:
           return QByteArray("\xD0\xBF",2);
          case 0xF0:
           return QByteArray("\xD1\x80",2);
          case 0xF1:
           return QByteArray("\xD1\x81",2);
          case 0xF2:
           return QByteArray("\xD1\x82",2);
          case 0xF3:
           return QByteArray("\xD1\x83",2);
          case 0xF4:
           return QByteArray("\xD1\x84",2);
          case 0xF5:
           return QByteArray("\xD1\x85",2);
          case 0xF6:
           return QByteArray("\xD1\x86",2);
          case 0xF7:
           return QByteArray("\xD1\x87",2);
          case 0xF8:
           return QByteArray("\xD1\x88",2);
          case 0xF9:
           return QByteArray("\xD1\x89",2);
          case 0xFA:
           return QByteArray("\xD1\x8A",2);
          case 0xFB:
           return QByteArray("\xD1\x8B",2);
          case 0xFC:
           return QByteArray("\xD1\x8C",2);
          case 0xFD:
           return QByteArray("\xD1\x8D",2);
          case 0xFE:
           return QByteArray("\xD1\x8E",2);
          case 0xFF:
           return QByteArray("\xD1\x8F",2);
        }
        return QByteArray();
}

QByteArray donwload::toUtf8(const QByteArray &src)
{
    QByteArray result;
        const unsigned char* s = (const unsigned char*)src.constData();
        for (int i=0; i<src.length(); ++i)
          result.append(toUtf8(s+i));
        result.replace(QByteArray("windows-1251"), QByteArray("UTF-8"));
        return result;
}

void donwload::onResult(QNetworkReply *reply)
{
    //если в процессе получения данных произошла ошибка
        if(reply->error()){
            qDebug() << "ERROR";
            qDebug() << reply->errorString();
        }
        else {
        //если ошибки не произошло, то создаю объект для работы с файлом
          QFile file("C:/example/file.xml");
          //создаем файл или открываем на перезапись
          if(file.open(QFile::WriteOnly)){
              file.write(toUtf8(reply->readAll()));
              file.close();
          }
          emit onReady();
        }




}



