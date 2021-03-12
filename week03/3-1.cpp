#include <stdio.h>
int main()
{
    int a[5]={ 0,10,20,30,40};
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");

    int *p = &a[2];
    *p = 222;
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");

    p = p + 2;
    *p = 666;
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");
}
