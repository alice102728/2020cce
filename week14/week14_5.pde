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
