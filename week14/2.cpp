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
