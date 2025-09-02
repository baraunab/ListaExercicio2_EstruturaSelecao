/*20) Faça um programa para resolver equações do 2o grau.
	- ax² + bx + c = 0
	- (Delta) = b² - 4ac
	- x = (-b ± raiz de delta) / 2a
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	
	float a, b, c, delta, x1, x2;
	
	printf("Informe valor de a: ");
	scanf("%f", &a);
	
	printf("Informe valor de b: ");
	scanf("%f", &b);
	
	printf("Informe valor de c: ");
	scanf("%f", &c);
	
	delta = pow(b, 2) - (4*a*c);
	
	x1 = (-b - sqrt(delta)) / (2*a);
	
	x2 = (-b + sqrt(delta)) / (2*a);
	
	printf("\ndelta = %.2f ^ 2 - 4 * %.2f * %.2f = %.2f", b, a, c, delta);
	printf("\nx2 = (- (%.2f) - raiz de %.2f) / 2 * %.2f = %.2f", b, delta, a, x1);
	printf("\nx1 = (- (%.2f) + raiz de %.2f) / 2 * %.2f = %.2f", b, delta, a, x2);
	
		
	return 0;
}

