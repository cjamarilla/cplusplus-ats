#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    cout<<"Ingrese su sexo: ";
    cin>>sexo;
    cout<<"Ingrese su altura: ";
    cin>>altura;
    cout<<"---------------------------------------"<<endl;
    cout<<"Su edad es: "<<edad<<endl;
    cout<<"Su sexo es: "<<sexo<<endl;
    cout<<"Su altura es: "<<altura<<endl;

    return 0;
}
