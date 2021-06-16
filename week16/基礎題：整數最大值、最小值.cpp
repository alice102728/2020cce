#include <stdio.h>
int main()
{
	int min,max,a;
	scanf("%d",&a);
	min=a;
	max=a;
	while(a!=0){
		scanf("%d",&a);
		if(min>a) min=a;
		if(max<a) max=a;
	}
	printf("[%d,%d]",min,max);
}
