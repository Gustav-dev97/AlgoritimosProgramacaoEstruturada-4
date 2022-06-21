// Exercício FILA 01

#include <stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = -1;
int Front = -1;
main()
{
    int ch;
    while (1)
    {
        printf("1.Operacao de inclusao\n");
        printf("2.Operacao de remocao\n");
        printf("3.Exibir fila\n");
        printf("4.Sair\n");
        printf("Entre com a opcao desejada : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Opcao invalida \n");
        }
    }
}

void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
        printf("Lista Cheia \n");
    else
    {
        if (Front == -1)

            Front = 0;
        printf("Elemento a ser inserido na fila\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}

void dequeue()
{
    if (Front == -1 || Front > Rear)
    {
        printf("Lista Vazia\n");
        return;
    }
    else
    {
        printf("Elemento a ser retirado na fila: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
}

void show()
{

    if (Front == -1)
        printf("Fila Vazia \n");
    else
    {
        printf("Fila: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}
