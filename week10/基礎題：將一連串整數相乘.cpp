#include <stdio.h>
int a[100];
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		printf("Enter a value: ");
		ans*=a[i];
		}
		printf("Product of the %d values is %d",n,ans);
	}
