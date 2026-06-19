# Contagem de Frequência de Palavras com Árvore Binária de Busca (BST)

Este projeto foi desenvolvido como parte dos meus estudos em Engenharia de Software. Trata-se de uma implementação em **Linguagem C** de uma estrutura de dados de Árvore Binária de Busca (BST - *Binary Search Tree*) com o objetivo de processar uma lista de palavras, contar a frequência de cada uma e exibi-las em ordem alfabética.

## 🚀 Funcionalidades

- **Alocação Dinâmica:** Criação de nós na memória sob demanda utilizando `malloc`.
- **Inserção Recursiva:** Algoritmo que posiciona as palavras na árvore seguindo a lógica da BST (elementos menores à esquerda, maiores à direita).
- **Contagem Automática:** Se uma palavra já existe na árvore, o algoritmo apenas incrementa o seu contador interno, otimizando o uso de memória.
- **Caminhamento Em-Ordem (In-Order):** Exibição dos dados do terminal de forma ordenada alfabeticamente.
- **Gerenciamento de Memória:** Liberação total da memória alocada (`free`) ao final da execução.
