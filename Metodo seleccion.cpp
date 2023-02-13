#include <iostream>
#include <conio.h>
#include "coordenadas.h"
#include "clase.h"
using namespace std;
void entrada(int);
void Seleccion(int);
void salida(int);
int a[' '],i;
main(){
	int op;
	entrada(10);
	Seleccion(10);
	salida(10);
	getch();
}
void entrada(int lim){
	int j;
	cout<<"El arreglo es de"<<lim<<"numeros"<<endl;
	cout<<"inserte datos del arreglo";
	for(i=0;i<lim;i++){
		gotoxy(4+i*5,3);cout<<i;
	}
	for(i=0;i<lim;i++){
		gotoxy(4+i*5,4);cin>>a[i];
	}
}
void Seleccion(int lim){
	int j,i,aux,aux1,c=0,men,k,m;
	cout<<"Ordenamiento por seleccion"<<endl<<endl;
	for(i=0;i<lim;i++){
		men=a[i];
		c=0;
		for(j=i;j<lim;j++){
			men=a[j];
			m=j;
			for(k=j;k<lim;k++){
				if (a[k]<men){
					men=a[k];
					m=k;
				}
			}
			if(a[j]>a[m]){
				aux=a[j];
				a[j]=a[m];
				a[m]=aux;
			}
			for(i=0;i<lim;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		} 
	}
}
void salida(int lim){
	for(i=0;i<lim;i++){
		cout<<a[i]<<",";
	}
}
