#include <stdio.h>
int fibonacci(int n)
{
    if (n<= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
void fibinnacinguoc(int n)
{
    if (n==0) return;
    printf("%d", fibonacci(n-1));
    fibinnacinguoc(n-1);

}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so nguyen n");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong thoả mãn ");

        }

    } while (n<=0);
    printf(" so phan fabonnaci nguoc ");

    fibinnacinguoc(n);

    return 0;
}