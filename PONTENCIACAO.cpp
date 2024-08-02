#include<stdio.h>
int main(){

int nf, ni, pi, pf;

	printf("Digite um numero: ");
	scanf("%d", &ni);
	nf=1;
	
	printf("Digite a potencia:");
	scanf("%d", &pf);
	
	for(pi=1; pi<=pf; pi++){
		
		nf = ni*nf;
		
		printf("%d elevado a %d fica %d\n", ni, pi, nf);
	}

}
