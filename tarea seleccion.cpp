#include <iostream>
#include <conio.h>
#include "clase.h"
using namespace std;
int main(){
	int n,i;
	int numeros[n];
	int j,aux,min;
	gotoxy(2,8);cout<<"Cuantos numeros deseas ingresar"<<endl;
	gotoxy(2,9);cin>>n;
	for(i=0;i<n;i++){
		gotoxy(2,11+i);cout<<"Numero "<<i;
		gotoxy(13,11+i);cin>>numeros[i];
	}
		for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(numeros[j]<numeros[min]){
				min=j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	    }
	gotoxy(18,10);cout<<"Orden Ascendente"<<endl;
	for(i=0;i<n;i++){
		gotoxy(18,11+i);cout<<i<<"--->"<<numeros[i]<<" "<<endl;
	}
	gotoxy(40,10);cout<<"El 3-esimo  numero mas pequeno es:"<<endl;
	gotoxy(40,11);cout<<numeros[2]<<endl;
	
	
	gotoxy(2,19);getch();
	gotoxy(2,20);return 0;
	

}

