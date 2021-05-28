#include <stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c<0) c=-c;
	while((c/10)>0){
		c/=10;
	}
	printf("%d\n",c);
}
