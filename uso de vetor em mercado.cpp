#include <iostream>
using namespace std;
#define TAM 5
int main(){
	string Vproduto[TAM]={"Arroz","Feijao","Oleo","Sal","Cafe"};
	float Vpreco[TAM]={    10.0,    15.0,   8.0,   5.0,  30.0},total;
	int Vcompra[TAM],i;
	
	//Ler o total comprado///
	for(i=0;i<TAM;i++){
		cout<<"Qual a quantidade de "<<Vproduto[i]<<" foi comprado: ";
		cin>>Vcompra[i];
		
		
	}
	
	//Calcular o total//
	
	for(i=0;i<TAM;i++){
		total+=(Vcompra[i]*Vpreco[i]);
		
	}
	cout<<"Total das compras realizadas: R$"<<total;
}