#ifndef CONVERTER_DA_H
#define CONVERTER_DA_H

#include <QWidget>
#include <QPainter>       //для отрисовки
#include <QStyleOption>   //для отрисовки
#include <QXmlStreamReader>
#include <QtXml>
#include "donwload.h"

QT_BEGIN_NAMESPACE
namespace Ui { class converter_da; }
QT_END_NAMESPACE

class converter_da : public QWidget
{
    Q_OBJECT

public:
    converter_da(QWidget *parent = nullptr);
    ~converter_da();
    void setInterface();
private slots:
    void parsFile();
    void changeLineAndBox();
protected:
    void paintEvent(QPaintEvent *event);
private:
    float nominal, value;   //для хранения курсов валют
    float nominal1, value1;
    Ui::converter_da *ui;
    donwload *donwloader;

};
#endif // CONVERTER_DA_H
