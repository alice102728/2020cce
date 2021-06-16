#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i+=2)
		sum+=i;
	printf("f(%d)=%d",n,sum);
}
