#include <stdio.h>
#include<conio.h>
#include <cstring>
#include <stdlib.h>

struct fichaCarro{
 	char piloto[30];
 	char carro[30];
	float tempo;
 	int classificacao;
} fichaCarro[100];

struct Rally{
	struct fichaCarro carros[100];
	int total = 0;	
} Rally;

struct Rally rally;

void cadastrar_carro(){
	int op;
	int i;
	
	do{	
		printf("INDICE: %i\n");

		getchar();
		printf("Digite o nome do piloto\n");
		gets(rally.carros[i].piloto);
		
		printf("Digite o carro do piloto\n");
		gets(rally.carros[i].carro);
	
		printf("Digite o tempo do piloto\n");
		scanf("%f",&rally.carros[i].tempo);
	
		printf("Digite a classificacao do piloto\n");
		scanf("%f",&rally.carros[i].classificacao);
		
		
		system("cls");
		printf("Dados salvo com sucesso\n");
		system("pause");
		system("cls");
		fflush(stdin);
		printf("Deseja adicionar outro?(1-Sim/2-Nao)\n");
		scanf("%i",&op);
			
	}while(op == 1);
	
	printf("Listagem %i\n",rally.total);
	system("pause");
}

//void proc_piloto(char elem[50]){
//	int i = 1;
//	
//	strcpy(list.carros[list.total + 1].piloto,elem);
//	
//	while(list.carros[i].piloto != elem){	
//		printf("*\n");
//		i += 1;
//	}
//	
//	if(i = list.total + 1){
//		i = 0;
//	}
//}

void listar_ficha(){
	
	int i = 1;
	
	printf("Listagem %i\n",rally.total);
	for(i;i < 2;i++){
		printf("Piloto: %s\n",rally.carros[i].piloto);
		printf("Carro: %s\n",rally.carros[i].carro);
		printf("Tempo: %i\n",rally.carros[i].tempo);
		printf("Classificacao: %i\n\n",rally.carros[i].classificacao);
	}
}

int main(int argc, char** argv){

int op;

do{
system("cls");
printf("1 - Cadastrar ficha\n");
printf("2 - Listar ficha\n");
printf("0 - Sair\n\n");
printf(" --Selecione uma das opcoes--\n");
scanf("%i",&op);

	switch(op){
		case 0:
			exit(1);
		case 1:
			cadastrar_carro();
			break;
		case 2:
			listar_ficha();
			system("pause");
			break;
		default:
			printf("Opcao invalida");
			break;		
	}

}while(op != 3);

return 0;

}




