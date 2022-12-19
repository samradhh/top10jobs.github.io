#include <stdio.h>
#include <math.h>

int main() {
    int a, b, z, n = 0, count = 0;
    printf("Enter the number : ");
    scanf("%d",&a);
    b = a;
    z = b;
    for (int i = 1; z != 0; i++) {
        z = z/10;
        n++;
    }
    
    for (int i = 1; a != 0; i++) {
        a = b%10;
        b = b/10;
        count = count + pow(a,n); 
    }
    printf("%d\n",count);
    return 0;
}