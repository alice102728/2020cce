#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n-1500)%250==0) printf("%d",100+((n-1500)/250)*5);
	else printf("%d",105+((n-1500)/250)*5);
}
