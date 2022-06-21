# AlgoritimosProgramacaoEstruturada- Parte 4

Este repositório traz a quarta e última parte de um compilado de algoritmos e programação estruturada na linguagem C desenvolvidos no 4º Semestre de Análise e Desenvolvimento de Sistemas

Esta ultima parte abordará a respeito de Filas:

Exemplos: 
 
   - Manipulação Números
 
E exercícios:
 
   - Exercício 1
   - Exercício 2
   - Exemplo 3
   - Exercício Fila 1
   - Exercício Fila 2
    
-----------------------------------------------------------------------------------------------------------------------------------------------------------

# Filas:

Definição e elementos de pilhas:

Segundo Tenenbaum, Langsam e Augenstein (2007), uma pilha tem como definição básica ser um conjunto de elementos ordenados que permite a inserção e a remoção de mais elementos em apenas uma das extremidades da estrutura denominada topo da pilha. 
Assim, um novo elemento que é inserido passa a ser o topo da pilha, e o único elemento que pode ser removido da pilha é o elemento que está no topo.

A criação de uma pilha simples em C pode ser declarada com:
• Uma estrutura de dados contendo dois elementos apenas.
• Um vetor para armazenar os elementos da pilha.
• Uma variável do tipo inteiro para armazenar a posição atual do topo
da pilha.

A principal diferença entre uma pilha e um vetor está na forma de utilização dessas estruturas. Enquanto declaramos um vetor com um tamanho fixo, declaramos a pilha com um tamanho dinâmico que está sempre mudando conforme os elementos são inseridos ou removidos, por meio da alocação dinâmica de memória.

Regras para operação de pilhas:

Os elementos inseridos em uma pilha apresenta, uma sequência de inserção. O primeiro elemento que entra na pilha só pode ser removido por último, após todos os outros elementos serem removidos.
Segundo Celes, Cerqueira e Rangel (2004), os elementos da pilha só podem ser retirados na ordem inversa da ordem em que nela foram inseridos. Isso é conhecido como LIFO (last in, first out, ou seja, o último que entra é o primeiro a sair) ou FILO (first in, last out, ou seja, primeiro que entra é o último a sair).

-----------------------------------------------------------------------------------------------------------------------------------------------------------

![Inserindo Elementos](https://user-images.githubusercontent.com/76456917/174708324-fe567543-0734-49fe-8c79-d2dcf13c3aa7.png)

-----------------------------------------------------------------------------------------------------------------------------------------------------------

![Retirando Elementos](https://user-images.githubusercontent.com/76456917/174708429-513fa90a-475a-413e-9b5a-5a2856bd8002.png)
