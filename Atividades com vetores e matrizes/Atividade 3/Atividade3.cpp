#include <iostream>
using namespace std;

int main(){
    bool assentos[6][9]={ {0,0,1,1,1,1,1,1,1}
                         ,{1,1,0,0,1,0,1,1,0}
                         ,{0,1,0,0,1,1,1,1,1}
                         ,{1,1,1,1,1,1,1,0,0}
                         ,{1,1,0,0,0,0,0,1,1}
                         ,{0,0,0,0,0,1,1,0,0}};
    int i,j,totVago=0,totOcupado=0;


    //Mostrando matriz com os assentos vendidos e pagos//
    cout<<"   ---mapa do cinema---"<<endl;
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){
            cout<<assentos[i][j]<<" |";
        }
        cout<<endl;
    }


    //Calcular e mostrar o total de assentos vendidos e o total de vagos
    
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){
            if (assentos[i][j]==false){
                totVago+=1;
            }else{
                totOcupado+=1;
            }
        }
    }
    cout<<endl<<"Total de assentos vagos é de: "<<totVago;
    cout<<endl<<"Total de assentos ocupados é de: "<<totOcupado;

    //Calculando porcentagem total de assentos vendidos//
    float porcTotal = (float)totOcupado/54 * 100;
    cout<<endl<<"porcentagem de assentos vendidos: "<<porcTotal<<"%";


    //Calculando total arrecadado//
    float total=0.00;
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){
            if (assentos[i][j]==true){
                if (i%2==0)
                    total+=50.00;
                else
                    total+=30.00;
            }
        }
    }
    cout<<endl<<"Total arrecadado no cinema nessa sessão será de R$"<<total;
}