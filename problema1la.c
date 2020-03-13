/* Autor: Felipe Antonio Ixcamparic Choy 
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema1la.c -o problema1la
Fecha: mie mar 11 23:19:20 CST 2020
librerias: <stdio.h>
Resúmen: Se programa un verificador de números primos haciendo uso de for. 
Entradas: n
Salida: i,c 
*/

//Librerias
#include <stdio.h>

// Declaración del código:

int main(){
//1 Se declaran 3 variables, una para iteraciones, otra la cual contendrá el numero primo (o no) y un contador seteado en 0 desde el inicio.
int i,n,c=0;

//2 Se solicita el número al usuario y se lee.
printf("\n //VERIFICADOR DE NÚMEROS PRIMOS BY: FELIPE CHOY// \n //ver.1.1//  \n");
printf("\n Ingrese un número : ");
scanf("%i",&n);

//Se crea un condicional el cual cerrará el programa si no se tiene un número mayor que 1.
if(n<=1){
printf("\n Ingrese  un número mayor que 1.\n ");
printf(" //GRACIAS POR USAR EL PROGRAMA// \n");
}
//4 En caso contrario se inicia el análisis.
else{

//5. Haciendo uso de un for, se setea el rango de 1 a n. Ésto porque para verificar que sea primo se dividirá desde 1 hasta n. Sabemos que los números primos solo son divisibles entre ellos y 1. En ese caso se repetirá la iteración hasta llegar al número igresado.
//5.1 Se setea desde 1 ya que no se puede sacar el residúo de 1/0 (es indefinido). 
for(i=1; i<=n; i++){


//6 Se evalúa el residúo entre el número ingresado y la iteración en curso
if(n%i==0){

//7 En caso de ser cierto el contador ganará un punto, donde esos puntos significan el número de divisores que tendrá el número.
c++;
}
}

// 8 Se evalúa al contador (número de divisores), en donde si este tiene 2 (condición de ser primo) nos devolverá el resultado que lo és. En cualquier otro caso contrario pues no será primo
if(c==2){
printf(" Es primo \n");
printf("\n //GRACIAS POR USAR EL PROGRAMA// \n");
}
else{
printf("No es primo \n");
printf("\n  //GRACIAS POR USAR EL PROGRAMA// \n");
}
}
// 9 Finaliza el programa
return(0);
}

