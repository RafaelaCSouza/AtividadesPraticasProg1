#include <stdio.h>
#include <stdlib.h>

//EXERCICIO DE ORDENACAO

void main(){
    int vect[20];
	read(vect);
    order(vect);
    printf("Ordenado:");
    write(vect);
	return 0;
}

void read(int *v){
    int i = 0;

    while(i<20){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        i++;
    }
}

void write(int *d){
    int f = 0;

    while(f<20){
        printf(" %d ",d[f]);
        f++;
    }
}

void order(int *h){
    int s, t, u = 0;

    while(s<20){
        t=0;
        while(t<19){
            if(h[t]>h[t+1]){
                u = h[t];
                h[t] = h[t+1];
                h[t+1] = u;
            }
            t++;
        }
        s++;
    }
}

