#include <stdio.h>

int main (int argc, char *argv[]){
	char sexo;
	printf("Qual é o seu sexo? (f/m) ");
	scanf("%c", &sexo);

	const char* resultado =
		(sexo == 'f' || sexo == 'F')?
		"Você é do sexo feminino. \n":
		(sexo == 'm' || sexo == 'M')?
		"Você é do sexo masculino. \n":
		"ERRO, digite F ou M\n";
	printf(resultado);
}
