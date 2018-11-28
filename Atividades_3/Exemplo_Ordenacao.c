#include <stdio.h>
#include <stdlib.h>


int main(){

    int vector[9]; //vetor a ser ordenado

    leia(vector,9);
    ordena(vector,9);

return 0;
}

void leia(int *vect1, int d){

    int l=0;

    while( l<d){

        printf("\nDigite um numero: ");
        scanf("%d", &vect1[l]);
        l++;
    }
}



void ordena( int *vect, int t){

    int x,y,z;

    x=0;
    while(x<t-1){
        y=0;
        while(y<t-(x+1)){
            if(vect[y]>vect[y+1]){
                z=vect[y];
                vect[y]=vect[y+1];
                vect[y+1]=z;
            }
            y++;
        }
        x++;
    }

}
