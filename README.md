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
	int a,b,n=0;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0)
		n=i;
	}
	printf("%d %d\n",a/n,b/n);
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
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
		ans*=a;
		return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans+=(i-1)*i;
	}
	printf("%d\n",ans);
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
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0'){
		if(a[i]!='2')
		printf("%c",a[i]);
		i++;
		}
		printf("\n");
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
#include<iostream>
using namespace std;

int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0)
	{
		if((n%10)>max)
		max=n%10;
		n/=10;
	}
	return max;
}

int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
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

## week05
```C
#include <stdio.h>
int main()
{
     char line[10]="decline";
     char line2[10]={'p','r','o','p','e','r','\0'};

     printf("%s\n",line);
     printf("%s\n",line2);
}
```

```C
#include <stdio.h>
int main()
{
     char line[10]="decline";
     char line2[10]={'p','r','o','p','e','r','\0'};

     printf("%s\n",line);
     printf("%s\n",line2);

     char line3[]="majority";
     printf("%s\n",line3);
     char line4[]={'m','a','j','o','r','i','t','y'};
     printf("你看看你看看,現在印出來的line4: ==%s==\n",line4);
}
```

```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```

```C
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d",'\0');
}
```

```C
#include <stdio.h>
#include <string.h>

int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    }else{
        printf("右邊大\n");
    }
}
```

## 進階題：反序數字
```C
#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	a=b;
	while(a>=1){
		c=a%10+c*10;
		a/=10;
	}
	printf("%d+%d=%d\n",b,c,c+b);
}
```

## 進階題：絕對值函數
```C
#include <stdio.h>
int f(int n)
{
	if(n<0)
	n=0-n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

## 基礎題：N數之和
```C
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
```

## 基礎題：三數極大
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c) printf("%d\n",a);
	if(b>a&&b>c) printf("%d\n",b);
	if(c>a&&c>b) printf("%d\n",c);
}
```

## 基礎題：計算商數

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```

## week07
## 字串排序
```C
#include <stdio.h>
#include <string.h>

char [100][10]
int mian()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j]);
			strcpy(temp,a[i]);
			strcpy(a[j],a[i]);
			strcpy(a[j],temp);
			}
	}
	for(int i=0;i<n;i++){
	printf("%s",a[i]);
	}
}
```


## 進階題：迴文判斷 
```C
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	if(a[0]==a[3]&&a[1]==a[2]) printf("YES\n");
	else printf("NO\n");
}
```

## 進階題：函數反序排列數字
```C
#include <stdio.h>
void f(int n)
{
	printf("%d",n%10);
	if(n>=10) f(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	printf("\n");
}
```

## 進階題：陣列找出現次數
```C
#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		}
	int x,n=i,count=0;
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x) count++;
		}
		printf("%d\n",count);
}
```

## 進階題：判斷大小
```C
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	if(a==b) return 0;
	if(a>b) return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```

## 進階題：計算一列整數的總和
```C
#include <stdio.h>
int main()
{
	int a;
	int sum=0;
	while(a!=999){
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
		sum += a;
		}
	printf("The total is: %d",sum-999);
}
```

## 基礎題：計算餘數
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a%b);
}
```

## 基礎題：整數轉換等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A");
	else if(n<90&&n>=80) printf("B");
	else if(n<80&&n>=70) printf("C");
	else if(n<70&&n>=60) printf("D");
	else printf("F");
}
```

## 基礎題：計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n-1500)%250==0) printf("%d",100+((n-1500)/250)*5);
	else printf("%d",105+((n-1500)/250)*5);
}
```

