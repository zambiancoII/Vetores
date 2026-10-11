#include <iostream>
#define TAM 5
using namespace std;

int main(){
float vetorA[TAM],total,media,maior;
int i,dia;
string diasemana[TAM]={"Segunda","Terca","Quarta","Quinta","Sexta"};

//LER LITROS ABASTECIDOS//

for(i=0;i<TAM;i++){
	
	cout<<"quantidade de litros abastecidos no dia "<<i+1<<" = ";
	cin>>vetorA[i];
	
	
	}
//MOSTRAR QUANTIDADE DE LITROS ABASTECIDOS//

for(i=0;i<TAM;i++){
	
	cout<<endl<<"Quantidade de litros abastecidos no dia " <<i+1<<" = "<<vetorA[i];
	
	}

//Calcular total abastecido//
total=0;
for(i=0;i<TAM;i++){
	total+=vetorA[i];
	
	}
	cout<<endl<<
	"total abastecido nos "<<TAM<<" dias: "<<total;
	
//Calculando a media vendida//

cout<<endl<<"Abastecimento Medio foi de "<< total/TAM<<" litros";

//Ver qual maior volume abastecido//

maior=vetorA[0];
for(i=1;i<TAM;i++){
	
	if (vetorA[i]>maior){
	
		maior=vetorA[i];
		dia=i;
		}
	}

cout<<endl<<"A maior quantidade de litros abastecido foi de "<<maior<<" litros. E foi na "<<diasemana[dia];

}