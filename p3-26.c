#include <stdio.h>
#include <conio.h>
int main(){
	char ch;
	printf("enter any character <q to quit> : ");
	while (1){
		if ((ch = getche()) == 'q') break;
		putchar(ch);
	}
	printf("\nEnd of Program\n");
}
