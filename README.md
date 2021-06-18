# 2020cce

## 介紹程式碼

## week01
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
```## 基礎題：計算餘數及列印
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

## week11
```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare( const void *p1, const void *p2)
{
    int d1 = * (int*)p1 ;
    int d2 = * (int*)p2 ;
    if( d1 > d2 ) return 1;
    if( d1 ==d2 ) return 0;
    if( d1 < d2 ) return -1;
}
int main()
{
    qsort( a, 10, sizeof(int), compare );
    for(int i=0; i<10; i++){
        printf("%d ", a[i] );
    }
}
```
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[80];
int compare( const void *p1, const void *p2)
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;

	int result = strcmp( s1, s2 );
	if(result>0) return 1;
	if(result==0) return 0;
	if(result<0) return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", line[i] );
		gets( others );
	}
	qsort( line, n, 80, compare );

	printf("%s ", line[0] );
	int ans=1;
	for(int i=0; i<n-1; i++){
		if( strcmp( line[i], line[i+1] ) == 0 ){
            ans++;
		}else{
            printf("%d\n",ans);
            printf("%s ",line[i+1] );
            ans=1;
		}
	}
	printf("%d\n", ans );
}
```
```C
#include <stdio.h>
struct data{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c, box.ans );
}
```
```C
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;

DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c, box.ans );
}
```
## 進階題：字串中的數字個數
```C
#include <stdio.h>
int main()
{
	char a[81];
	int count=0;
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0'){
		if('0'<=a[i]&&a[i]<='9') count++;
		i++;
	}
	printf("%d",count);
}
```
## 進階題：利用自訂函式最大值max與最小值min求出兩者之差
```C
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int x=a;
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}
int min(int a,int b,int c,int d)
{
	int x=a;
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
## 進階題：奇數之和
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1)
		ans+=i;
	}
	printf("%d",ans);
}
```
## 進階題：兩數間可被7整除的數
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0)
		printf("%d ",i);
		}
}
```
## 基礎題：整數二元四則運算
```C
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+') printf("%d",a+b);
	if(c=='-') printf("%d",a-b);
	if(c=='*') printf("%d",a*b);
	if(c=='/') printf("%d",a/b);
}
```
## 基礎題：幾日為星期幾
```C
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
```
## 基礎題：零錢總額
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a*50+b*5+c*1);
}
```
## 基礎題：兩數平方差
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*a-b*b);
}
```

## week12
## UVA10062
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;

	for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
	}

	for(int i=0;i<256;i++){
		for(int j=i+1;j<256;j++){
			if(ans[i]>ans[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
			if(ans[i]==ans[j]&&c[i]<c[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	if(t>0) printf("\n");
	for(int i=0;i<256;i++){
		if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
## UVA299
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
## 進階題：數字個數
```C
#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a)!=EOF){
		ans++;
	}
	printf("%d",ans-1);
}
```
## 基礎題：剩餘啤酒有幾手又幾瓶
```C
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	printf("%d %d",(p-6*d)/6,(p-6*d)%6);
}
```
## 基礎題：三數最小
```C
#include <stdio.h>
int min(int a,int b,int c)
{
	int ans=a;
	if(ans>b) ans=b;
	if(ans>c) ans=c;
	return ans;
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",min(x,y,z));
}
```
## 基礎題：計算立方值
```C
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
```
## 進階題：判斷平方數
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i*i==n) ans=i;
	}
	printf("%d",ans);
}
```
## 進階題：計算質數個數
```C
#include <stdio.h>
int main()
{
	int a,b,count=0,j;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0) break;
			}
		if(j==i) count++;
	}
	printf("%d",count);
}
```
## 進階題：三數組合
```C
#include <stdio.h>
int main()
{
	int a[3],i,temp,j;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		}
		for(i=0;i<3;i++){
			for(j=i+1;j<3;j++){
				if(a[i]<a[j]){
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
			}
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```
## 基礎題：找千位數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);

}
```

## week13
```C
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//每秒狂做60次
  if(mousePressed) background(193,152,231);
  else background(15,162,249);
  textSize(50);//字的大小 設50號字
  text(a,100,100);//將a在100,100畫出來
}
int a=0;//外部變數
void mousePressed(){//按下去時 會呼叫這個函式
  a++;
}
```
```C
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h=hour();//小時
  int m=minute();//分鐘
  int s=second();//秒
  fill(255,0,0);//填充墨水的顏色
  text("Now:" + h + ":" + m + ":" + s ,100,100);//現在時間
  //    字串    數  字串  數  字串  數字
  int total=h*60*60+m*60+s;//現在時間的總秒數
  int total2=12*60*60+0*60+0;//目標時間的總秒數
  text("總秒數:"+total,100,200);
  int ans=total2-total;
  int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
  text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
