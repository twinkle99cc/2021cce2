void setup(){
  size(450,450);
}
int []bx=new int[100];//在Java的陣列
int []by=new int[100];//和C/C++/C#不同
int N=0;//現在有N個旗子
void draw(){
  background(#F5D665);
  for(int y=50;y<450;y+=50){
  line(0,y,450,y);
  }
  for(int x=50;x<450;x+=50){
  line(x,0,x,450);
  }
  for(int i=0;i<N;i++){
    if(i%2==0) fill(0);//2倍數,黑
    else fill(255);//2倍數,白
    ellipse(bx[i],by[i],40,40);
  }
  if(N%2==0) fill(0);//2倍數,黑
  else fill(255);//白
  ellipse(mouseX,mouseY,40,40);
}
void mousePressed(){
  bx[N]=mouseX;by[N]=mouseY;
  N++;
}
