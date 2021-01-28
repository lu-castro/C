#include <stdio.h> 

void first_func(void)
{
  printf("Hello World\n"); 
}


main() /* código para guardar valores en la memoria*/
{
  int Test_1;  /* se declaran las variables reservando un lugar dentro de la memoria */
  int Test_2;  /* char define el tipo de dato que almacenará en al variable. Define el espacio de un Byte. Puede almacenar hasta 256 valores diferentes. */

  Test_1 = 23;
  Test_2 = 67;
}

main()
{
  unsigned short int Test_3;

  Test_3 = 78;
}

main()
{
  unsigned papas;
  signed char ilinois;
  float calculator;
  long double sintaxis;
  signed long int papitas_ = 23; 

  calculator = 56.89;
  sintaxis = 676876.99879;
  papas = 23989;
  ilinois = -100;

}

/* Casting ejemplo */

/*float a = 2.34;
double x = 8.3;
int b = (int) a + (int) (x * 3.87);*/

#include <stdio.h>

/*main()
{
  int caracter;

  printf("ingrese un caracter:/n");
  caracter = getc (stdin);
  printf("el caracter ingresado es \"%c\", cuyo código ASCII es \"%i\"\n", caracter, caracter);
}

func()
{
  int caracter1 = 100;
  int caracter2 = "c";

  putc(caracter1, stout);
  printf("\n");
  putc(caracter2, stdout);
  printf("\n");
}*/


#include <stdio.h>

void main(void) 
{
  float radio = 20;
  printf("La superficie del círculo de radio %f es %f\n", radio, 2334.34); 
}


#include <stdio.h>

main()
{
  int w = 65;
  char x = 'B';
  int y = 67;
  char z = 'D';

  printf("\nLas primeras cuatro letras del abecedario: %c, %c, %c, %c", w, x, y, z);

}


#include <stdio.h>

main()
{
  int hora = 5;
  int minutos = 4;
  int segundos = 9;
  float precision = 567.78;

  printf("La hora actual es de %d,%d,%d", hora, minutos, segundos);
  printf("La hora con especificadores de ancho mínimos es de %02d, %02d, %05d", hora, minutos, segundos);

  printf("La alineación a derecha es %5d", 890);
  printf("La alineación a la izquierda es %-5d", 890);

  printf("Datos de precisión: %.6f", precision);
  printf("Otro dato de precision con el mismo numero %6.2f", precision);
}


int edad(void)
{
  int anio_actual = 2021;
  int edad;

  printf("inserte su edad actual: \n");
  scanf("%d", &edad);

  printf("usted ha nacido en el anio %d\n", anio_actual - edad);
}


char caracters_(void)
{
  char x;
  char y; 

  printf("insert two caracters: \n");
  scanf("%c", &x);
  fflush(stdin);
  scanf("%c", &y);

  printf("The caracters are \"%c\" y \"%c\"", x, y);
}


char getch(void)
{
  char c;

  printf("press a button \n");
  c = getch();
  printf("The character you've chosen is %c\n", c);

  printf("press a button \n");
  c = getche();
  printf("The other character is %c\n", c);

}


int operadores_relacionales(void)
{

  int a = 4;
  int b = 6;
  int c = 2; 

  printf("a == b = %d\n", a == b);
  printf("b != c = %d\n", b != c);
  printf("c > a = %d\n", c > a);
  printf("c < a = %d\n", c < a);
  printf("b <= a = %d\n", b <= a);
  printf("a >= c = %d\n", a >= c);
}

int operadores_logicos(void)
{
  int verdadero = 1;
  int falso = 0; 

  printf("!verdadero = %d\n", !verdadero);
  printf("!falso = %d\n", !falso);
}

/* verdadero iba a ser igual a sí mismo ya que no es un valor nulo, pero al agregarle el operados lógico ! se convierte en falso, y falso es 0 */
/* !verdadero = 0 */
/* !falso = 1 */


int expresiones_logicas(void)
{
  int verdadero = 1;
  int falso = 0;

  printf("falso && falso = %d", falso && falso);
  printf("falso && verdadero = %d", falso && verdadero);
  printf("verdadero && falso = %d", verdadero && falso);
  printf("verdadero && verdadero = %d", verdadero && verdadero);
}

/* solo devolverá verdadero (1) si ambas expresiones son verdaderas (1 && 1) */

int operadores_or(void)
{
  int verdadero = 1;
  int falso = 0;

  printf("falso || falso = %d", falso || falso);
  printf("verdadero || falso = %d", verdadero || falso);
  printf("falso || verdadero = %d", falso || verdadero);
  printf("verdadero || verdadero = %d",verdadero || verdadero);
}

/* serán todos verdaderos, es decir 1, excepto por el primero que no tiene ningún valor verdadero */

int combinaciones()
{
  int A = 1;
  int B = 0;

  printf("!A(A && B) = A || !B", A, A, B, A, B);
}

/* resultado nulo, es decir, falso. Esta operación también es conocida como álgebra booleana (Leyes de De Morgan)*/

int if_else(void)
{
  int a, b;

  printf("Inserte un número: \n");
  scanf("%d", &a);
  printf("Inserte su segundo número \n");
  scanf("%d", &b);

  if (a == b) printf("Los valores son iguales!");
  else printf("Los valores son desiguales!");
}


int votos(void)
{
  int votos_recibidos, votos_totales = 0;

  printf("Ingrese su voto: ");
  scanf("%d", &votos_recibidos);

  if (votos_recibidos > 0)
  {
    printf("usted ha recibido un voto");
    votos_totales++;
  }
  else 
  {
    printf("Le han votado en contra");
    votos_totales--;
  }
}



