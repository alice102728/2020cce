#include <stdio.h>
int main()
{
	int a,b,count=0,j;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0) break;
			}
		if(j==i) count++;
	}
	printf("%d",count);
}