```
## 進階題：求11 +22+33+…+nn
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans+=i*10+i;
	}
	printf("%d",ans);
}
```
## 進階題：求兩數之最大公因數
```C
#include<iostream>
using namespace std;
int GCD(int a, int b){
  int m,ans=1,i;
  if(a<b)m=a;
  else m=b;
  for(i=2;i<=m;i++){
  	if(a%i==0&&b%i==0) ans=i;
  	}
  	return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
## 進階題：區間測速-超速之王
```C
#include <stdio.h>
int main()
{
	int i,a,min,index=1;
	scanf("%d",&min);
	for(i=2;i<=10;i++){
		scanf("%d",&a);
		if(min>a){
		min=a;
		index=i;
		}
	}
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}
```
## 進階題：10數排序，從大到小排好
```C
#include <stdio.h>
int main()
{
	int a[10],i,j,temp;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
		}
}
```
## 基礎題：正整數平方總和
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans=ans+i*i;
		}
	printf("%d",ans);
}
```
## 進階題：兩數之間的3倍數總和
```C
#include <stdio.h>
int main()
{
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
		if(i%3==0)
			sum+=i;
			printf("%d",sum);
}
```
## 基礎題：判斷座標的象限
```C
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0&&y>0) printf("1\n");
	if(x<0&&y>0) printf("2\n");
	if(x<0&&y<0) printf("3\n");
	if(x>0&&y<0) printf("4\n");
}
```
## 基礎題：輸入n (n>0)， 求n之所有因數和
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
		ans+=i;
		}
	printf("%d",ans);
}
```

## week14
```C
void setup(){//設定 只做一次
  size(300,200);
  float ans=random(60);//亂數取<60的數
  textSize(30);
  text( ans,0,30);
}
```
```C
//Q1:數字有小數點 不好 A:整數無條件捨去
//Q2:沒有互動 A:用mousePressed互動
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){//畫圖 每秒60次 60fps
  background(#2C9CF0);
  //int ans=(int)random(60);//強制轉型casting
  text( ans,30,30);//跳太快了
}
void mousePressed(){//mouse按下去 才做亂數
  ans=(int)random(60);
}
```
```C
//int a[]={1,2,3,4,5,6,7,8,9,10};//C C++
int []a={1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<10;i++){
    text(a[i],i*40,100);
  }
}
void mousePressed(){
  int i1=(int) random(10);
  int i2=(int) random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換 行數太擠 所以塞成一行 中間是分號
```
```C
//大樂透 抽獎時 會掉下球 49球 挑6球
//int []a={1,2,3,4,5,6,7,8,9,10,...,49}
int []a=new int[49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;
}                    //電腦:0  //人類:1
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){//49只秀6個數
    text(a[i],i*50,100);
  }//大樂透 抽獎時 會掉下球 49球 挑6球
}
void mousePressed(){
  for(int i=0;i<10000;i++){
    int i1=(int) random(49),i2=(int) random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;//丟入號碼球
  for(int i=0;i<10000;i++){//大作弊 抽獎前排好
    int i1=(int) random(49),i2=(int) random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){//49只秀6個數
  fill(255); ellipse(50+i*50,100,40,40);
  textAlign(CENTER,CENTER);//文字對齊:中,中
  fill(0); text(a[i],50+i*50,100);
  }//大樂透 抽獎時 會掉下球 49球 挑6球
}
void mousePressed(){
  N++;//其實數字早就決定了 我們只是慢慢印出來 讓人以為你是慢慢抽
}
```
## 進階題：奇數反流
```C
#include <stdio.h>
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--){
		if(a[i]%2==1) printf("%d ",a[i]);
	}
}
```
## 基礎題：大位王
```C
#include <stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c<0) c=-c;
	while((c/10)>0){
		c/=10;
	}
	printf("%d\n",c);
}
```
## 基礎題：輸入西元y年，判斷該y年是否為閏年
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0&&n%100!=0)
		printf("%d is a leap year.\n",n);
	else printf("%d is not a leap year.\n",n);
}
```
## 基礎題：把數字倒著印出來
```C
#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<=10;i++)
		scanf("%d",&a[i]);
	for(i=9;i>=0;i--)
		printf("%d ",a[i]);
}
```
## 基礎題：區間測速
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=60*60*1.2/n;
	printf("%d",a);
}
```

## week15
```C
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖每秒60次
  background(41,109,207);
  int s=second();//秒鐘
  text(s,100,100);
}//任務 step02 (思考) 倒數
```
```C
//秒數s:0,1,2...59
//     59,58,57...0(幫手)59-s
//============================
//倒數:9,8,7...0
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,109,207);//隨便猜的色彩
  int s=second();//秒鐘
  text(9-s%10,100,100);
}
// 原: 0,1,2,3,4,5,6,7,8,9
//倒數:9,8,7,6,5,4,3,2,1,0
```
```C
//發出聲音,有點難,要用外掛Processing的Sound
//這裡叫PDE:Processing Developing Environment
import processing.sound.*;
SoundFile player;
//tada.mp3檔,也可以拉進來這裡
void setup(){
  size(400,200);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
```
```C
//從step02的程式開始增加
import processing.sound.*;//step03的程式
SoundFile player;//step03的程式
void setup(){
  size(400,200);
  textSize(40);
    player = new SoundFile(this, "tada.mp3");
}//step03的程式,記得把tada.mp3放進來
void draw(){//每秒60次
  background(41,109,207);//隨便猜的色彩
  int s=second();//秒鐘
  //text(59-s,100,100);
  text(9-s%10,100,100);
  if(9-s%10==0) player.play();//step03的程式
}//0秒的時候,if()會進去60次 吵死了
```
```C
//step03出發,做step05
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "bell.mp3");
}//把bell.mp3放進來
void draw(){
  background(51,114,191);
}
void mousePressed(){//2種:play(),stop()
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}
```
```C
function setup(){//設定 只做一次
  createCanvas(400,200);
  textSize(40);//字型大小
}
function draw(){//畫圖,每秒60次
  background(41,109,207);
  let s=second();//秒鐘
  text(s,100,100);
}//任務 step02 (思考) 倒數
```
## 進階題：億萬富翁
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0&&i!=0) printf(",");
		printf("%c",a[i]);
	}
}
```
## 進階題：秒數換算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%02d:%02d:%02d",hour,min,sec);
}
```
## 基礎題：水杯接水
```C
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n%m==0) printf("%d",n/m);
	else printf("%d",n/m+1);
}
```
## 基礎題：平面兩座標的面積
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	printf("%d",abs(x2-x1)*abs(y2-y1));
}
```
## 基礎題：整數向量相加
```C
#include <stdio.h>
int main()
{
	int n,a[10],b[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
```

