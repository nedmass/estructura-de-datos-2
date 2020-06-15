#include <stdlib.h>
#include <stdio.h>

struct nodo { 
	int dato;
	struct nodo *sgte;
};

struct nodo *constructor(void){
	struct nodo *L = (struct nodo *)malloc(sizeof(struct nodo)); 
	L->sgte=NULL;
	return L;
}

struct nodo * insertar2(struct nodo *x,struct nodo *p){
	x->sgte=p->sgte;
	p->sgte=x;
	return p;
}

struct nodo *insertar(int x, int p, struct nodo *L){
	struct nodo *aux=constructor();
	struct nodo *temp=L;
	int i=0;
	aux->dato=x;
	if(p<0) printf("Posicion invalida!\n");
	else{
		while((temp->sgte!= NULL)&&(i!=p)){
			i++;
			temp=temp->sgte;
		}
		if(i<p) printf("La posición indicada no existe!\n");
		else temp=insertar2(aux,temp);
	}
	return L;
}

void mostrar(struct nodo *L){
		int i;
		struct nodo *temp=L;
		while(temp->sgte!=NULL){
			printf("%i -",temp->sgte->dato);
			temp=temp->sgte;
		}
		printf("\n");
}

struct nodo *eliminar2(struct nodo *p){
	struct nodo *aux=p->sgte;
	p->sgte=p->sgte->sgte;
	free(aux); 
	return p;
}

struct nodo *eliminar(int p, struct nodo *L){
	struct nodo *temp=L;
	int i=0;
	if(p<0) printf("Posicion invalida!");
	else{
		while((temp->sgte!= NULL)&&(i!=p)){
			i++;
			temp=temp->sgte;
		}
		if(i<p) printf("La posición indicada no existe!\n");
		else temp = eliminar2(temp);
	}
	return L;
}

int localizar (int x, struct nodo *L){
	struct nodo *temp=L;
	int i=0;
	while(temp->sgte!= NULL){
		if(temp->sgte->dato==x) return i;
		i++;
		temp=temp->sgte;
	}
	printf("No se econtró el elemento\n");
	return -1;
}
int recuperar(int p, struct nodo *L){
	struct nodo *temp = L;
	int i=0;
	if(p<0) printf("Posicion invalida!\n");
	else{
		while((temp->sgte!= NULL)&&(i!=p)){
			i++;
			temp=temp->sgte;
		}
		if(i<p) printf("La posición indicada no existe!");
		else {
			printf("El elemento es: %i \n",temp->sgte->dato);
			return temp->sgte->dato;
		}
	}
	return -1;
}

int largoL(struct nodo*L){
	struct nodo *temp = L;
	int i = 0, largo = 0;
	while(temp->sgte != NULL){
		i = i + 1;
		temp = temp->sgte;
	}
	return i;
}

int binario(struct nodo *L,int buscar){
	int mitadN = 0, mitad = 0;
	struct nodo *aux = L;
	
	{
		/* data */
	};
	
}




int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}