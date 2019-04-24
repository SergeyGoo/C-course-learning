#include <stdio.h>

int i;

int main(){
	scanf("%d", &i);

while (i>9){
	i/=10;
	/*switch(i){
		case 10: printf("%d\n", i);
			break;
		default: printf ("stop");
			break;

}*/
}
printf("%d\n", i);
}
