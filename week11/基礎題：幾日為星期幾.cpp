#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%7==1) printf("0");
	else if(a%7==2) printf("1");
	else if(a%7==3) printf("2");
	else if(a%7==4) printf("3");
	else if(a%7==5) printf("4");
	else if(a%7==6) printf("5");
	else printf("6");
}
