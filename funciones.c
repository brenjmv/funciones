 #include <stdio.h>
 int factorial(int n);
 
 int factorial(int n)
 {
 int i, 
 producto = 1;
 for (i = n; i > 1; --i) {
 producto *= i;
 }
 return (producto);
 }

 int main(void)
 {
 int num, fact;
 printf("Dar un entero mayor a 0> ");
 scanf("%d", &num);
 if (num < 0) {
 printf("El factorial de un numero negativo (%d) es indefinido\n", num);
 }
 else if (num <= 30) {
 fact = factorial(num);
 printf("El factorial de %d es %d\n", num, fact);
 }
 else {
 printf("Numero fuera de rango: %d\n", num);
 }
 return (0);
 }