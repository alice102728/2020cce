import processing.video.*;//開Video外掛
//裝好Processing Video Library就沒有紅色底線
//import processing.sound.*;//以前教過聲音
//import ddf.minim.*;//有些同學的聲音
Capture cam;//global全域變數
//AudioPlayer player;//以前
//Minim minim;//以前
void setup(){//設定 只做一次
  size(640,480);//20年前的電腦
  println(Capture.list());
}//會印出你電腦的全部視訊鏡頭
