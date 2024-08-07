#include<stdio.h>

int main(){
	
	int v[5] = {10, 20, 30, 40, 50}; //prestar atenção que para atribuir valor ao vetor, é necessário que os valores estejam entre parenteses!
	
	int i;
	
	int soma = 0;
	
	for(i = 0; i<5; i++){
		
		soma = v[i];
		
	}	
		
		printf("A soma fica: %", soma);
	
}
