# 🎟️ Mapa de Assentos de Cinema - Gestão de Ocupação e Faturamento em C++

Uma aplicação desenvolvida em **C++** para controle e análise de ocupação de uma sala de cinema através de uma matriz booleana, calculando estatísticas de lugares vagos, ocupados, porcentagem de lotação e faturamento total baseado em regras de preço por fileira.

---

## 📌 Sobre o Projeto

Este projeto foi desenvolvido como parte da **avaliação de Estrutura de Dados** solicitada pelo **Professor Cação**. O objetivo principal da atividade foi demonstrar o domínio prático na manipulação de **matrizes bidimensionais** (`arrays 2D`), tipos lógicos (`bool`), laços de repetição aninhados e lógica condicional aplicada ao cálculo estatístico e financeiro.

---

## ⚙️ Funcionalidades do Sistema

O programa processa uma matriz estática de assentos (6 fileiras por 9 colunas) e executa automaticamente as seguintes análises:

1. **Exibição do Mapa da Sala:** Apresenta visualmente no terminal a disposição dos assentos na sala de cinema.
2. **Contagem de Ocupação:** Varre a matriz identificando e somando o total de assentos vagos (`false` / `0`) e ocupados (`true` / `1`).
3. **Taxa de Lotação:** Calcula a porcentagem total de assentos vendidos em relação à capacidade máxima da sala ($54$ lugares).
4. **Cálculo de Faturamento:** Realiza a contabilização financeira considerando regras de preços diferenciados por fileira (fileiras pares e ímpares possuem valores de ingresso distintos).

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

👨‍🏫 Créditos e Agradecimentos
Projeto avaliativo desenvolvido para a disciplina de Estrutura de Dados sob a orientação do Professor Cação.