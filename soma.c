#include <stdio.h>
int main(){
	int a, b, c, d, e;
	
	printf("Digite três números inteiros:\n");
	//Entrada
	scanf("%d %d %d", &a, &b, &d);
	
	c = a + b;
	e = c * d;
	printf("A soma de a + b = %d", c);
	printf("A multiplicação de c * d = %d", e);
	return 0;
}
