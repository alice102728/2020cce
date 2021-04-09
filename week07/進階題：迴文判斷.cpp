#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	if(a[0]==a[3]&&a[1]==a[2]) printf("YES\n");
	else printf("NO\n");
}
