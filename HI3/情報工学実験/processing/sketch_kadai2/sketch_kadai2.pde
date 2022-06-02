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
  for (int y=0; y<inImg.height; y++) {
    for (int x=0; x<inImg.width; x++) {
      int p1= y*inImg.width+x;
      int p2=y*inImg.width+(inImg.width-1-x);
      int p3=(inImg.height-1-y)*inImg.width+(inImg.width-1-x);
      outImg.pixels[p1]=inImg.pixels[p2];
      outImg2.pixels[p1]=inImg.pixels[p3];
    }
  }
  

  text("Original", 0, 0);
  image(inImg, 0, 30);
  text("Flip Horizontally", inImg.width+30, 0);
  image(outImg, inImg.width+40, 40);
  text("Flip upside down", 0, 400);
  image(outImg2, 0, 500);
}
