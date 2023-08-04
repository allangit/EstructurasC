
#include <stdio.h>
#include <stdlib.h>


typedef struct nodo{


	int dato;
	struct nodo *siguiente;


}nodo;

nodo *primero=NULL;

void insertarNodo();
void Search(int buscado);
void Pila();

int main(){

	int i=0;
	printf("\nUsando pilas Estructura de datos--->\n");
	for(i ; i<5; i++){

		insertarNodo();

	}

	Pila();
	Search(12);

	return 0;
}


void insertarNodo(){

	nodo *nuevo=(nodo*) malloc(sizeof(nodo));
	printf("Ingrese el nodo::");
	scanf("%d",&nuevo->dato);
	nuevo->siguiente=primero;
	primero=nuevo;

}

void Pila(){

	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;

	if(primero!=NULL){

		while(actual!=NULL){

			printf("%d",actual->dato);
			actual=actual->siguiente;

		}

	}else{

		printf("\nPila esta vacia\n\n");
	}
}

void Search(int buscado){

	nodo *aux=(nodo *)malloc(sizeof(nodo));
	aux=primero;

	while (aux!=NULL){

		if(aux->dato==buscado){

			printf("Se encontro el elemento::%d",buscado);
			break;

		}

		aux=aux->siguiente;

	}

	printf("No se encontro el elemento");


}





