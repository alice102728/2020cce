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
