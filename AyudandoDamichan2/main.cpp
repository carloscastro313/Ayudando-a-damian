#include <iostream>
using namespace std;

int CalcularSueldo(int horas){
    int sueldo = 0;
    int bono = 0;

    if  (horas < 40)
    {
        sueldo = horas *20;
    }
    else
    {
        bono = horas - 40;
        sueldo = (horas - bono)* 20;
        sueldo += (bono * 25);
    }

    return sueldo;
}

int main ()
{
    int x;
    char respuesta;

    do{
        cout<<"ingrese las horas trabajadas: ";
        cin>> x;

        cout<<"Su sueldo de esta semana es de: "<< CalcularSueldo(x) << endl;

        do{
            cout << "¿Desea continua? s/n";
            cin >> respuesta;
            system("cls");
        }while(respuesta != 's' && respuesta != 'n');

    }while(respuesta == 's');


    return 0;
}