## 基礎題：找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,n%50/10,n%10/5,n%5);
}
```

## week08
1. 利用上週的考試題目, 練習 字串 (宣告、讀、印) , 請用瘋狂程設-第07週-考試題目「字串排序」,用練習模式,寫到一半, 不用寫完。 (只要把字串的宣告、讀、印 完成)

2. 接續上題, 利用上週的考試題目, 示範如何用 qsort() 完成字串排序

3. 本週考試題目 UVA 10420 計算國名的次數, 我們模仿上面的作法, 先有字串(宣告、讀、印),再有 qsort() 進行排序。請用練習模式, 還沒有金牌哦! :)

4. 將 UVA 10420 完成, 其中在數數的過程, 是個 for迴圈,if判斷, 再印出頭、尾

5. 今天的題目 UVA 10226 要統計樹的數目, 老師分成4個步驟: (1) 字串 (宣告、讀、印)不知道幾筆... (2) 字串排序 qsort() 自己compare(), (3) 數數字 for(迴圈), (4) 印出答案, 先做 (1) 字串(宣告、讀、印)

6. 再做 (2) 字串排序

7. 最後做 (3) 數數字, (4) 印出答案, 其中需要用到  100 * ans / (float) N  這種轉換,讓整數除法,變成float除法
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
int compare (const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char trash[80];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets(trash);
	}
	qsort(name,n,80,compare);
	int ans=1;
	printf("%s ",name[0]);
	for(int i=0;i<n-1;i++){
		if(strcmp(name[i],name[i+1])!=0){
			printf("%d\n",ans);
			printf("%s ",name[i+1]);
			ans=1;
		}else ans++;
	}
	printf("%d\n",ans);
}
```
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void*p1,const void*p2){
    return strcmp((char*)p1,(char*)p2);
}
int main()
{
    int T;
    scanf("%d\n\n",&T);

    int N=0;
    for(int i=0;    ;i++){
        char*now=gets(tree[i]);
        if(now==NULL){
            N=i;
            break;
        }
        if(strcmp(tree[i],"")==0){
            N=i;
            break;
        }
    }

    qsort(tree,N,32,compare);

    printf("%s ",tree[0]);
    int ans=1;
    for(int i=0;i<N-1;i++){
        if(strcmp(tree[i],tree[i+1])!=0){
            printf("%d\n",ans);
            printf("%s ",tree[i+1]);
            ans=1;
           }else ans++;
    }
    printf("%d\n",ans);
}
```

## week10
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			strcpy(tree[N],line);
			N++;
	}
		
	qsort(tree,N,32,compare);
	
	if(t>0) printf("\n");
	int ans=1;
	printf("%s ",tree[0]);
	for(int i=0;i<N-1;i++){
		if(strcmp(tree[i],tree[i+1])==0){
		ans++;
		}else{
			printf("%.4f\n",100*ans/(float)N);
			ans=1;
			printf("%s ",tree[i+1 ]);
			}
		}
		printf("%.4f\n",100*ans/(float)N);	
	}
}
```

## 進階題：最大公因數gcd
```C
#include <stdio.h>
int main()
{
	int a,b,min,ans;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	if(a>b) min=b;
	else min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0&&b%i==0)
		ans=i; 
		}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
```

## 進階題：字串長度
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a),lenb=strlen(b);
	if(lena>lenb) printf("1");
	else if(lena<lenb) printf("-1");
	else{
		printf("%d",strcmp(a,b));
	}
}
```

## 進階題：函數判斷質數
```C
#include <iostream>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) break;
	}
	if(i==n) return 1;
	else return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```

## 進階題：判斷迴文
```C
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[80];
	scanf("%s",&a);
	int len=strlen(a);
	for(i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i]) break;
	}
	if(i==len/2) printf("YES");
	else printf("NO");
}
```

## 基礎題：計算餘數及列印
```C
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("Enter two numbers: The remainder is %d\n",x%y);
}
```

## 基礎題：判別正方形
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter two numbers: ");
	if(a==b) printf(" It is a square ");
	else printf(" It is not a square ");
}
```

## 基礎題：將一連串整數相乘
```C
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
```

## 基礎題：平年月份的天數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==2) printf("28");
	else if(n==4||n==6||n==9||n==11) printf("30");
	else printf("31");
}
```
