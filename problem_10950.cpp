#include <stdio.h>
 
int main(){
//	freopen("input.txt", "r", stdin);  // �޸��� �Է� 
//	freopen("output.txt","w", stdout); // �޸��� ���
    int a, b, n;
    scanf("%d", &n);
    while (n > 0){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        n = n - 1;
        
    }
     return 0;
    
}
