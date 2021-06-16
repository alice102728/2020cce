#include <stdio.h>
int main()
{
	int k,i,sum=0;
	scanf("%d",&k);
	for(i=1;i<k;i++){
		sum+=i;
		if(sum>k) break;
	}
	printf("%d",i);
}
