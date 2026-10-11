# 🏦 Banco Fatecado Pago - Sistema de Gestão de Transações em C++

Uma aplicação interativa desenvolvida em **C++** para gerenciamento e análise de extratos financeiros baseados em vetores (`arrays`), simulando um sistema bancário com operações de consulta de saldo, análise de débitos, créditos e simulações de fluxo de caixa.

---

## 📌 Sobre o Projeto

Este projeto foi desenvolvido como parte da **avaliação de Estrutura de Dados** solicitada pelo **Professor Cação**. O objetivo principal da atividade foi demonstrar o domínio prático na manipulação de vetores numéricos estáticos, uso de estruturas de controle de fluxo (`switch/case`), laços de repetição e lógica condicional aplicada a cenários financeiros reais.

---

## ⚙️ Funcionalidades do Sistema

O programa apresenta um menu interativo com 5 opções de operações baseadas em um vetor pré-definido de transações (`transacao`):

1. **Calcular o Total da Conta:** Percorre o vetor somando todas as entradas e saídas para exibir o saldo financeiro consolidado.
2. **Gastos e Créditos em Conta:** Separa e totaliza de forma independente o montante total adicionado (créditos) e o total retirado (débitos) da conta.
3. **Maior Débito:** Identifica e exibe a maior transação negativa registrada no vetor.
4. **Menor Crédito e Posição:** Varre os valores positivos da matriz para encontrar o menor depósito efetuado, informando também a sua posição exata (índice) no vetor.
5. **Simulação de Saldo Negativado:** Considera um saldo inicial fixo (R$ 50,00) e simula a movimentação sequencial das transações, identificando exatamente em qual operação o saldo da conta ficou negativo.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

👨‍🏫 Créditos e Agradecimentos
Projeto avaliativo desenvolvido para a disciplina de Estrutura de Dados sob a orientação do Professor Cação.