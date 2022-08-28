#include <stdio.h>

int main(){
	int x = 7;
	int *xp = &x;
	
	*xp = 8;
	printf("address of x : %p\n", &x);
	printf("value of x : %d\n", x);
	printf("value of xp : %p\n", xp);
	printf("value of *xp : %d\n", *xp);
}
