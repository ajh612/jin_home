#include <stdio.h>
 
int main(){
//	freopen("input.txt", "r", stdin);  // 메모장 입력 
//	freopen("output.txt","w", stdout); // 메모장 출력
    int a, b, n;
    scanf("%d", &n);
    while (n > 0){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        n = n - 1;
        
    }
     return 0;
    
}
