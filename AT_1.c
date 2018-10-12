#include <stdoi.h>
#include <stdlib.h>

void main(){

	ex1();
	return 0;
}

void ex1(){

	int na,nb,ma,mb,x = 0;

	while(x<10){
		scanf("%d %d",&na, &nb);
		if(x==0){
			ma=na;
			mb=nb;
		}
		if((na-nb)>(ma-mb)){
			ma=na;
			mb=nb;
		}
		x++;
	}

}