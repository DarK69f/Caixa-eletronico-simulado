#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil.1252");

float saldo= 2500.90, valor;
int opcao;

do{
	printf("==============CAIXA ELETRÔNICO==============\n");
	printf("1 - Ver Saldo\n");
	printf("2 - Depositar\n");
	printf("3 - Sacar\n");
	printf("4 - Sair\n");
	printf("============================================\n");	
	scanf("%d", &opcao);
	
	switch (opcao) {
		
		case 1:
			printf("Seu saldo é de: R$ %.2f\n", saldo);
			break;
			
		case 2:
			printf("Quanto você deseja depositar?\n");
			scanf("%f", &valor);
			printf("Depósito realizado!\n");
			
			saldo += valor;
			
			break;
			
		case 3:
			printf("Quanto você deseja sacar?\n");
			scanf("%f", &valor);
			printf("Saque realizado!\n");
			
			saldo -= valor;
			
			
			break;
			
		case 4:
			printf("Saindo...\n");
			break;
	}
	
	
} while (opcao = 4);

return 0;
}
