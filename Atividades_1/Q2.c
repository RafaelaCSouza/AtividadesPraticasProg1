#include <stdio.h>
#include <stdlib.h>


void main()
{
    char palavra[256];
    int op, v1, i=0;

    printf("Digite: \n\n 1 - Para Cifrar uma palavra \n 2 - Para Decifrar uma palavra \n \n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("\nDigite a palavra a ser cifrada: \n");
            scanf("%s",palavra);
            printf("\nDigite a chave:\nOBS:. Deve ser um numero de 1 ate 25. \n \n ");
            scanf("%d",&v1);
            cifra_palavra(palavra,v1);
            break;

        case 2:
            printf("Digite a palavra a ser decifrada: ");
            scanf("%s",palavra);
            printf("\nDigite a chave:\nOBS:. Deve ser um numero de 1 ate 25. \n \n ");
            scanf("%d",&v1);
            decifra_palavra(palavra,v1);
            break;

        default:
            printf("Valor incorreto!");
    }
}

void cifra_palavra(char *vect, int j)
{
    int x = 0;
    while(vect[x]!= '\0')
    {
        vect[x]= vect[x]+j;
        x++;
    }
    printf("%s",vect);
}

void decifra_palavra(char *vect, int j)
{
   int x = 0;
    while(vect[x]!= '\0')
    {
        vect[x]= vect[x]-j;
        x++;
    }
    printf("%s",vect);
}
