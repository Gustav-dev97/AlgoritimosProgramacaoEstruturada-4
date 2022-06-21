// Manipulação de numeros

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int count = 0;

// Criando a Pilha
struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st *s)
{
    s->top = -1;
}

// Checando se a pilha está cheia
int isfull(st *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Checando se a pilha está vazia
int isempty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Adicionando elementos na pilha
void push(st *s, int newitem)
{
    if (isfull(s))
    {
        printf("PILHA CHEIA");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
    count++;
}

// Removendo elementos da pilha
void pop(st *s)
{
    if (isempty(s))
    {
        printf("\n PILHA VAZIA \n");
    }
    else
    {
        printf("Item retirado= %d", s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

// Imprimindo elementos da pilha
void printStack(st *s)
{
    printf("Pilha: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// chamada do código
int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    printf("\nDepois de retirado\n");
    printStack(s);
}
