#include <iostream>
#include <string>
using namespace std;

int main() {
    //Coluna 0: João  | Coluna 1: Maria  | Coluna 2: Pedro | Coluna 3: Ana
    int vendas[3][4] = {
        {10, 15,  8, 20},  // Vendas de Smartphone
        { 5,  3, 12,  7},  // Vendas de Notebook
        {15, 22, 10, 18}}; // Vendas de Smartwatch

    // Vetores com os nomes para facilitar a exibição dos resultados
    string produtos[3] = {"Smartphone","Notebook","Smartwatch"};
    string vendedores[4] = {"Julio","Giovana","Vitor","Bruna"};

    int i,j;

    //Mostrando a matriz de vendas
    cout<<"--- MATRIZ DE VENDAS (Produtos x Vendedores) ---"<<endl;
    for(i=0;i<3;i++){
        cout<<produtos[i]<<": ";
        for(j=0;j<4;j++){
            cout<<vendas[i][j]<<" unid. - "<<vendedores[j]<<" |";
        }
        cout<<endl;
    }
    cout<<endl;


    //total vendido de cada produto
    cout<<"--- TOTAL VENDIDO DE CADA PRODUTO ---"<<endl;
    for(i=0;i<3;i++){
        int totalProduto=0;
        for(j = 0; j < 4; j++){
            totalProduto+=vendas[i][j];
        }
        cout<<produtos[i]<<": "<<totalProduto<<" unidades vendidas."<<endl;
    }
    cout<<endl;


    // total vendido por cada vendedor//
    cout<<"--- TOTAL VENDIDO POR CADA VENDEDOR ---"<<endl;
    for(j = 0; j < 4; j++){
        int totalVendedor=0;
        for(i = 0; i < 3; i++){
            totalVendedor+=vendas[i][j];
        }
        cout<<vendedores[j]<<": "<<totalVendedor<<" unidades vendidas."<<endl;
    }
    cout<<endl;


    //produto que mais vendeu//
    int maiorQtdProduto=-1;
    string produtoMaisVendido="";

    for(i=0;i<3;i++){
        int totalProduto=0;
        for(j = 0; j < 4; j++){
            totalProduto += vendas[i][j];
        }
        if(totalProduto>maiorQtdProduto){
            maiorQtdProduto=totalProduto;
            produtoMaisVendido=produtos[i];
        }
    }
    cout<<"--- PRODUTO MAIS VENDIDO ---"<<endl;
    cout<<"Produto: "<<produtoMaisVendido<<" ("<<maiorQtdProduto<<" unidades)"<<endl;


    // vendedor que mais vendeu//
    int maiorQtdVendedor=-1;
    string vendedorMaisVendeu="";

    for(j = 0; j < 4; j++){
        int totalVendedor = 0;
        for(i = 0; i < 3; i++){
            totalVendedor += vendas[i][j];
        }
        if(totalVendedor > maiorQtdVendedor) {
            maiorQtdVendedor = totalVendedor;
            vendedorMaisVendeu = vendedores[j];
        }
    }
    cout<<endl<<"--- VENDEDOR QUE MAIS VENDEU ---"<<endl;
    cout<<"Vendedor(a): "<<vendedorMaisVendeu<<" ("<<maiorQtdVendedor<< " unidades)"<<endl;

}