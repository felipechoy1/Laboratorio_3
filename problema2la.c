          
/* Autor: Felipe Antonio Ixcamparic Choy  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema2la.c -o problema2la
Fecha: jue mar  12 19:29:20 CST 2020
librerias: <stdio.h>
Resúmen: Se crea un programa encargado de mostrar los números primos de un rango dado.
Entradas: x, y
Salida: x, y 
*/

//Librerias
#include <stdio.h>

//1 Se declaran variables de entrada/salida.x,y serán las cotas. z, será el contador y w será un iterador. 

int x=0,y=0,z=0,w=0;
int main(){

//2 Se solicitan las cotas al usuario

printf("Escriba el primer número del rango \n");
scanf("%i",&x);
printf("Escriba el segundo número del rango (debe ser mayor al anterior) \n");
scanf("%i",&y);


//3 Se establece que el rango tenga sentido, es decir, que la cota inferior no sea mas grande que la cota mayor.
//
if(x>y){
printf("Por favor ingrese un rango del menor al inicio y el mayor al final. \n");}

// 4 Se inicia el caso en el que el usuario cumple con las condiciones de las cotas. 
else{ 
	
	
//5 Se printea el texto preliminar indicando los números primos (así se evita que el loop repita el mismo texto varias veces.

	printf("Los números primos son \n");

//6 Se hace un for que vaya desde la cota inferior hasta llegar a la mayor, incrementandose en cada ciclo, en cada uno de ellos se agregara cada printeada del número primo obtenido en el for siguiente.	
	for(x;x<=y;x++){
	
//7 Se crea un for que evalúe cada x verificando si es primo, se realiza verificando el residúo entre él y la iteracion (que empieza desde 1).Donde le añadirá 1 punto al contador. Pero solo mostrará los números que cumplan con la condición de tener 2 puntos (equivalente a solo ser divisibles entre 1 y él mismo). 		
		for(w=1;w<=x;w++){
		if(x%w==0){
			z++;
		}
	}

		if(z==2){
	
		printf("%i \n",x);
	}
// 8 Luego se resetea el contador a 0 para que no conserve el valor obtenido en el "x" valuado.		
	z=0;
}
}

//9 Finaliza el programa.
return(0);
}
