/*
  Escribir un programa que le pida enteros al usuario, guarde los números pares en una pila u los impares en otra pila.
  Determinar si la cantidad de ambas pilas es igual
*/
#include <iostream>
#include <string>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
}*inicio;


class Pila {
public:
    Nodo* crearNodo(int valor){
        Nodo *n = new Nodo;
        n-> dato = valor;
        n->sig = NULL;
        return n;
    }
    
    void push(int valor){
        Nodo *n = crearNodo(valor);
        n-> sig = inicio;
        inicio = n;
    }
    
    Pila(){
        inicio = NULL;
    }
};

void validarArray(){
    int i,odd=0,even=0,aodd[30], aeven[30], j=0,k=0;
    int A[] = {1,2,3,4,5,6};
    int size = *(&A + 1) - A;
    Pila pila1,pila2;
    
    for(i=0; i<size; i++){
        if(A[i]%2==0)
        {
            even++;
            aeven[j]=A[i];
            j++;
        }
        else{
            odd++;
            aodd[k]=A[i];
            k++;
        }
    }
    
    for(i=0; i<j ;i++)
    {
        pila1.push(aeven[i]);
    }
    
    cout<<"\nTotal pares: "<<even<<"\n";
    cout<<"Total impares : "<<odd<< "\n";
}

int main(int argc, const char * argv[]) {
    validarArray();
    return 0;
}
