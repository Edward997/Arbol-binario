#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *izq, *der; 
};
Nodo* raiz=NULL;

int main (int argc, char** argv){
	Nodo *aux=raiz;
	raiz=new Nodo();
	raiz->dato=7;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	aux=raiz->izq;
	
	raiz->dato=5;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	
	aux->dato=2;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->izq;
	aux=aux->der;
	
	aux->dato=3;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux->dato=4;
	
	aux->izq=NULL;
	aux->der=new Nodo();
	aux=aux->der;
	aux->dato=1;
	aux->izq=NULL;
	aux->der=NULL;
	
	cout<<raiz->dato<<endl;
	cout<<raiz->izq->dato<<" "<<raiz->der->dato<<endl;
	cout<<raiz->izq->izq->dato<<" "<<raiz->izq->der->dato<<" "<<raiz->der->der->dato<<endl;
	return 0;
}
