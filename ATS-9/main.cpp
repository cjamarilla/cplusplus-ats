#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float cateto, cateto2, hipo=0;
    cout<<"Ingrese el valor del cateto : ";
    cin>>cateto;
    cout<<"Ingrese el valor de cateto 2: ";
    cin>>cateto2;
    hipo= sqrt(pow(2,cateto)+pow(2,cateto2));
    cout<<"El valor de la hipotenusa es: "<<hipo<<endl;
    return 0;
}
