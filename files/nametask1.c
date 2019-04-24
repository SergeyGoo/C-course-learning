#include <stdio.h>
#include <locale.h>



int main(){
	
	setlocale(0, "");
	FILE *f = fopen ("text0.txt", "w");
	char b;
	int i;
	for (i=1; i<3; i++){
		b=getchar();
		printf("%c is %d\n", b, b);
		fprintf(f,"%c\n", b);
	
}
	fclose(f);
}
