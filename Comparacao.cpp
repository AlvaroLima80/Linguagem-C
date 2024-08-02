#include<stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Digite o 1° numero: ");
	scanf("%d", &num1);
	printf("O numero digitado foi: %d", num1);


	printf("\nDigite o 2° numero: ");
	scanf("%d", &num2);
	printf("O numero digitado foi: %d", num2);
	
	if(num1>num2){
		printf("\nO numero %d eh maior do que %d.\n", num1, num2);
		printf("\nOrdem decrescente.\n");
		
		for(num1=num1; num1>=num2; num1--){
			printf("%d\n", num1);
		}
	}else{
		printf("\nO numero %d é maior do que %d.", num2, num1);
		
		printf("\nOrdem crescente:\n");
		for(num1=num1; num1<=num2; num1++){
			printf("%d\n", num1);
		}
	}
}
