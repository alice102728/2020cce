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
