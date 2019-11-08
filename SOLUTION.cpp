#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int num;
    int *pointer;
    int i;
    int *factList;
    
    cout<<"Ingrese el tamaño deseado para la lista de factoriales (maximo 16)."<<endl;
    cin>>num;
    
    factList = new int[num];
    pointer = factList;
    
    for (i=0;i<num;i++)
    {
     factList[i] = factorial(i);
     cout << factList[i] << endl;
    }
    
    
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    
    if (n!=0)
    {
        for(int i=0;i<n;i++)
        {
            fact = fact * (n-i);
        }
        return fact;
    }
    
    else
    {
        return 1;
    }
    return fact;
}
