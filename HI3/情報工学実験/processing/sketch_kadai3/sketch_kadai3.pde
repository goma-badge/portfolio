PImage inImg;//入力画像
PImage outImg;//出力画像
PImage outImg2;//出力画像2

void setup() {
  size(800, 1000, P3D);
  frameRate(30);
  inImg=loadImage("test.png");
  textFont(createFont("Century", 30));
  textAlign(LEFT, TOP);
}

void draw() {
  background(0);

  outImg=createImage(inImg.width, inImg.height, RGB);
  outImg2=createImage(inImg.width, inImg.height, RGB);
  for (int i=0; i<inImg.height; i++) {
    for (int j=0; j<inImg.width; j++) {
      int p1= i*inImg.width+j;
      float r=red(inImg.pixels[p1]);
      float g=green(inImg.pixels[p1]);
      float b=blue(inImg.pixels[p1]);
      outImg.pixels[p1]=color(r, g/2, b);
    }
  }
  

  text("Original", 0, 0);
  image(inImg, 0, 30);
  image(outImg,300,30);
}
