#include<iostream>
using namespace std;
#define TAM 10

int main(){
    
    int transacao[TAM]={10,-30,-20,40,60,-100,15,-70,30,-15};
    int total,valorneg,adicionado,debito,credito,i,j,saldo,escolha;
    cout<<"==================================="<<endl;
    cout<<"==========bem-vindo(a)============="<<endl;
    cout<<"=======ao banco fatecado pago======"<<endl;
    cout<<"======favor escolher o numero======"<<endl;
    cout<<"====1 - Calcular total da conta===="<<endl;
    cout<<"===2 - gastos e creditos em conta=="<<endl;
    cout<<"=========3 - maior debito=========="<<endl;
    cout<<"===4 - menor credito e a posicao==="<<endl;
    cout<<"==5 - quando foi saldo negativado=="<<endl;
    cout<<"==================================="<<endl;
    cin>>escolha;
    switch (escolha){
    case 1:
    //calculando o total na conta//
    total=0;
        for(i=0;i<TAM;i++){
            total+=transacao[i];
        }
        cout<<"Valor total na conta é de : R$"<<total;
        cout<<endl<<"Pressione ENTER para sair...";
        cin.ignore(); // limpa o enter
        cin.get();    // espera o usuario pressionar enter    
        break;

    case 2:
    //Calculando qnto foi gasto e qnto foi adicionado na conta//
        valorneg=0;
        adicionado=0;
        for(i=0;i<TAM;i++){
            if (transacao[i]<0)
                valorneg+=transacao[i];
            else
                adicionado+=transacao[i];

        }
        cout<<endl<<"Valor total adicionado foi de R$"<<adicionado;
        cout<<endl<<"Valor total retirado foi de R$"<<valorneg*-1;
        cout<<endl<<"Pressione ENTER para sair...";
        cin.ignore(); // limpa o enter
        cin.get();    // espera o usuario pressionar enter    
        break;

    case 3:
    //Calculando maior debito//
        debito=0;
        for (i=0;i<TAM;i++){
            if (transacao[i]<debito){
                debito=transacao[i];
            }
        }
        cout<<endl<<"Maior debito foi de "<<debito<<" reais.";
        cout<<endl<<"Pressione ENTER para sair...";
        cin.ignore(); // limpa o enter
        cin.get();    // espera o usuario pressionar enter
        break;

    case 4:
    //Calculando o menor credito//
    
        credito=100000000;
        j=0;
        for (i=0;i<TAM;i++){
            if (transacao[i]<credito && transacao[i]>0){
                credito=transacao[i];
                j=i;
            }
        }

        cout<<endl<<"Menor credito foi de "<<credito<<" reais. E esta na posicao "<<j;
        cout<<endl<<"Pressione ENTER para sair...";
        cin.ignore(); // limpa o enter
        cin.get();    // espera o usuario pressionar enter
        break;

    case 5:
    //Considerando um saldo inicial de R$50,00 Qndo fica negativo.//
        saldo=50;
        bool negativado=false;
        for (i=0;i<TAM;i++){
            saldo+=transacao[i];
            if(saldo<0){
                cout<<endl<<"saldo negativado em vetor "<<i;
                    cout<<endl<<"Pressione ENTER para sair...";
                    cin.ignore(); // limpa o enter
                    cin.get();    // espera o usuario pressionar enter
                break;
            }
        }
        if (!negativado) {
            cout<<endl<<"O saldo nao ficou negativo em nenhuma transacao.";
        }
    }

}
