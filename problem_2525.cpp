#include <stdio.h>

int main() {
    int hour, min, a;
    int temp;
    scanf("%d %d", &hour, &min);
    scanf("%d", &a);
    
    min = min + a;
    
    if(min >= 60) {
        temp = min / 60;
        hour = hour + temp;
        min = min % 60;
    }

    	 if(hour >= 24) {
        	hour = hour % 24;
    	}

    printf("%d %d", hour, min);
    return 0;

}
