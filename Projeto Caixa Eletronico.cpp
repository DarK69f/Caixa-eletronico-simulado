#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main(){
	
	system("color 0B");	
	setlocale(LC_ALL, "Portuguese_Brazil.1252");

float saldo= 0, valor;
int opcao;

do {
	system("cls");
	
	printf("============================================\n");
	printf("          $ CAIXA ELETRÔNICO $  \n");
	printf("============================================\n");
	printf("1 - Ver Saldo\n");
	printf("2 - Depositar\n");
	printf("3 - Sacar\n");
	printf("4 - Sair\n");
	printf("============================================\n");	
	
	int sucesso = scanf("%d", &opcao);
	if (sucesso != 1) {
    printf("? Entrada inválida! Digite apenas números.\n");
    while (getchar() != '\n');
    continue;
	}
 
	switch (opcao) {
		
		case 1:
			printf("============================================\n");
			printf("Seu saldo é de: R$ %.2f\n", saldo);
			printf("============================================\n");
			printf("Pressione ENTER para continuar...\n");
			printf("============================================\n");
			getchar(); getchar();
			break;
			
		case 2:
			printf("Quanto você deseja depositar?\n");
			scanf("%f", &valor);
			printf("Depositando");
			Sleep(800); printf(".");
			Sleep(800); printf(".");
			Sleep(800); printf(".\n");
			Sleep(500); 
			printf("Depósito realizado com sucesso!\n");
			
			saldo += valor;
			
			printf("============================================\n");
			printf("Seu saldo agora é de: R$ %.2f\n", saldo);
			printf("============================================\n");
			printf("Pressione ENTER para continuar...\n");
			printf("============================================\n");
			getchar(); getchar();
			break;
			
		case 3:
			if (saldo <= 0) {
				printf("Você não possui saldo!\n");
			} else {
			printf("Quanto você deseja sacar?\n");
			scanf("%f", &valor);
			
			if (valor > saldo) {
				printf("Você não possui saldo suficiente para realizar esse saque!\n");
			} else if (valor <= 0) {
				printf("Valor inválido!\n");
			} else {
				
			printf("Sacando");
			Sleep(1000); printf(".");
			Sleep(1000); printf(".");
			Sleep(500); printf(".\n");
			Sleep(250); printf("Saque realizado com sucesso!\n");
			
			saldo -= valor;
			}
		}
			
			printf("============================================\n");
			printf("Seu saldo agora é de: R$ %.2f\n", saldo);
			printf("============================================\n");
			printf("Pressione ENTER para continuar...\n");
			printf("============================================\n");
			getchar(); getchar();
			break;
			
		case 4:
			printf("Saindo");
			Sleep(250); printf(".");
			Sleep(250); printf(".");
			Sleep(250); printf(".\n");
			break;
			
		default:
			printf("Opção inválida!\n");
			Sleep(500);
	}
	
} while (opcao = 4);

return 0;
}
