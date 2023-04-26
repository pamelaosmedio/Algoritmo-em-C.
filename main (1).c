#include <stdio.h>

int main()
{
int qtdproduto []= {9333,9456,9789,9123,9639,9528,9417};
int codigo[]= {31,21,15,47};
	
	printf("vetor: %d \n", codigo[3]);
	printf("endereco de memoria: %p, valor da variavel: %d \n", &qtdproduto, qtdproduto[0]);
	printf("endereco de memoria: %p, valor da variavel: %d \n", &codigo, codigo[2]);
	return 0;
}