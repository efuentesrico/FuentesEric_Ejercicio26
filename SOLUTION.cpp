#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int num;
    int *pointer;
    int i;
    int *factList;
    
    cout<<"Ingrese el tamaño deseado para la lista de factoriales (maximo 12)."<<endl;
    cin>>num;
    
    factList = new int[num];
    pointer = factList;
    
    for (i=0;i<=num;i++)
    {
     factList[i] = factorial(i);
     cout << factList[i] << endl;
    }
    
    
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    
    if (n=0)
    {
        fact = 1;
    }
    else
    {
        for(int i=n;i>0;i--)
        {
            fact = fact * i;
        }
    }
    return fact;
}
