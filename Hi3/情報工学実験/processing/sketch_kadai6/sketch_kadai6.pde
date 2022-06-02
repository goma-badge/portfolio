import processing.video.*;
Capture cam;
PImage img;
float Rt=255;
float Gt=0;
float Bt=0;
float T=20;

float xmin;
float xmax;
float ymin;
float ymax;


void setup() {
  size(1500, 1000);
  img = loadImage("book.png");
  String[] settings = Capture.list();
  if (settings.length ==0) {
    println("There are no cameras available for capture.");
    exit();
  }
  cam = new Capture(this, settings[3]);
  cam.start();

  printArray(settings);
}

void draw() {
  if (cam.available()==true)cam.read();
  background(255);


  xmin = width+1;
  ymin = height+1;
  xmax = 0;
  ymax = 0;

  for (int y=0; y<cam.height; y++) {
    for (int x=0; x<cam.width; x++) {
      int p1= y*cam.width+x;
      float r= red(cam.pixels[p1]);
      float g= green(cam.pixels[p1]);
      float b= blue(cam.pixels[p1]);
      float diff= sqrt(sq(Rt-r)+sq(Gt-g)+sq(Bt-b));

      if (diff<=T) {
        if (x<xmin)xmin=x;
        if (x>xmax)xmax=x;
        if (y<ymin)ymin=y;
        if (y>ymax)ymax=y;
      }
    }
  }
  image(cam, 0, 0); 
  noFill();
  image(img,xmin, ymin, xmax-xmin, ymax-ymin);
}

void mousePressed() {
  loadPixels();
  int i =mouseY*width+mouseX;
  Rt=red(pixels[i]);
  Gt=green(pixels[i]);
  Bt=blue(pixels[i]);
}
