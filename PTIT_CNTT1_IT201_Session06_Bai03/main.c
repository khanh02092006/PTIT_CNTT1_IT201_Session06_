#include <stdio.h>
int tong (n)
{
    if (n==0) return 0;
    return (n%10) + tong(n/10);
}
int main(void)
{
int n;
    do
    {
        printf(" nhap so nguyen duong");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" nhap so nguyen duong khong hop le");

        }
    } while (n<=0);
printf(" tong so %d là :",n);
    int tốngvuanhap=tong(n);
    printf("%d",tốngvuanhap);

    return 0;
}