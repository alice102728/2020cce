#include <stdio.h>
int main()
{
	int a,b,min,ans;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	if(a>b) min=b;
	else min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0&&b%i==0)
		ans=i;
		}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
