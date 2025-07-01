#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main(){
	
	system("color 0D");	
	setlocale(LC_ALL, "Portuguese_Brazil.1252");

float saldo= 2500.90, valor;
int opcao;

do{
	printf("============================================\n");
	printf("          $ CAIXA ELETRÔNICO $  \n");
	printf("============================================\n");
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
			printf("Processando");
			Sleep(800); printf(".");
			Sleep(800); printf(".");
			Sleep(800); printf(".\n");
			Sleep(500); 
			printf("Depósito realizado com sucesso!\n");
			
			saldo += valor;
			
			break;
			
		case 3:
			if (saldo <= 0) {
				printf("Você não possui saldo!\n");
			} else {
			printf("Quanto você deseja sacar?\n");
			scanf("%f", &valor);
			printf("Processando");
			Sleep(1000); printf(".");
			Sleep(1000); printf(".");
			Sleep(500); printf(".\n");
			Sleep(250); printf("Saque realizado com sucesso!\n");
			
			saldo -= valor;
		}
			
			break;
			
		case 4:
			printf("Saindo");
			Sleep(250); printf(".");
			Sleep(250); printf(".");
			Sleep(250); printf(".\n");
			break;
	}
	
	
} while (opcao = 4);

return 0;
}
