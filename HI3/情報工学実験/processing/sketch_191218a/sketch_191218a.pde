PImage img;  //画像ファイルを扱う変数

void setup(){
  size(640,480,P3D);
  frameRate(30);
  img=loadImage("test.png");
}

void draw(){
  background(160,255,255);
  image(img,100,50);
}
