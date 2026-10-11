# 🔀 Separador de Números Pares e Ímpares em C++

Uma aplicação desenvolvida em **C++** para processar um vetor numérico estático, separando automaticamente seus elementos em dois novos vetores distintos: um exclusivo para números **pares** e outro para números **ímpares**.

---

## 📌 Sobre o Projeto

Este projeto foi desenvolvido em sala de aula sob a orientação do **Professor Cação**. O objetivo principal da atividade foi praticar a manipulação avançada de vetores (`arrays`), o uso de diretivas de pré-processamento (`#define`), estruturas condicionais (`if/else`) e a lógica de controle de múltiplos índices de rastreamento (`p` para pares e `imp` para ímpares).

---

## ⚙️ Como Funciona

1. **Vetor Inicial:** O programa declara um vetor estático (`vetorA`) de tamanho fixo (`TAMANHO 10`) contendo uma sequência de números inteiros pré-definidos.
2. **Varredura (Laço For):** O código percorre cada elemento do vetor principal utilizando um laço de repetição.
3. **Validação Condicional:** Utiliza o operador de módulo (`% 2`) para verificar se o número é divisível por 2 (par) ou não (ímpar).
4. **Alocação Dinâmica de Posição:**
   * Se for **par**, o valor é armazenado no `vetorPar` na posição controlada pelo ponteiro/índice `p`, que é incrementado em seguida.
   * Se for **ímpar**, o valor é armazenado no `vetorImpar` na posição controlada pelo índice `imp`, que também é incrementado.
5. **Feedback no Terminal:** O programa exibe mensagens detalhando para qual vetor cada número foi direcionado.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

👨‍🏫 Créditos e Agradecimentos
Projeto avaliativo desenvolvido para a disciplina de Estrutura de Dados sob a orientação do Professor Cação.