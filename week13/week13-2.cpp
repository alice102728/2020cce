void setup(){
  size(1024,400);
  textFont(createFont("�з���",50));
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h=hour();//�p��
  int m=minute();//����
  int s=second();//��
  fill(255,0,0);//��R�������C��
  text("Now:" + h + ":" + m + ":" + s ,100,100);//�{�b�ɶ�
  //    �r��    ��  �r��  ��  �r��  �Ʀr
  int total=h*60*60+m*60+s;//�{�b�ɶ����`���
  int total2=12*60*60+0*60+0;//�ؼЮɶ����`���
  text("�`���:"+total,100,200);
  int ans=total2-total;
  int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
  text("�ٳѤU:"+hh+":"+mm+":"+ss,100,300);
}
