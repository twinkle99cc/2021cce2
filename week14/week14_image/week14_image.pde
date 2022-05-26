PImage img,img2;
void setup(){
  size(300,600);
  img= loadImage("img.png");//主角
  img2=loadImage("img2.png");//子彈
}
int dy=0;//子彈飛多遠
void draw(){
  background(225);
  image(img,mouseX,mouseY);
  if(mousePressed){
    image(img2,mouseX,mouseY-dy);
    dy++;
  }
}
  
