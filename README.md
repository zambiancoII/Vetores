# 📦 Lista de Exercícios com Vetores (Arrays) em C++

Este repositório reúne aplicações práticas desenvolvidas em **C++** focadas no uso e manipulação de **vetores (arrays unidimensionais)**, estruturas fundamentais para o armazenamento e processamento de coleções de dados de forma indexada.

---

## 📌 Sobre o Projeto

Estes programas foram desenvolvidos em sala de aula sob a orientação do **Professor Cação**. O objetivo principal foi praticar a lógica de alocação estática de memória, uso de diretivas (`#define`), laços de repetição (`for`) e cruzamento de dados em múltiplos vetores paralelos.

O repositório contém dois projetos independentes:

---

## 🛒 1. Sistema de Carrinho de Compras (Preços e Quantidades)

Este programa simula o cálculo do valor total de uma compra utilizando vetores paralelos para associar nomes, preços unitários e as respectivas quantidades adquiridas de itens básicos de mercado.

### ⚙️ Como Funciona:
* **Vetores Paralelos:** Utiliza vetores de tamanho fixo (`TAM = 5`) para gerenciar produtos (`Arroz`, `Feijao`, `Oleo`, `Sal`, `Cafe`), seus preços correspondentes e a quantidade de unidades compradas.
* **Entrada de Dados:** Um laço percorre os produtos solicitando ao usuário a quantidade comprada de cada item.
* **Processamento:** Multiplica a quantidade pelo preço unitário de cada item, acumulando o somatório total da compra.
* **Resultado:** Exibe o valor total gasto na compra em Reais (R$).

---

## ⛽ 2. Controle de Abastecimento Semanal

Este programa realiza o controle e a análise estatística de litros de combustíveis abastecidos ao longo de dias úteis da semana, utilizando vetores para armazenar volumes e rótulos de dias.

### ⚙️ Como Funciona:
* **Mapeamento Semanal:** Relaciona valores numéricos de litragem com os dias da semana (`Segunda` a `Sexta`).
* **Coleta e Exibição:** Recebe via terminal a quantidade de litros abastecida em cada dia e reapresenta os dados formatados.
* **Análise de Dados:**
  * Calcula o **total geral** de litros abastecidos no período.
  * Calcula a **média aritmética** de abastecimento diário.
  * Identifica e exibe a **maior quantidade** abastecida em um único dia, informando exatamente em qual dia da semana isso ocorreu.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

👨‍🏫 Créditos e Agradecimentos
Projetos desenvolvidos durante as aulas ministradas pelo Professor Cação, como parte do aprendizado prático de estruturas de dados homogêneas (vetores) em C++.