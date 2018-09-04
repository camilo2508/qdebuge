#include <QCoreApplication>
/*# lab2_20182*/
/*Archivo con la plantilla de codigo y las instrucciones del lab2*/
#include <iostream>

/*1. Declare una cadena de caracteres llamada my_string utilizando un puntero */

//std::cout<<"Cadena my_string: ";
//std::cout<< /*Aqui va la cadena my_string */ <<std::endl;

/*2. Declare una estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
* int
* char
* float
* char
* double
 * int
 */

/* Declare otra estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
 * int
 * int
 * float
 * char
 * char
 * double
 */

//Declare punteros a cada una de las estructuras e imprima en pantalla el valor de sus miembros haciendo uso
//del operador ->
//Luego imprima de nuevo el valor de los miembros de la estructura pero esta vez haga uso de "type casting",
//operadores y aritmetica de punteros
//Calcule el tamaño de cada estructura con la funcion sizeof() y explique en un comentario sus observaciones
//acerca del resultado obtenido respecto a los tamanios de las estructuras

/*3.Agregue a la funcion foo_function() un arreglo unidimensional del tipo y del tamanio que ud prefiera.
 * Declare un puntero al arreglo y luego agregue las lineas de codigo necesarias para lograr que cada vez que
 * se haga un llamado a la funcion foo_function() dentro de la funcion main se imprima un elemento del arreglo
 * (en el orden que estan en el arreglo) con ayuda de la aritmetica de punteros.
 *
 *
 *
 */

/* Enlaces de internet utiles:
 * http://c.conclase.net/curso/index.php?cap=011
 * http://c.conclase.net/curso/index.php?cap=011b#STR_sizeof
 * https://stackoverflow.com/questions/8657776/pointer-arithmetic-with-structures
 * https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member
 * http://www.catb.org/esr/structure-packing/
 * https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
 */

void foo_function(void); //Esta declaracion dejela tal y como esta

struct Miestructura1 {
int val1 = 1;
char val2 = 'a';
float val3 = 1.2;
char val4 = 'b';
double val5 = 0.0222;
int val6 = 3;
};

struct Miestructura2

{
int val7 = 2;
int val8 = 4;
float val9 = 1.4;
char val10 = 'c' ;
char val11 = 'd';
double val12 = 0.234;
};

int main(int argc, char *argv[])
{

    char *my_string = "hola";

  Miestructura1 varstruct;
  std::cout << "miestructura 1" << std::endl;
    std::cout <<"valor1 = " <<varstruct.val1<< std::endl;
    std::cout <<"valor2 = " << varstruct.val2 << std::endl;
    std::cout <<"valor3 = " << varstruct.val3 << std::endl;
    std::cout <<"valor4 = " << varstruct.val4 << std::endl;
    std::cout <<"valor5 = " << varstruct.val5 << std::endl;
    std::cout <<"valor6 = " << varstruct.val6 << std::endl;
  Miestructura1*ptr=&varstruct;

   Miestructura2 varstruct1;
   std::cout << "miestructura 1" << std::endl;
   std::cout << "valor7 = " <<varstruct1.val7 << std::endl;
   std::cout << "valor8 = " <<varstruct1.val8 << std::endl;
   std::cout << "valor9 = " <<varstruct1.val9 << std::endl;
   std::cout << "valor10 = " <<varstruct1.val10 << std::endl;
   std::cout << "valor11 = " <<varstruct1.val11 << std::endl;
   std::cout << "valor12 = " <<varstruct1.val12 << std::endl;




  std::cout <<"espacio M1  = "<< sizeof (Miestructura1) << std::endl;
  std::cout <<"espacio M2 = "<< sizeof (Miestructura2) << std::endl;

  // se logra apreciar que la estructura 1 ocupa mas espacio de memoria que la estructura 2


      //Agregue su codigo aqui


    //Aqui puede agregar mas llamadas a function1.....
    foo_function();
    foo_function();
    foo_function();



    return 0;
}

void foo_function(void)
{

    int nums[]= {24,34,44};
    static int *numero=&nums[0];
    static int h=1;

    //Su codigo aqui
    std::cout<<"posicion "<< h <<": "<<*(numero)<<std::endl;
    //Su codigo aqui tambien si quiere
    numero++;
    h++;

}

