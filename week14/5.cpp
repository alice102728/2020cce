int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;//��J���X�y
  for(int i=0;i<10000;i++){//�j�@�� ����e�Ʀn
    int i1=(int) random(49),i2=(int) random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){//49�u�q6�Ӽ�
  fill(255); ellipse(50+i*50,100,40,40);
  textAlign(CENTER,CENTER);//��r���:��,��
  fill(0); text(a[i],50+i*50,100);
  }//�j�ֳz ����� �|���U�y 49�y �D6�y
}
void mousePressed(){
  N++;//���Ʀr���N�M�w�F �ڭ̥u�O�C�C�L�X�� ���H�H���A�O�C�C��
}
