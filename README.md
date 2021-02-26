# 2020cce

## 介紹程式碼

## 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%5);
}
```
![圖片](https://ibb.co/LtY6kLx)

## 因數個數
```C
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
		a++;
	}
	printf("%d\n",a);
}
```
![圖片](https://ibb.co/tqN7XDp)

## 找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],n=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[10]);
		if(a[10]%3==0)
		n++;
	}
	printf("%d\n",n);
}
```
![圖片]()
