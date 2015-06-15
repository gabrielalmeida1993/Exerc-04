#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
	char nome[30];
	int idade;
	char gender;
	long int cpf;
	int nascdia, nascmes, nascano;
	int codsetor;
}cadastro;

cadastro cad;


int main ()
{
	int qtos;
	int i;


	printf(">> Cadastro de funcionarios <<\n");

	printf("- Nome: ");
	gets(cad.nome);
	printf("- Idade: ");
	scanf("%d",&cad.idade);
	fflush(stdin);
	printf("- Sexo: ");
	scanf("%c",&cad.gender);
	printf("- CPF: ");
	scanf("%ld", &cad.cpf);
	printf("- Data de nascimento: ");
	scanf("%d %d %d",&cad.nascdia,&cad.nascmes,&cad.nascano);
	printf("- Cod. Setor: ");
	scanf("%d", &cad.codsetor);
	
	printf("- Nome: %s\n", cad.nome);
	printf("- Idade: %d\n", cad.idade);
	printf("- Sexo: %c\n", cad.gender);
	printf("- CPF: %ld\n", cad.cpf);
	printf("- Data de nascimento: %d//%d//%d\n", cad.nascdia, cad.nascmes, cad.nascano);
	printf("- Cod. Setor: %d\n", cad.codsetor);
	

	
}

	
