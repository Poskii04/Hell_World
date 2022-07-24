/*
Ciao caro mio amicooo <3
Dato che noon hai messo un cazzo di file deduco che tu-
non abbia le competenze necessarie per fare ciò percui-
ti aiuro io.
Ecco qui hello word in DEV C++ :) KISS
(sono pre matrimonio e mi sto annoiando quindi faccio questo)
*/
#include <iostream>
using namespace std;

int menu(){
	int i;
	cout<<"Premi 1 per far apparire la scritta"<<endl;
	cout<<"Premi 0 per smettere"<<endl;
	cin>>i;
	return i;
}

void output(string frase){
	cout<<"======================================================="<<endl;
	cout<<frase<<endl;
	cout<<"======================================================="<<endl;
}

int main(){
	//dichiarazione
	int i;
	//metodi
	do{
	i=menu();
	output("CIAO NICOLA");
	}while(i=1);
}
