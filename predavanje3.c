#include<stdio.h>
#include<math.h>
#include<string.h>

/*int main(void) {
	float x;
	FILE *f;
	f = fopen("test2.txt","wt");
	for(x=-M_PI;x<M_PI;x+=0.2) {
		fprintf(f,"%f \t %f\n",x,sin(x));
	}
}*/

/*int main(void) {
	float x;
	FILE *f;
	f = fopen("test2.txt","wt");
	for(x=-M_PI;x<M_PI;x+=0.2) {
		fprintf(f,"%f \t %f \t %f \t %f \t %f\n",x,sin(x),cos(x),tan(x),exp(x));
	}
}*/
int main(void) {
	float tab[] = {1.5,2.5,3.5,4.33};
	int n = 4, i;
	FILE *f;
	f = fopen("test2.txt","wt");
	for(i=0;i<n;i++) {
		fprintf(f,"%f\n",tab[i]);
	}
	fclose(f);
	
	FILE *f_beri;
	f_beri = fopen("test2.txt","rt");
	float je_EOF = 0.0;
	float tab_beri[5];
	for(i=0;i<n;i++) {
		je_EOF = fscanf(f_beri,"%f\n",&tab_beri[i]);
		if(je_EOF == EOF) {
			printf("Datoteko smo prebrali do konca.\n");
			break;
		}
	}
	for(i=0;i<n;i++) {
		printf("%g\n",tab_beri[i]);
		fclose(f_beri);
	}
}
