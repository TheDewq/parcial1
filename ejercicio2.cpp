#include <stdio.h>
#include <iostream>

using namespace std;


struct coso{
    int numero;
    coso * siguiente;
};

struct coso *inicio, *final, *auxiliar, *auxiliar2;


void insertar(int x){
    
    cout<< x <<")"<< endl << endl;
    
    /**
    if(final != inicio->siguiente && inicio != NULL){
        
        cout << "entro en el 1"<< endl;
        
        int i = 1;
        auxiliar = inicio;
        
        
        cout << "iteracion #" << i <<endl;
        cout << "direccion de " << auxiliar->numero << " : " << &auxiliar << endl;
        auxiliar = auxiliar->siguiente;
        i++;
        
        
        while(auxiliar->siguiente != inicio){
            cout << "iteracion #" << i <<endl;
            cout << "direccion de " << auxiliar->numero << " : " << &auxiliar << endl;
            auxiliar = auxiliar->siguiente;
            i++;
            
        }
        
        auxiliar2 = new(coso);
        auxiliar2->numero = x;
        auxiliar->siguiente = auxiliar2;
        auxiliar2->siguiente = final;
    }
    
    if(final == inicio && inicio != NULL){
        
        cout << "entro en el 2"<< endl;
        
        auxiliar = new(coso);
        auxiliar->numero = x;
        inicio->siguiente = auxiliar;
        
        
        
    }*/
    
    if(inicio == NULL){
        
        cout << "entro en el 3"<< endl;
        
        inicio = new (coso);
        inicio->numero = x;
        inicio->siguiente = inicio;
        cout << &inicio << " num "<< inicio->numero << " siguiente "<< &inicio->siguiente << endl;
    }else{
        /*if(inicio->siguiente != final){
            cout << "condicional else if 1" << endl;
            auxiliar = new(coso);
            auxiliar->numero = x;
            inicio->siguiente = auxiliar;
            auxiliar->siguiente = final;
            cout << inicio->siguiente->numero << endl;
            
            return;
        }*/
           
            
            auxiliar = inicio;
            cout << auxiliar->numero << endl;
            auxiliar = auxiliar->siguiente;

            for(int i = 0; i < 1;){
                if(auxiliar->siguiente == inicio){
                    i++;
                    
                    
                }else{
                    auxiliar = auxiliar->siguiente;
                    cout << auxiliar->numero << endl;
                }
            }
            
            
            auxiliar2 = new(coso);
            auxiliar2->numero = x;
            auxiliar->siguiente = auxiliar2;
            auxiliar2->siguiente = final;
            cout << auxiliar->numero<< endl;
        
        
    }
}


void dibujarLista(){
    auxiliar = inicio;
    int i = 1;
        
    cout << "valor #" << i << " : " << auxiliar->numero << endl;
    auxiliar = auxiliar->siguiente;
    i++;
        
    while(&auxiliar != &inicio){
        cout << "valor #" << i << " : " << auxiliar->numero << endl;
        auxiliar = auxiliar->siguiente;
        i++;
    }
}
int main(){
    cout << "nomms" << endl;
    insertar(1);
    insertar(2);
    insertar(3);
    cout<< "pasa"<<endl;
    
    return 1;
}