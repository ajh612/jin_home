#include <stdio.h>
int main(){
	int i = 3, *ip;
	printf("%p\n", ip);
	*ip = 21;
	printf("%d\n", *ip);
}
