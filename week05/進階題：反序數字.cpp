#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	a=b;
	while(a>=1){
		c=a%10+c*10;
		a/=10;
	}
	printf("%d+%d=%d\n",b,c,c+b);
}
