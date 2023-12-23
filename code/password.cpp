#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 17
int main (int argc,char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	char PassWord[N]={"claudiofrancisco"};
	char PassDeEntrada[N];
	int comp,parar=0;
	
	while(parar==0){
		printf("Digite a senha.\n");
		gets(PassDeEntrada);
		fflush(stdin);
		
		comp=strcmp(PassWord,PassDeEntrada);
		if (comp==0){
			parar+=1;
			system("cls");
			printf("----------------------------------\n");
			printf("A senha está correta!\n");
			printf("----------------------------------\n");
		}
		else{
			system("cls");
			printf("----------------------------------------\n");
			printf("A senha está incorreta, tente novamente.\n");
			printf("----------------------------------------\n");
		}
	}
	system("Pause");
	return 0;
}
