#include <stdio.h>

int main(){
	int cantidad, i = 0, j, k, l, distinto, par, impar = 0;
	char palabra[20];
	int contador;

	printf("Ingrese la cantidad de letras : ");
	scanf("%d", &cantidad);
	printf("Ingrese las letras : ");
	scanf("%s", &palabra);
	cantidad--;
	par = cantidad % 2;

	//Dice si se puede formar un palindromo 
	while(i<=cantidad){
		contador = 1;
		distinto = 1;
		if (i==0){
			for(j=1;j<=cantidad;j++){
				if (palabra[i]==palabra[j]){
					contador +=1;
				}
			}
			k = contador % 2;
			if (k == 1){
				impar += 1;
			}
			i++;
		}else{
			for(l=0;l<i;l++){
				if (palabra[i]==palabra[l]){
					distinto = 0;
				}
			}
			if (distinto == 1){
				for(j=i+1;j<=cantidad;j++){
					if (palabra[i]== palabra[j]){
						contador += 1;
					}
				}
				k = contador % 2;
				if (k == 1){
					impar += 1;
				}
			}
			i++;
		}
	}
	printf("\n\n");
	if (par == 1){
		if(impar == 0){
			printf("1");
		}else{
			printf("0");
		}
	}else if (par == 0){
		if (impar == 1){
			printf("1");
		}else{
			printf("0");
		}
	}
	return 0;
}

