#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout << "Ingrese el primer numero: ";
    cin >>n1;
    int n2;
    cout << "Ingrese el segundo numero: ";
    cin >>n2;
    int n3;
    cout << "Ingrese el tercer numero: ";
    cin >>n3;
    if(n1>n2 && n1>n3)
    {
        cout <<"El primer numero es el mayor: "<< n1;
        return 0;
    }

    if(n2>n1 && n2>n3)
    {
        cout <<"El segundo numero es el mayor: "<< n2;
    }
    else
    {
        cout <<"El tercer numero es el mayor: "<<n3;
    }
    return 0;
}
