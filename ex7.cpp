#include <stdio.h>
#define TF 10
int main(void){
	
	int vetor1[TF], elem, TL=0, cont=0;
	
	printf("Insira o %d. numero:\n", TL+1);
	scanf("%d", &elem);
	while(TL < TF && elem > 0){
		vetor1[TL]=elem;
		TL++;
		if(TL < TF){
			printf("Insira o %d. numero:\n", TL+1);
			scanf("%d", &elem);
		}
		else{
			elem = 0;
		}
	}
	
	printf("Numero para consultar:\n");
	scanf("%d", &elem);
	
	while(elem > 0){
		for(int i=0; i<TL; i++){
			if(elem == vetor1[i]){
			cont++;
			printf("O num %d foi encontrado na pos: %d\n", cont, i);
			}
		}
		if(cont>0)
			printf("Foram encontrados: %d vezes\n", cont);
		printf("Numero para consultar:\n");
		scanf("%d", &elem);
	}
	
	return 0;
}
