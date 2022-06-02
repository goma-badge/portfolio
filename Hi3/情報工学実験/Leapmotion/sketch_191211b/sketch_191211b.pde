import de.voidplus.leapmotion.*; 

LeapMotion leap; 

public static final int TIE   = 1; //あいこの状態
public static final int LOSE  = 2; //敗北の状態
public static final int WIN   = 3; //勝利の状態


//大域変数の宣言
PImage gu; 
PImage tyoki; 
PImage pa; 
int c = 0; 
int com = 0; 



void setup() { 
  size(800, 500, P3D); 
  leap = new LeapMotion(this); 
  
  gu = loadImage("image/gu.png"); 
  tyoki = loadImage("image/choki.png"); 
  pa = loadImage("image/pa.png"); 

  frameRate(60);
} 



void draw() { 
  int ht; 
  background(255); 
  ArrayList<Hand>hands = leap.getHands(); 
  int handNum = hands.size(); //現在認識している手の数を得る
  if (handNum <= 0)return;    //もし手を検知していなければここで終了



  Hand h = hands.get(0); //0番目の手の情報を得る
  h.draw(); //手を描く
  ht = gc(h); 
  if (frameCount%60 == 0) { 

    com = (int)random(3);
  } 

  print(com); 
  if (com == 0) { 
    image(pa, 0, 0);
  } else if (com == 1) { 
    image(tyoki, 0, 0);
  } else { 
    textSize(30); 
    image(gu, 0, 0);
  } 
  fight(ht, com);
} 

int gc(Hand h) { 

  int count = 0; 
  int player = 0; 
  Finger[] f; 
  
  f = new Finger[5]; 
  for (int i = 0; i<5; i++) { 
    f[i] = h.getFinger(i); 
    if (f[i].isExtended() == true) { 
      count++;
    }
  } 
  if (count == 5) 
  player = 0; 
  if (count == 2) 
  player = 1; 
  if (count != 5 && count != 2) 
  player = 2; 
  return player;
} 

void fight(int player, int com) { 

  if (player==com) { 
    textSize(30); 
    text("TIE", height/2, width/2);
  } else if (player==(com+2)%3) { 
    textSize(30); 
    text("WIN", height/2, width/2);
  } else { 
    textSize(30); 
    text("LOSE", height/2, width/2);
  }
} 