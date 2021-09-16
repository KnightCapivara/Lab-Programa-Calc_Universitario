#include <stdio.h>
#include <stdlib.h>
int main()	

{
	int alunos_f, alunos_t, alunos_percapita, percentual_alunos_e_renda;
	
//Quantidade de alunos na universidade
	printf("Quantidade de alunos na faculdade!:");
	scanf("%d",&alunos_f);

//a)
	printf("Adicione a quantidade de alunos que tem a renda per capita inferior a R$1.6500:");
	scanf("%d",&alunos_percapita);

//b)
	printf("Quantos alunos que trabalham ou são aprendizes:");
	scanf("%d",&alunos_t);

//Calculo do percentual
 percentual_alunos_e_renda=(alunos_f-alunos_percapita) /100;

	printf("percentual de alunos total e renda per capita: %d\n",percentual_alunos_e_renda);

//quantidade de dinheiro para receber para bolsa
if (alunos_percapita*400)
  printf("\nQuanto de dinheiro que a faculdade tem que receber para bolsa: %d\n", alunos_percapita * 400);

	return 0;
}