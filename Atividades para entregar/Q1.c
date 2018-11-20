#include <stdio.h>
#include <stdlib.h>


void main()
{

    int n1, n2, n3, i, p, m;
    printf("Escreva 3 numeros para calcular o MMC:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    m=1;
    p=2;
    while ( n1>1 || n2>1 || n3>1)
    {
        i=0;
        if(n1%p==0)
        {
            n1=n1/p;
            i=1;
        }
        if(n2%p==0)
        {
            n2=n2/p;
            i=1;
        }
        if(n3%p==0)
        {
            n3=n3/p;
            i=1;
        }
        if(i==1)
        {
            m=m*p;
        }
        else
        {
            p=numero_primo(p);
        }
    }
    printf("O MMC eh: %d",m);


}

int numero_primo(int pr1){
    int x, y;
    y=1;
    while (y>0)
    {
        pr1++;
        x=2;
        while(pr1%x>0)
        {
            x++;
        }
        if(x==pr1)
        {
            y=0;
        }
    }
    return pr1;
}
