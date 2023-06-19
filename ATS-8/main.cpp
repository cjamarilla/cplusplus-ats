#include <iostream>

using namespace std;

int main()
{
    float plactica,teorica,conceptual,nota=0;
    cout<<"Ingrese la nota de practica: ";
    cin>>plactica;
    cout<<"Ingrese la nota de teorica: ";
    cin>>teorica;
    cout<<"Ingrese la nota conceptual : ";
    cin>>conceptual;
    plactica *= 0.30;
    teorica *= 0.60;
    conceptual *= 0.10;
    nota= plactica + teorica + conceptual;
    cout<<"La nota final del alumno es : "<<nota<<endl;
    return 0;
}
