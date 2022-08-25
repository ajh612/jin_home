#include <stdio.h>
int main(){
	int i;
	for (i=1; i<= 100; i++)
		if (i % 2 ==0) {
			printf("%5d", i);
			if (i % 5 == 0) printf("\n");
		}
}
