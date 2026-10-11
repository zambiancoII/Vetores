#include <iostream>
using namespace std;
#define TAMANHO 10;

//Separando pares de impares//

int main(){
    int vetorA[TAMANHO] = {47, 92, 13, 25, 107, 2, 305, 99, 128, 632};
    int vetorPar[TAMANHO], vetorImpar[TAMANHO], i, p=0, imp=0;
    int i,
    for (i=0; i<TAMANHO; i++){
        if(vetorA[i]%2==0){
            vetorPar[p]=vetorA[i];
            cout<<endl<<"Valor de "<<vetorA[i]<<" foi recebido no vetor par";
            p++;
        }
        else{
            vetorImpar[imp]=vetorA[i];
            cout<<endl<<"Valor de "<<vetorA[i]<<" foi recebido no vetor impar";
            imp++;
        }

    }
}