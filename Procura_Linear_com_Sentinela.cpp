#include <stdio.h>
#include<conio.h>
#include <cstring>
#include <stdlib.h>

struct fichaCarro{
 	char piloto[30];
 	char carro[30];
	float tempo;
 	int classificacao;
} fichaCarro;

typedef struct Rally{
	struct fichaCarro carros[];
	int total;	
} Rally;

Rally rally;

void cadastrar_carro();
void listar_ficha();
void resultado(int i);
void proc_piloto();

int main(int argc, char** argv){

int op;

do{
system("cls");
printf("1 - Cadastrar ficha\n");
printf("2 - Listar ficha\n");
printf("3 - Consultar Piloto\n");
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
		case 3:
			proc_piloto();
			break;	
		default:
			printf("Opcao invalida");
			break;		
	}

}while(op != 3);

return 0;
}

void cadastrar_carro(){
	int op;
	
	do{	
		rally.total += 1;
		int i = rally.total;
		printf("INDICE: %i\n",rally.total);

		getchar();
		printf("Digite o nome do piloto\n");
		gets(rally.carros[i].piloto);
		
		printf("Digite o carro do piloto\n");
		gets(rally.carros[i].carro);
	
		printf("Digite o tempo do piloto\n");
		scanf("%f",&rally.carros[i].tempo);
	
		printf("Digite a classificacao do piloto\n");
		scanf("%i",&rally.carros[i].classificacao);
		system("cls");
		printf("Dados salvo com sucesso\n");
		system("pause");
		system("cls");
		fflush(stdin);
		printf("Deseja adicionar outro?(1-Sim/2-Nao)\n");
		scanf("%i",&op);
			
	}while(op == 1);
	
	system("pause");
}

void listar_ficha(){
	
	int i = 1;
	
	printf("Listagem %i\n",rally.total);
	for(i;i <= rally.total;i++){
		printf("Piloto: %s\n",rally.carros[i].piloto);
		printf("Carro: %s\n",rally.carros[i].carro);
		printf("Tempo: %i\n",rally.carros[i].tempo);
		printf("Classificacao: %i\n\n",rally.carros[i].classificacao);
	}
}

void proc_piloto(){
	int i = 1;
	char elem[50];
	
	printf("Digite o nome do piloto:\n");
	scanf("%s",&elem);
	
	fflush(stdin);
	
	strcpy(rally.carros[rally.total + 1].piloto,elem);

	while(strcmp(rally.carros[i].piloto, elem) != 0){	
		i+=1;
	}
	printf("\nTotal: %i\n:",rally.total);
	if(i = rally.total + 1){
		i = 0;
		printf("Piloto nao encontrado!\n");
	}else{
		resultado(i);
	}
	system("pause");
	
}

void resultado(int i){
	printf("Piloto: %s\n",rally.carros[i].piloto);
	printf("Carro: %s\n",rally.carros[i].carro);
	printf("Tempo: %i\n",rally.carros[i].tempo);
	printf("Classificacao: %i\n\n",rally.carros[i].classificacao);
}



