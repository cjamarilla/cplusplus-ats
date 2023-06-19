#include <iostream>

using namespace std;

int main()
{
    float promedio=0, nota,acu=0;
    for(int i=1; i<=4; i++){
        cout<<"Ingrese la nota del alumno "<<i<<": ";
        cin>>nota;
        acu += nota;
        nota=0;
    }
    promedio = acu / 4;
    cout<<"El promedio de notas es: "<<promedio;
    return 0;
}
