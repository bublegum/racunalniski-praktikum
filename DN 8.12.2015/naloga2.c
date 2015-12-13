#include<stdio.h>
#include<math.h>
#include<string.h>

int izpis_tabele_int(int tab[], int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d | %d\n",i,tab[i]);
	}
	printf("\n");
}
float izpis_tabele_float(float tab2[], int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d | %g\n",i,tab2[i]);
	}
	printf("\n");
}
double izpis_tabele_double(double tab3[], int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d | %g\n",i,tab3[i]);
	}
	printf("\n");
}
char izpis_tabele_char(char tab4[], int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d | %c\n",i,tab4[i]);
	}
}
int main(void) {
	int tab[] = {1,2,3,4,5};
	float tab2[] = {1.1,2.2,3.3,4.4,5.5};
	double tab3[] = {1.11,2.22,3.33,4.44,5.55};
	char tab4[] = {'a','b','c','d','e'};
	int n = 5;
	
	izpis_tabele_int(tab, n);
	izpis_tabele_float(tab2,n);
	izpis_tabele_double(tab3,n);
	izpis_tabele_char(tab4, n);
}
