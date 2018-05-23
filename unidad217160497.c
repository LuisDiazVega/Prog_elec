#include <stdio.h>

int main()
{
int numero_posicion= 0;
int numero_F =0;

printf("Ingrese un numero del 1 al 10 y obtendra el numero de Fibonacci correspondiente \n");
scanf("%d",&numero_posicion);
if (numero_posicion<3)
{printf("El numero de Fibonacci es 1");
}if (numero_posicion==3)
{printf("El numero de Fibonacci es 2");
}if (numero_posicion==4)
{printf("El numero de Fibonacci es 3");
}if (numero_posicion==5)
{printf("El numero de Fibonacci es 5");
}if (numero_posicion==6)
{printf("El numero de Fibonacci es 8");
}if (numero_posicion==7)
{printf("El numero de Fibonacci es 13");
}if (numero_posicion==8)
{printf("El numero de Fibonacci es 21");
}if (numero_posicion==9)
{printf("El numero de Fibonacci es 34");
}if (numero_posicion==10)
{printf("El numero de Fibonacci es 55");
}
return 0;
}


