📚 Repositório de Listas em C para Estudo e Treinamento

Seja bem-vindo(a) ao repositório dedicado ao estudo e treinamento de Listas em C! Este projeto foi criado com o objetivo de fornecer uma coleção de implementações e exercícios práticos envolvendo diferentes tipos de estruturas de dados baseadas em listas na linguagem C.
🌟 Objetivo

O principal objetivo deste repositório é:

    Fornecer código-fonte limpo e bem comentado para as estruturas de dados de lista mais comuns.

    Servir como um ambiente de treinamento para a manipulação de ponteiros, alocação de memória dinâmica (malloc, free) e algoritmos de lista em C.

    Ajudar a solidificar o conhecimento teórico sobre estruturas de dados na prática.

📋 Estruturas de Listas Incluídas

Este repositório aborda e implementa os seguintes tipos de listas:
1. Lista Simplesmente Encadeada (Singly Linked List)

A estrutura fundamental onde cada nó aponta apenas para o próximo elemento.

    Implementação: singly_linked_list.c / singly_linked_list.h

    Funcionalidades Incluídas:

        Inserção no início, fim e em posição específica.

        Remoção do início, fim e por valor.

        Busca por valor.

        Impressão da lista.

        Liberação da memória (destruição da lista).

2. Lista Duplamente Encadeada (Doubly Linked List)

Nesta variação, cada nó tem ponteiros tanto para o próximo quanto para o elemento anterior, facilitando a navegação em ambas as direções.

    Implementação: doubly_linked_list.c / doubly_linked_list.h

    Funcionalidades Incluídas:

        Inserção e remoção em ambas as extremidades e no meio.

        Impressão reversa.

3. Lista Circular Simplesmente Encadeada (Singly Circular Linked List)

Uma lista onde o ponteiro do último nó aponta de volta para o primeiro nó.

    Implementação: circular_linked_list.c / circular_linked_list.h

    Funcionalidades Incluídas:

        Operações adaptadas para o tratamento do ciclo.
