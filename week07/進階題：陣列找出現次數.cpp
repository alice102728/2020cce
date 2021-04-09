#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		}
	int x,n=i,count=0;
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x) count++;
		}
		printf("%d\n",count);
	}
