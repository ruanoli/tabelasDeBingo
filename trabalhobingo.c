#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i;
    int cartela[10];
    int quant;
    int j;
   
   	//Inserir quantidade de tabelas
	printf("Digite a quantidade de tabelas:\n");
	scanf("%d", &quant);
	fflush(stdin);
	system("cls");
	
	//Inserindo números aleatórios na quantidade de cartelas que foi definida.
    srand(time(NULL));
    for(i = 0; i < quant; i++){ 
		printf("\n\ncartelas\n");
		for(j = 0; j<10; j++){
			cartela[i] = 1 + rand() % 99;
    		printf("%d ", cartela[i]);
   		}
	}	
	system("pause");
    return 0;
}

