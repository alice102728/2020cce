#include <stdio.h>
int main()
{
	int n,a[100],ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		ans+=a[i];
		}
	printf("%d\n",ans);
}
