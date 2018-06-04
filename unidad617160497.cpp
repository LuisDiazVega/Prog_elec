#include <stdio.h>
#include <stdlib.h>
void calculo(int  c){
	printf("%d ",c);
	if(c>1){if(c%2==0){calculo(c/2);
	}else{calculo(c*3+1);
	}
	
	}
}
	
int main(){
	
	int collatz=0;
	printf("Ingrese un numero y obtendra la serie de Collatz de este: ");
	scanf("%d",&collatz);	
	calculo(collatz);
	
	
			
	system("pause");
	
	return 0;
}

