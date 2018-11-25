#include<stdio.h>
#include<stdlib.h>

char	velha[9]        ,jogador='x';
int		jogada=0		,pos;
bool	jogo=1			,controle;


void limpar()
{
	for(int x=0;x<9;x++)
	{
		velha[x]=' ';
	}
}
void imprimir(){
	
	printf("  JOGO DA VELHA \n \n");
	for(int x=0;x<9;x++)
	{
		if(x==3 || x==6)
			printf("\n\n");
		printf("  [%c]",velha[x]);
	}
}

void trocaJogador(){
	if (jogador=='x')
	{
		jogador='o';	
	}
	else 
		jogador='x';
}

main()
{
	limpar();
	printf("  JOGO DA VELHA \n \n");
	
	while (jogo=1) {
		for (jogada=0; jogada<9; jogada++)
		{
			printf("\n Digite a posicao que deseja marcar ->");
			scanf("%d",&pos);
			if (velha[pos]==' ')
			{
				if (jogador=='x')
				{
					velha[pos]='x';
					jogador='o';
					system("cls");
					imprimir();	
					
				}
				else if (jogador=='o')
				{	
					velha[pos]='o';
					jogador='x';
					system("cls");
					imprimir();	
				}
				if (velha[0]=='x' && velha[1]=='x' && velha[2]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[3]=='x' && velha[4]=='x' && velha[5]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[6]=='x' && velha[7]=='x' && velha[8]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);	
				}
				else if (velha[0]=='x' && velha[3]=='x' && velha[6]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[1]=='x' && velha[4]=='x' && velha[7]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[2]=='x' && velha[5]=='x' && velha[8]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[0]=='x' && velha[4]=='x' && velha[8]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[2]=='x' && velha[4]=='x' && velha[6]=='x')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[0]=='o' && velha[1]=='o' && velha[2]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[3]=='o' && velha[4]=='o' && velha[5]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[6]=='o' && velha[7]=='o' && velha[8]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[0]=='o' && velha[3]=='o' && velha[6]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[1]=='o' && velha[4]=='o' && velha[7]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[2]=='o' && velha[5]=='o' && velha[8]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[0]=='o' && velha[4]=='o' && velha[8]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}
				else if (velha[2]=='o' && velha[4]=='o' && velha[6]=='o')
				{
					trocaJogador();
					printf("\n\n Vencedor: %c ", jogador);
					jogo=0;
					return(0);
				}				
				if (jogada==8)
				{
					printf("\n\n DEU VELHA!!!");
					return(0);
				}
			}
		}
	}
	limpar();
	return(0);
}
