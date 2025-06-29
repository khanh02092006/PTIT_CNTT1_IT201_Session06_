#include <stdio.h>
void  nhiphan(int n)
{
    if(n==0) return 0;
    nhiphan(n/2);
    printf("%d",n %2 );
}
int main(void)
{
   int n;

   do  {
       printf(" nhap so nguyen duong ");
       scanf("%d", &n);
   }while (n<=0);
        printf(" so %d duoi dang nhi phan la ",n);
    nhiphan(n);

    return 0;
}