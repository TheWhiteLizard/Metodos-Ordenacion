#include <iostream>
#include <conio.h>
#include "clase.h"
using namespace std;
void entrada (string Alumno[], float espa[], float mate[],float media[]);
void mediaasig (float espa[], float mate[], float mediae,float mediam);
void burbuja (string Alumno[], float media[]);
void O_Desc(string Alumno[],float media[]);

int main(){
	float espa[' '],mate[' '];
	float media[' '],mediae,mediam;
	int opc;
	string alumno[' '];
	
do{
	
	system("cls");
	gotoxy(40,1);cout<<"  MENU"<<endl;
	gotoxy(30,2);cout<<"1.-Alta de Alumnos";
	gotoxy(30,3);cout<<"2.-Ordenar en forma Descendente de acuerdo a media";
	gotoxy(30,4);cout<<"3.-Exit";
	gotoxy(30,6);cout<<" Seleccona una Opcion:";
	gotoxy(55,6);cin>>opc;	
	system("cls");
	switch(opc){
		case 1:
		    gotoxy(35,1);cout<<"*****Introduzca Calificaciones de Alumnos*****"<<endl;
            entrada(alumno,espa,mate,media);
            getch();
            system("cls");
            mediaasig(espa,mate,mediae,mediam);
            burbuja(alumno,media);
            getch();
           // system("cls");
	break;
	case 2:
			 gotoxy(28,2);cout<<"*****Ordenando en forma Descendente deacuerdo a media*****"<<endl;
            O_Desc(alumno,media);
            getch();
            system("cls");
    break;     	
    }
    
  }while(opc!=3);	
}
void entrada(string Alumno[], float espa[], float mate[],float media[]){
	int x;
	for (x=1;x<11;x++){
		gotoxy(20,x*4);cout<<"Alumno "<<x<<":";
		gotoxy(20,x*4+2);cout<<"Espanol           Matematicas";
		gotoxy(30,x*4);cin>>Alumno[x];
		gotoxy(30,x*4+2);cin>>espa[x];
		gotoxy(53,x*4+2);cin>>mate[x];
		media[x]=(espa[x]+mate[x])/2;
		gotoxy(66,x*4+1);cout<<"media: "<<media[x];				
	}
}
void mediaasig(float espa[], float mate[], float mediae, float mediam){
	int x;
	mediae=0;
	mediam=0;
	for (x=1;x<11;x++){
		mediae=mediae+espa[x];
		mediam=mediam+mate[x];
	}	
	mediae=mediae/10;
	mediam=mediam/10;
	gotoxy(30,4);cout<<"Media de Espanol: "<<mediae;				
	gotoxy(30,6);cout<<"Media de Matematicas: "<<mediam;					
}
void burbuja (string Alumno[],float media[]){
	int x,y;
	float aux;
	string auxs;
	for(y=1;y<10;y++){
		for(x=1;x<10;x++){
			if (media[x]>media[x+1]){
			//	cout<<"x:"<<x<<"""mediax:"<<media[x]<<" mediax+1:"<<media[x+1];
				aux=media[x];
				media[x]=media[x+1];
				media[x+1]=aux;
				auxs=Alumno[x];
				Alumno[x]=Alumno[x+1];
				Alumno[x+1]=auxs;
			}
		}
	}
}

void O_Desc(string Alumno[],float media[]){
	int x;
	int r;
	r=2;
	for(x=10;x>0;x--){
		r=r+1;
	    gotoxy(38,r+3);
		cout<<"Alumno :"<<Alumno[x];
		gotoxy(65,r+3);
		cout<<"Media: "<< media[x]<<endl;
	}
}
