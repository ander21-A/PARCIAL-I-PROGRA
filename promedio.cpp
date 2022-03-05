//ANDERSON RONALDO RAMOS SOLORZANO CARNET: 5990-21-4345
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

main(){
int n1=0,n2=0,n3=0;	
float promedio =0;
string mensaje="";

string nom, ape, cur;
int co, op;
op=1;

while(op == 1){
system("cls");
cout<<"CODIGO: "<<endl;
cin>>co;cout<<endl;
cout<<"NOMBRES: "<<endl;
cin>>nom;cout<<endl;
cout<<"APELLIDOS: "<<endl;
cin>>ape;cout<<endl;
cout<<"CURSO: "<<endl;
cin>>cur;cout<<endl;

cout<<"Ingrese Nota1:";
cin>>n1;
cout<<"Ingrese Nota2:";
cin>>n2;
cout<<"Ingrese Nota3:";
cin>>n3;
promedio = (n1+n2+n3)/3;
mensaje = promedio >60 ?"Aprabado" : "Reprobado";
cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;
printf("¿Quieres volvera a ejecutar este programa?\n");
cout<<"1. SI..... 2. NO..... ";
cin>>op;
system("pause");
}return 0;
}
