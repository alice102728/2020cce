#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n>=80&&n< 90) printf("B\n");
	else if(n>=60&&n< 80) printf("C\n");
	else printf("F\n");
}
