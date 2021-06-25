import processing.video.*;
Capture cam;
void setup(){//設定 只做一次
  size(640,480);//20年前的電腦
  println(Capture.list());
  cam=new Capture(this,"HD WebCam");//初始化
  cam.start();//開啟webcam
}
void draw(){
  if(cam.available())cam.read();//讀視訊
  set(0,0,cam);
}
