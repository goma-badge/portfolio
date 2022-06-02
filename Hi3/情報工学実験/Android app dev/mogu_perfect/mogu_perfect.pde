// Ketaiライブラリ等を追加する(C言語でいう#includeと等価)
import android.view.MotionEvent;
import ketai.sensors.*;
import ketai.ui.*;
int deg,count = 1,point = 0;
float  mx, my;
KetaiSensor sensor;
KetaiGesture gesture;
float accX, accY, accZ;
PImage Mogura;
//---------------------------------------
// アプリ実行開始時に一度だけ実行される初期化用関数setup()
void setup() { 
  Mogura = loadImage("mogura-illust4.png");
  gesture = new KetaiGesture(this);
  orientation(PORTRAIT);
  sensor = new KetaiSensor(this);
  sensor.start();
  mx = random(width-Mogura.width*0.5);
  my = random(height-Mogura.height*0.5);
}

public boolean surfaceTouchEvent(MotionEvent e){
  super.surfaceTouchEvent(e);
  return gesture.surfaceTouchEvent(e);
}

//---------------------------------------
// アプリ実行時に何度も繰り返し実行されるmain関数draw()
void draw() {
  switch (count){
    case 1:
      out(point);
      break;
      
    case 2:
      drawString("Good Job!\n(TAP)");
      break;
    
    case 3:
      exit();
      break;
  }
}
void out(int point){
      background(255);
      textSize(100);
      text("point is "+ point ,100,100);
      fill(255, 0, 0);
      ellipse(width/2 - accX*150, height/2 + accY*150, 80, 80);
      rotateImage(mx, my, Mogura, deg);
      judge(width/2-accX*150, height/2+accY*150);
      
      deg++;
      if (deg >360) {
        deg = 0;
        }
}
//画像を回転//
void rotateImage(float x, float y, PImage img, float deg) {
  pushMatrix();
  translate(x + img.width*0.25, y + img.height*0.25);
  rotate(radians(deg));
  imageMode(CENTER);
  image(img, 0, 0, img.width*0.25, img.height*0.25);
  imageMode(CORNER);
  popMatrix();
}
// 加速度センサ値が届いたら随時呼ばれる関数//
void onAccelerometerEvent(float x, float y, float z) {
  accX = x;
  accY = y;
  accZ = z;
}

//---------------------------------------
// ke:taiライブラリの所定の関数に操作イベントを引き渡すためのおまじない
void drawString(String s) {
  fill(0);
  background(255);
  textSize(100);
  text(s, width/3, height/2);
  text("finish(flick)",width/3, height/3);
}


//---------------------------------------
// ユーザがタップしたときに呼び出される関数
// タップした座標が引数x, yに入れられて実行される。
//
void judge(float x, float y) {
  if (dist(x, y, mx+Mogura.width*0.25, my+Mogura.height*0.25) <= 50) {
    count = 2;
    mx = random(width-Mogura.width*0.5);
    my = random(height-Mogura.height*0.5);
  }
}

void onTap(float x,float y){
  if(count == 2){
     count = 1;
     point += 10;
  }
}

void onFlick(float x, float y,float px, float py, float v){
  count = 3;
}
