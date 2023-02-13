#include <iostream>
#include <conio.h>
#include "clase.h"
using namespace std;
void entrada(int num[],int lim);
void inserccion(int num[],int lim);
void O_Asc(int num[],int lim);
void O_Des(int num[],int lim);
int main(){
	int numeros[' '],lim;//={4,1,2,3,5};
	cout<<"*****Cuantos elementos desea*****"<<endl;
	cin>>lim;
	entrada(numeros,lim);
	inserccion(numeros,lim);
	cout<<"*****En forma ascendente:*****"<<endl;
	O_Asc(numeros,lim);
	cout<<endl<<"*****En fomra Descendente:*****"<<endl;
	O_Des(numeros,lim);
	getch();
}
void entrada (int num[],int lim){
	int x;
	for (x=0;x<lim;x++){
		gotoxy(4+x*3,3);cin>>num[x];
	}
}
void inserccion (int num[],int lim){
	int x,aux,posic;
	for(x=0;x<lim;x++){
		posic=x;
		aux=num[x];
		while((posic>0)&&(num[posic-1]>aux)){
			num[posic]>num[posic-1];
			posic--;
		}
		num[posic]=aux;
	}
}
void O_Asc(int num[],int lim){
	int x;
	for (x=0;x<lim;x++){
		gotoxy(4+x*3,6);cout<<num[x]<<" ";
	}
}
void O_Des(int num[],int lim){
	int x;
	lim-1;
	for(x=lim;x>=0;x--){
		gotoxy(19-x*3,9);cout<<num[x]<<"";
	}
}
