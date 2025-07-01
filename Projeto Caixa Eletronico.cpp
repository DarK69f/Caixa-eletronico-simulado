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
	printf("          $ CAIXA ELETR�NICO $  \n");
	printf("============================================\n");
	printf("1 - Ver Saldo\n");
	printf("2 - Depositar\n");
	printf("3 - Sacar\n");
	printf("4 - Sair\n");
	printf("============================================\n");	
	
	int sucesso = scanf("%d", &opcao);
	if (sucesso != 1) {
    printf("? Entrada inv�lida! Digite apenas n�meros.\n");
    while (getchar() != '\n');
    continue;
	}
 
	switch (opcao) {
		
		case 1:
			printf("============================================\n");
			printf("Seu saldo � de: R$ %.2f\n", saldo);
			printf("============================================\n");
			printf("Pressione ENTER para continuar...\n");
			printf("============================================\n");
			getchar(); getchar();
			break;
			
		case 2:
			printf("Quanto voc� deseja depositar?\n");
			scanf("%f", &valor);
			printf("Depositando");
			Sleep(800); printf(".");
			Sleep(800); printf(".");
			Sleep(800); printf(".\n");
			Sleep(500); 
			printf("Dep�sito realizado com sucesso!\n");
			
			saldo += valor;
			
			printf("============================================\n");
			printf("Seu saldo agora � de: R$ %.2f\n", saldo);
			printf("============================================\n");
			printf("Pressione ENTER para continuar...\n");
			printf("============================================\n");
			getchar(); getchar();
			break;
			
		case 3:
			if (saldo <= 0) {
				printf("Voc� n�o possui saldo!\n");
			} else {
			printf("Quanto voc� deseja sacar?\n");
			scanf("%f", &valor);
			
			if (valor > saldo) {
				printf("Voc� n�o possui saldo suficiente para realizar esse saque!\n");
			} else if (valor <= 0) {
				printf("Valor inv�lido!\n");
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
			printf("Seu saldo agora � de: R$ %.2f\n", saldo);
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
			printf("Op��o inv�lida!\n");
			Sleep(500);
	}
	
} while (opcao = 4);

return 0;
}
