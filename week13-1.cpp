void setup(){//�u���@���]�w
  size(1024,400);
}
void draw(){//�C��g��60��
  if(mousePressed) background(193,152,231);
  else background(15,162,249);
  textSize(50);//�r���j�p �]50���r
  text(a,100,100);//�Na�b100,100�e�X��
}
int a=0;//�~���ܼ�
void mousePressed(){//���U�h�� �|�I�s�o�Ө禡
  a++;
}
