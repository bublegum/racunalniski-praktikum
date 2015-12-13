#include<stdio.h>
#include<string.h>
#include<math.h>

int zamenjaj_celo_stevilo(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
float zamenjaj_realno_stevilo(float *a, float *b) {
	float c = *a;
	*a = *b;
	*b = c;
}
double zamenjaj_double(double *a, double *b) {
	double c = *a;
	*a = *b;
	*b = c;
}
char zamenjaj_char(char *a, char *b) {
	char c = *a;
	*a = *b;
	*b = c;
}
int main(void) {
	int a = 10, b = 50;
	float c = 10.1, d = 50.2;
	double e = 10.11, f = 50.22;
	char g = '!', h = '@';
	//Zamenjava celih stevil(int):
	printf("Pred zamenjavo: a=%d, b=%d\n",a,b);
	zamenjaj_celo_stevilo(&a,&b);
	printf("Po zamenjavi: a=%d, b=%d\n\n",a,b);
	//Zamenjava realnih stevil(float):
	printf("Pred zamenjavo: c=%g, d=%g\n",c,d);
	zamenjaj_realno_stevilo(&c,&d);
	printf("Po zamenjavi: c=%g, d=%g\n\n",c,d);
	//Zamenjava realnih stevil(double):
	printf("Pred zamenjavo: e=%g, f=%g\n",e,f);
	zamenjaj_double(&e,&f);
	printf("Po zamenjavi: e=%g, f=%g\n\n",e,f);
	//Zamenjava znakov(char):
	printf("Pred zamenjavo: g=%c, h=%c\n",g,h);
	zamenjaj_char(&g,&h);
	printf("Po zamenjavi: g=%c, h=%c",g,h);
}
