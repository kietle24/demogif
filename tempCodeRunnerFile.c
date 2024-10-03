#include <stdio.h>
#include <string.h>

int main() { 
    int n;
    char c[1000];
    printf("Nhap n : ");
    scanf("%d", &n);
    getchar();
     printf("Nhap xau ky tu : ");
    gets(c); // hoac fgets
    printf("So vua nhap : %d\n", n);
    printf("Chuoi vua nhap : %s\n", c);
    printf("Chieu dai cua chuoi vua nhap : %d\n", strlen(c));
    printf("\n");
    return 0;
}