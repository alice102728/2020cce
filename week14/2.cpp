//Q1:�Ʀr���p���I ���n A:��ƵL����˥h
//Q2:�S������ A:��mousePressed����
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){//�e�� �C��60�� 60fps
  background(#2C9CF0);
  //int ans=(int)random(60);//�j���૬casting
  text( ans,30,30);//���ӧ֤F
}
void mousePressed(){//mouse���U�h �~���ü�
  ans=(int)random(60);
}
