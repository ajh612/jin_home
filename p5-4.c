#include <stdio.h>

int main(){
	int x = 5, *xp= &x;
	
	x= *xp + 24;
	printf("%d\n", x);
}
