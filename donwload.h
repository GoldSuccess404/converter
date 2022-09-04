#ifndef DONWLOAD_H
#define DONWLOAD_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>


class donwload : public QObject
{
    Q_OBJECT
public:
    explicit donwload(QObject *parent = 0);
    static QByteArray toUtf8(const unsigned char* src);
    static QByteArray toUtf8(const QByteArray& src);
signals:
    void onReady();
public slots:
    void getData();       //метод инициализации запроса на получение данных
    void onResult(QNetworkReply *reply); //слот обработки ответа о полученных данных
private:
    QNetworkAccessManager *manager; //менеджер сетевого доступа
};

#endif // DONWLOAD_H
