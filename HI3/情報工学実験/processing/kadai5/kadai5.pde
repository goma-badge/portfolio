import processing.video.*;
Capture cam;
float Rt=red(255);
float Gt=green(0);
float Bt=blue(0);

int xmin;
int xmax;
int ymin;
int ymax;

void setup() {
  size(1500, 1000);


  String[] settings = Capture.list();
  if (settings.length ==0) {
    println("There are no cameras available for capture.");
    exit();
  }
  cam = new Capture(this, settings[0]);
  cam.start();

  printArray(settings);
}

void draw() {
  if (cam.available()==true)cam.read();
  image(cam, 0, 0);
}
