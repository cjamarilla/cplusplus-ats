#include <iostream>

using namespace std;

int main()
{
    int v1,v2,aux;
    cout<<"Ingrese el valor un valor: "; cin>>v1;
    cout<<"Ingrese otro valor: "; cin>>v2;
    aux=v1;
    v1=v2;
    v2=aux;

    cout<<"valor primario: "<<v1<<endl;
    cout<<"valor secundario: "<<v2<<endl;

    return 0;
}
