import processing.video.*;
Capture cam;
PImage outImg;
PImage outImg2;
PImage outImg3;
void setup(){
  size(1500,1000);
  
  String[] settings = Capture.list();
  if(settings.length ==0){
    println("There are no cameras available for capture.");
    exit();
  }
  cam = new Capture(this, settings[0]);
  cam.start();
  
  printArray(settings);
}

void draw(){
  if(cam.available()==true)cam.read();
  image(cam,0,0);
  outImg=createImage(cam.width, cam.height, RGB);
  outImg2=createImage(cam.width, cam.height, RGB);
  outImg3=createImage(cam.width, cam.height, RGB);
  for (int y=0; y<cam.height; y++) {
    for (int x=0; x<cam.width; x++) {
      int p1= y*cam.width+x;
      int p2=y*cam.width+(cam.width-1-x);
      int p3=(cam.height-1-y)*cam.width+(cam.width-1-x);
      outImg.pixels[p1]=cam.pixels[p2];
      outImg2.pixels[p1]=cam.pixels[p3];
      outImg3.pixels[p2]=cam.pixels[p3];
    }
  }
  text("Original", 0, 0);
  image(cam, 0, 0);
  image(outImg, cam.width, 0);
  image(outImg2, cam.width, 480);
  image(outImg3, 0, 480);
  
}
