//�j�ֳz ����� �|���U�y 49�y �D6�y
//int []a={1,2,3,4,5,6,7,8,9,10,...,49}
int []a=new int[49];//Java���}�C�ŧi�n
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;
}                    //�q��:0  //�H��:1
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){//49�u�q6�Ӽ�
    text(a[i],i*50,100);
  }//�j�ֳz ����� �|���U�y 49�y �D6�y
}
void mousePressed(){
  for(int i=0;i<10000;i++){
    int i1=(int) random(49),i2=(int) random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
