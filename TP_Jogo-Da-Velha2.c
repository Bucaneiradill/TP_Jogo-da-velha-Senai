/*Jogo da velha*/

/* 
	--- Trabalho em dupla ---
	
	   Heloisa Oliveira Timóteo
	   Ramiro Noronha Reis Ribeiro
*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>
main() {
	setlocale (LC_ALL, "Portuguese");
	int i, j, cont =0, teste=0, teste2;
	char jogo[3][3], jogador1[50], jogador2[50], escolha1, escolha2;
	
	printf("Vamos jogar o jogo da velha\n");
	printf("\t\tColuna 1\tColuna 2\tColuna 3\n");
	for(i=0; i<3; i++){
		printf("Linha %d\t", i+1);
		for(j=0; j<3; j++){
			jogo[i][j] = '.';
			printf("\t   %c\t", jogo[i][j]);
		}
	
		printf("\n\n");
	}
	printf("Clique enter para continuar\n");
	system("pause");
	system("cls");
	printf ("jogador 1 digite seu nome: ");
	gets(jogador1);
	fflush(stdin);
	printf ("jogador 2 digite seu nome: ");	
	gets(jogador2);
	fflush(stdin);
	
	do {
	
		printf("%s escolha seu símbolo: ", jogador1);
		fflush(stdin);
		scanf ("%c", &escolha1);
		fflush(stdin);
	
		if (escolha1 == 'x' || escolha1 == 'X'){
			escolha1 = 'X';
			escolha2 = 'O';
		}
		else if (escolha1 == 'o' || escolha1 == 'O'){
			escolha1 = 'O';
			escolha2 = 'X';
		}
		else
		printf("Opção inválida\n");
	} while(escolha1 != 'o' && escolha1 != 'O' && escolha1 != 'X' && escolha1 != 'x');
	
	printf("%s escolheu %c\n", jogador1, escolha1);
	printf("%s ficou com %c\n", jogador2, escolha2);
	printf("\n");
	system("pause");
	system("cls");
		printf("\t\tColuna 1\tColuna 2\tColuna 3\n");
		for(i=0; i<3; i++){
			printf("Linha %d\t", i+1);
			for(j=0; j<3; j++){
				printf("\t   %c\t", jogo[i][j]);
			}
			printf("\n\n");
		}
	
	
	do {
		teste=0;
		do{
		
		printf ("%s escolha a linha: ", jogador1);
		scanf ("%d", &i);
		printf ("%s escolha a coluna: ", jogador1);
		scanf ("%d", &j);
			if(jogo[i-1][j-1] == '.'  && i-1<3 && j-1<3){
			
			jogo[i-1][j-1] = escolha1;
			teste++;
			}
			else
			printf("Escolha outra opção\n");
		
	}while(teste == 0 );
	
	system("cls");
		printf("\t\tColuna 1\tColuna 2\tColuna 3\n");
		for(i=0; i<3; i++){
			printf("Linha %d\t", i+1);
			for(j=0; j<3; j++){
				printf("\t   %c\t", jogo[i][j]);
			}
			printf("\n\n");
		}
		
		for(i=0; i<3; i++){
				j=0;
				if(jogo[i][j] == jogo[i][j+1] && jogo[i][j] == jogo[i][j+2] && jogo[i][j] != '.')
				cont++;
			}
			
			for(j=0;j<3;j++){
				i=0;
				if(jogo[i][j] == jogo[i+1][j] && jogo[i][j] == jogo[i+2][j] && jogo[i][j] != '.')
				cont++;
			}
			j=0;
		
			if(jogo[i][j] == jogo[i+1][j+1] && jogo[i][j] == jogo[i+2][i+2] && jogo[i][j] != '.')
					cont++;
			else if (jogo[i+2][j] == jogo[i+1][j+1] && jogo[i][j+2] == jogo[i+1][j+1] && jogo[i+2][j] != '.')
				cont++;
			
			if(cont != 0)
			{
			
			printf("%s Venceu!!!", jogador1);
			break;
			}
				teste2=0;
				for(i=0;i <3; i++){
					for(j=0;j <3; j++)
					{
						
						if(jogo[i][j] == '.')
						teste2++;
					}
				}
				if(teste2 == 0)
				break;
		teste=0;
		do{
		
		printf ("%s escolha a linha: ", jogador2);
		scanf ("%d", &i);
		printf ("%s escolha a coluna: ", jogador2);
		scanf ("%d", &j);
			if(jogo[i-1][j-1] == '.' && i-1<3 && j-1<3 ){
			
			jogo[i-1][j-1] = escolha2;
			teste++;
			}
			else
			printf("Escolha outra opção\n");
		}while(teste==0);
		
		system("cls");
		printf("\t\tColuna 1\tColuna 2\tColuna 3\n");
		for(i=0; i<3; i++){
			printf("Linha %d\t", i+1);
			for(j=0; j<3; j++){
				printf("\t   %c\t", jogo[i][j]);
			}
			printf("\n\n");
		}
		
		for(i=0; i<3; i++){
				j=0;
				if(jogo[i][j] == jogo[i][j+1] && jogo[i][j] == jogo[i][j+2] && jogo[i][j] != '.')
				cont++;
			}
			
			for(j=0;j<3;j++){
				i=0;
				if(jogo[i][j] == jogo[i+1][j] && jogo[i][j] == jogo[i+2][j] && jogo[i][j] != '.')
				cont++;
			}
			j=0;
		
			if(jogo[i][j] == jogo[i+1][j+1] && jogo[i][j] == jogo[i+2][i+2] && jogo[i][j] != '.')
					cont++;
			else if (jogo[i+2][j] == jogo[i+1][j+1] && jogo[i][j+2] == jogo[i+1][j+1] && jogo[i+2][j] != '.')
				cont++;
				if(cont != 0){
					printf("%s Venceu!!!", jogador2);
					break;
				}
					
		
	}while(cont == 0 && teste2!=0);
	
	if(teste2 == 0)
	{
		printf("\nDeu empate\n");
	}
		printf("\nFim de jogo\n");
	
	system("pause");
}
