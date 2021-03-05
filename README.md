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

## 整數轉換為等級
```C
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
```

## 分式化簡
```C
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
```

## 讀入整數反序列印
```C
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;}
		}
	for(int i=n-1;i>=0;i--){
	printf("%d ",a[i]);
	}
	printf("\n");
}
```

## A的B次方函數
```C
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;}
		}
	for(int i=n-1;i>=0;i--){
	printf("%d ",a[i]);
	}
	printf("\n");
}
```

## 漸增數列相加
```C
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;}
		}
	for(int i=n-1;i>=0;i--){
	printf("%d ",a[i]);
	}
	printf("\n");
}
```
