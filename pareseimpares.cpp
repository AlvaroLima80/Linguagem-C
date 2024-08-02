#include<stdio.h>

int main(){
	
	int num1, num2, resto, np, ni;
	
	np = 0;
	ni = 1;
	
	printf("Digite um numero:");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero:");
	scanf("%d", &num2);
	
	printf("Numeros entre eles:\n");
	
	for(num1=num1; num1<=num2; num1++){
		printf("%d\n", num1);
		resto = num1%2;
		if(resto==0){
			printf("Numero par\n");
			np = np+num1;
		}else{
			printf("Numero impar\n");
			ni = ni*num1;
		}
		
	}printf("O total da soma dos pares %d", np);
	printf("\nO total da multiplicação de impares é %d", ni);
		
}
