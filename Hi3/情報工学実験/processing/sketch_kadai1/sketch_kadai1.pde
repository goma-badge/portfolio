PImage img;
PImage img2;
void setup(){
  size(640,480,P3D);
  frameRate(30);
  img=loadImage("test.png");
  img2=loadImage("test2.png");
}

void draw(){
  background(160,255,255);
  keyPressed();
}
void keyPressed(){
    if(key=='1'){
      image(img,mouseX,mouseY,640,480);
    }else if(key=='2'){
      image(img2,mouseX,mouseY,640,480);
    }
}
