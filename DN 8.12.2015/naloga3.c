#include<stdio.h>
#include<string.h>
#include<math.h>

void uredi(int *kazalec_a, int *kazalec_b) {
	int k;
	if(*kazalec_a > *kazalec_b) {
		k = *kazalec_a;
		*kazalec_a = *kazalec_b;
		*kazalec_b = k;
	}
}
int main(void) {
	int a, b;
	printf("Vnesi a: "); scanf("%d",&a);
	printf("\nVnesi b: "); scanf("%d",&b);
	printf("\nPred urejanjem: a=%d, b=%d\n",a,b);
	uredi(&a,&b);
	printf("Po urejanju: a=%d, b=%d",a,b);
}
