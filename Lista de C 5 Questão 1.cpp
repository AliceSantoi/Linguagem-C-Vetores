#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int A[8], i;
	for(i = 0; i < 8; i++){
		printf("Informe o %i� n�meros: ", i+1);
		scanf("%i", &A[i]);
	}
	for(i = 7; i >= 0; i--){
		printf("\n%i\n", A[i]);
	}
	return(0);
}
