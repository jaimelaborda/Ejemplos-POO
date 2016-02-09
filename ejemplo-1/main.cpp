#include <iostream>

using namespace std;  //Para poder utilizar cout directamente, si no no sabría donde se ubica

class CRectangulo
{
    //Estos atributos son privados
    int base, altura;

public:
    //Estos métodos son públicos
    void establecerDimensiones (int b, int a);
    int area () //Método definido como "inline". Se ejecuta en secuencia
    {
        return (base*altura);
    }
};

void CRectangulo::establecerDimensiones(int b, int a) //Definimos el método
{
    base = b;
    altura = a;
}

int main(int argc, char *argv[])
{
    int base[2], altura[2];

    CRectangulo rectangulo1; //Creamos un objeto de la clase CRectangulo
    CRectangulo rectangulo2;

    for (int i=0; i<2; i++)
    {
        cout << "Base rectangulo " << i+1 << ": ";
        cin >> base[i];

        cout << "Altura rectangulo " << i+1 <<": ";
        cin >> altura[i];
    }


    rectangulo1.establecerDimensiones(base[0], altura[0]);
    rectangulo2.establecerDimensiones(base[1], altura[1]);

    cout << "Rectangulo1 = " << rectangulo1.area() << endl;
    cout << "Rectangulo2 = " << rectangulo2.area() << endl;

    return 0;
}
