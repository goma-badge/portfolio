//
// 手の画像素材：http://www.irasutoya.com/2013/07/blog-post_5608.html
// 勝ちの画像素材:https://www.irasutoya.com/2015/09/blog-post_51.html
// 負けの画像素材:https://www.irasutoya.com/2015/09/blog-post_78.html

// ゲームの状態を示す番号と状態名のdefine
public static final int MATCH = 0;  // 手を決める状態
public static final int TIE   = 1;  // あいこの状態
public static final int LOSE  = 2;  // 敗北の状態
public static final int WIN   = 3;  // 勝利の状態

// 大域変数の宣言
int status = MATCH;
int player   = 0;
int computer = 0;
int pointY;//画像の縦座標
PImage[] hand;
PImage lose;
PImage win;
PFont font;

//--------------------------------------
// 初期設定(実行時に1回実行される)
//
void setup() {
  // 画面の設定
  size(1200, 1000);
  smooth();

  // 画像ファイルの設定
  hand = new PImage[3];
  hand[0] = loadImage("image/gu.png");
  hand[1] = loadImage("image/choki.png");
  hand[2] = loadImage("image/pa.png");
  lose = loadImage("lose.png");
  win = loadImage("win.png");

  // フォントの設定
  // println(PFont.list());
  font = createFont("メイリオ", 32);   // フォントを設定する
  textAlign(CENTER, CENTER);
}

//--------------------------------------
// 実行停止するまで何度も繰り返し実行される
//
void draw() {
   
 background(#CDF5D5); 
  switch (status) {
   
   
  case MATCH: 
    match();
    break;
  case TIE:   
    tie();
    delay(400);
    again();
    break;
  case LOSE:
    lose();
    delay(400);
    image(lose,600,500);
    again();
    break;
  case WIN:
    win();
   image(win,600,500);
    again();
    break;
  }
}
     
      
//--------------------------------------
// 画面に両者の手を表示する
//
void showHand() {
  imageMode(CENTER);
  image(hand[player  ], width/5, height/2);
  image(hand[computer], width*4/5, height/2);
  fill(0);
  textFont(font);
  text("あなた", width/5, height*2/7);
  text("COM", width*4/5, height*2/7);
  text("z：グー x：チョキ c：パー",width/2,height/8);
}

//--------------------------------------
// 両者の手を決める状態
void match(){
showHand ();
 computer =(int)random(3);
 if(keyPressed == true){
      if(key == 'z')
          player = 0;        
      if(key == 'x')
          player = 1;
      if(key =='c')  
      player = 2;
     judge();
 }
}

//--------------------------------------
// 勝敗判定しstatusの値を変更する
//
void judge() {

  if(player == computer){
   status=TIE;
  }
  if(player == (computer+1)%3){
    status = LOSE;
  }
   if((player+1)%3 == computer){
     status = WIN;
   }
}
void again(){
  delay(1000);
  fill(#EA6FD6);
  text("もう一度遊ぶ:spaceキー",width*2/4,height*4/5);
  text("終了:eキー",width*2/4,height*5/6);
 if(keyPressed = true){
   if(key == 'e'){
     exit();
   }
   if(key == ' '){
    status = MATCH;
   }
 }
}
 //--------------------------------------
// あいこの結果表示
//
void tie() {
  showHand();
  text("あいこ",width/2,height/2);
}
//--------------------------------------
// 敗北の結果表現
//
void lose() { 
  showHand(); 
text("負け",width/2,height/2);
;
}

//--------------------------------------
// 勝利の結果表現
void win() {
   showHand();
   text("勝ち",width/2,height/2);
   
   }
   