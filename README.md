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

## week02
```c
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```

```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d,n[1]:%d,n[2]:%d",n[0],n[1],n[2]);
}
```

## 讀入整數反序列印
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000  
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
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
主程式：
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
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
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
數字範圍：整數1 – 1000  
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

## week03
```C
#include <stdio.h>
int main()
{
    int a[5]={ 0,10,20,30,40};
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");

    int *p = &a[2];
    *p = 222;
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");

    p = p + 2;
    *p = 666;
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");
}
```
```C
  
#include <stdio.h>
int a[5]={ 0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
    p = p + 2;
    *p = 666;
            printAll();
    p--;
    *p = 555;
            printAll();
}
```
```C
  
#include <stdio.h>
int a[5]={ 0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心理小紙條記的值是:%d\n", p);
    p = p + 2;
    *p = 666;
            printAll();
            printf("p心理小紙條記的值是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心理小紙條記的值是:%d\n", p);
}
```
```C
#include <stdio.h>
#include <stdio.h>

int a[10];
int main(){
    int b[10];

    int *p = (int*) malloc( sizeof(int)*10 );

    return 0;
}
```

## 計算陣列的平方值
```C
#include <stdio.h>
int a[10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
		}
		printf("\n");
}
```

## 大小寫轉換
```C
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	int i=0;
	while(c[i]!='\0')
	{
		if('A'<=c[i]&&c[i]<='Z')
		printf("%c",c[i]-'A'+'a');

		else if('a'<=c[i]&&c[i]<='z')
		printf("%c",c[i]-'a'+'A');

		else printf("%c",c[i]);
		i++;
	}
	printf("\n");
}
```

## 計算幾週與幾天
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```

## 計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100");
	else printf("%d\n",100+((n-2000+499)/500)*5);
}
```

## 兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	for(int i=a;i<=b;i++){
		if(i%5==0) printf("%d\n",i);
		}
	else
	for(int i=b;i<=a;i++){
		if(i%5==0) printf("%d\n",i);
		}
}
```

## 整數間最大距離
```C
#include <stdio.h>
int main()
{
	int a[10000],min,max;
	for(int i=0;i<3;i++)
		scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(int i=0;i<3;i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("%d\n",max-min);
}
```

## week04
```C
#include <stdio.h>

struct POINT {
    float x, y;
};

int main()
{
    struct POINT a;
}
```

```C
#include <stdio.h>

struct POINT {
    float x, y;
};

int main()
{
    struct POINT a = { 4.1, 3.2 };
    printf("%f %f\n", a.x, a.y );
}
```

```C
#include <stdio.h>
struct POINT {
    float x, y;
};
int main(){
    struct POINT a = { 4.1, 3.2};
    printf("%f %f\n", a.x, a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n", a.x, a.y);

    return 0;
}
```

```C
#include <stdio.h>
struct DATA {
    int x, y;
} a[3] ;
struct DATA b = {100, 200};
int main()
{
    for(int i=0; i<3; i++){
        printf("a[%d]:%d %d\n", i, a[i].x, a[i].y );
    }
    printf("b: %d %d\n", b.x, b.y );

    struct DATA c;
    printf("c: %d %d 像亂碼\n", c.x, c.y);

    c = b;
    printf("c: %d %d\n", c.x, c.y);
}
```

```C
#include <stdio.h>
struct POINT {
    float x, y, z;
};

struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};

int main()
{
    struct POINT * p = & point[0];
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);
}
```

## 進階題：除惡務盡
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0) printf("%d ",i);
		}
}
```

## 進階題：擲骰統計
```C
#include <stdio.h>
int main()
{
	char count[7]={0},a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
		}
	for(int i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
		}
}
```

## 進階題：函數找整數的最大數字
```C
#include <stdio.h>
int main()
{
	char count[7]={0},a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
		}
	for(int i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
		}
}
```

## 進階題：星星等腰三角
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<(n-i);j++){
			printf(" ");
		}
		for(int j=0;j<(i*2-1);j++){
			printf("*");
		}
	printf("\n");
	}
}
```

## 基礎題：分開整數的每個數字
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,n%10000/1000,n%1000/100,n%100/10,n%10);
}
```

## 基礎題：字元判別
```C
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if('A'<=a&&a<='Z') printf("U");
	else if('a'<=a&&a<='z') printf("L");
	else if('0'<=a&&a<='9') printf("D");
	else printf("O");
}
```

## 基礎題：數字之首
```C
#include <stdio.h>
int main()
{
	char a[1000];
	scanf("%s",&a);
	printf("%c",a[0]);
}
```

## 基礎題：輸出從0到N的偶數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0) printf("%d ",i);
		}
}
```
