#include "mytimer.h"
#include <QtCore>
#include <QtDebug>

MyTimer::MyTimer()  //Declaramos la funcion MyTimer donde creamos el timer
{
    timer = new QTimer(this);  //Creamos el timer
    connect(timer,SIGNAL(timeout()),this, SLOT(MySlot())); //Conectamos con el slot

    timer->start(1000); //Lo iniciamos a periodo de 1000ms = 1s
}

void MyTimer::MySlot()
{
    qDebug() <<"Timer executed"; //Funcion que ejecuta el timer cada 1s
}
