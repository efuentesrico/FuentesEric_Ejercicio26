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
    
    //Las 2 lineas siguientes inicializan el punto y el arreglo de factoriales.
    
    factList = new int[num];
    pointer = factList;
    
    //El siguiente ciclo asigna los valores en cada posicion del arreglo y los imprime.
    
    for (i=0;i<num;i++)
    {
     factList[i] = factorial(i);
     cout << factList[i] << endl;
    }
    
    //La siguiente linea borra la memoria.
    
    delete [] factList;
    return 0;
}


//La siguiente funcion calcula el factorial de un numero n dado por parámetro.
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
