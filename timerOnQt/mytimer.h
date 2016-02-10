#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>  //Necesario añadir estas librerias
#include <QtCore>

class MyTimer : public QObject  //Definir clase MyTimer como objeto QObject
{
    Q_OBJECT

public:
    MyTimer();      //Funcion que crea, define y conecta el timer
    QTimer *timer;

public slots:
    void MySlot();  //Slot que ejecutará el timer en cada desbordamiento
};

#endif // MYTIMER_H
