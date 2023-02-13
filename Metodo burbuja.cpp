#include <iostream>
#include <conio.h>
#include "clase.h"
using namespace std;
void entrada (int num[],int lim);
void burbuja (int num[],int lim);
void O_Asc(int num[],int lim);
void O_Desc(int num[],int lim);
int main(){
	int numeros[' '],lim;
	cout<<"*****Cuantos elemenentos desea*****"<<endl;
	cin>>lim;
	entrada(numeros,lim);
	burbuja(numeros,lim);
	cout<<"*****En forma Ascendente:*****"<<endl;
	O_Asc(numeros,lim);
	cout<<endl<<"*****En forma Descendente:*****"<<endl;
	O_Desc(numeros,lim);
	getch();
}
void entrada(int num[],int lim){
	int x;
	for (x=0;x<lim;x++){
		gotoxy(4+x*3,3);cin>>num[x];
	}
}
void burbuja (int num[],int lim){
	int x,y,aux=999;
	for(y=0;y<lim;y++){
		for(x=0;x<lim;x++){
			if (num[x]>num[x+1]){
				aux=num[x];
				num[x]=num[x+1];
				num[x+1]=aux;
			}
		}
	}
}
void O_Asc(int num[],int lim){
	int x;
	for(x=1;x<=lim;x++){
	    gotoxy(4+x*3,6);cout<<num[x]<<"";
	}
}
void O_Desc(int num[],int lim){
	int x;
	for(x=lim;x>0;x--){
	    gotoxy(19-x*3,9);cout<<num[x]<<"";
	}
}