## week16
```C
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  ellipse(50,50,80,80);
}//畫圓   圓心  寬 高
```
```C
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  fill(255);//白
  ellipse(100,100,180,180);
  fill(255,0,0);//紅
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
void draw(){
  background(57,255,127);
  arc(100,100,180,180,radians(90),radians(180));
}
```
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0;
void draw(){
  background(57,255,127);
  //float start=radians(90+mouseX);
  //float stop=radians(180+mouseX);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift+=1;
}
```
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;//一開始速度10
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.0001){//還有速度時,就轉動
  shift+=v;//轉動的速度
  v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}
```
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;//一開始速度10
void mousePressed(){
  //v=random(10);//0...10.0
  v=random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.1){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v=v*0.99;//速度會慢慢減速
   }
   text(shift,200,100);//印出shift
   text(v,200,150);//印出轉動的速度
}
```
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;//一開始速度10
void mousePressed(){
  //v=random(10);//0...10.0
  v=random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  for(int i=0;i<24;i++){
    if(i%3==0) fill(0);
    if(i%3==1) fill(255);
    if(i%3==2) fill(200,180,0);
  float start=radians(0+shift+i*360/24);
  float stop=radians(360/24+shift+i*360/24);
  arc(100,100,180,180,start,stop);
  if(v>0.1){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v=v*0.99;//速度會慢慢減速
   }
   text(shift,200,100);//印出shift
   text(v,200,150);//印出轉動的速度
  }
}
```
## 進階題：大於漸增數列總和之最小整數
```C
#include <stdio.h>
int main()
{
	int k,i,sum=0;
	scanf("%d",&k);
	for(i=1;i<k;i++){
		sum+=i;
		if(sum>k) break;
	}
	printf("%d",i);
}
```
## 進階題：計算級數的值
```C
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i+=2)
		sum+=i;
	printf("f(%d)=%d",n,sum);
}
```
## 進階題：拆解輸入的正整數
```C
#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(n>0){
		printf("%d ",(n%10)*i);
		n/=10;
		i*=10;
	}
}
```
## 基礎題：計算一組任意數目的整數的總和
```C
#include <stdio.h>
int main()
{
	int sum=0,i,a;
	scanf("%d",&a);
	while(a!=0){
		if(a>0) sum+=a;
		scanf("%d",&a);
	}
	printf("%d",sum);
}
```
## 基礎題：整數最大值、最小值
```C
#include <stdio.h>
int main()
{
	int min,max,a;
	scanf("%d",&a);
	min=a;
	max=a;
	while(a!=0){
		scanf("%d",&a);
		if(min>a) min=a;
		if(max<a) max=a;
	}
	printf("[%d,%d]",min,max);
}
```
## week17
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){//每秒60次
  background(0);
  text("hello",100,100);
  text(line,100,150);
}
```
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("You:"+line,100,150);
}
void mousePressed(){
  line=line+"a";
}
```
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  line=line+key;
}
```
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len=line.length();
  if(key>='a'&& key<='z') line=line+key;//小寫鍵
  if(key>='A'&& key<='Z') line=line+key;//大寫鍵
  if(key==BACKSPACE)line=line.substring(0,len-1);
}
```
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  int len=line.length(); text(len,100,50);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len=line.length();
  if(key>='a'&& key<='z') line=line+key;//小寫鍵
  if(key>='A'&& key<='Z') line=line+key;//大寫鍵
  if(key==BACKSPACE&&len>0)line=line.substring(0,len-1);
}
```
```C
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Score:"+score,100,50);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
int score=0;
void keyPressed(){
  int len=line.length();
  if(key>='a'&& key<='z') line=line+key;//小寫鍵
  if(key>='A'&& key<='Z') line=line+key;//大寫鍵
  if(key==BACKSPACE&&len>0)line=line.substring(0,len-1);
  if(key==ENTER){//算分數
    if(line.equals(Q)==true){
      score++;
    } else score--;
  }
}
```
