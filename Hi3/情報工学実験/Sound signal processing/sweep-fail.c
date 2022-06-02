//
// 次のような音を生成しようとして失敗する例
// 
//   　0秒目から1秒目まで：440Hzのsin波
//   　1秒目から2秒目まで：440Hzから880Hzに上昇するsin波（スイープ音）
//   　2秒目から3秒目まで：880Hzのsin波
//
#include <stdio.h>
#include <math.h>
#define LEN         2     // 再生時間
#define A           20000 // sin波の振幅
#define SAMPLE_RATE 44100 // wavファイルのサンプリング周波数

int main() {
    double t;             // 時刻(単位=秒)
    double y;             // 時刻tにおける瞬時値

    // 1秒間で440Hzから880Hzに上昇する音のためのパラメータ
    double xStart = 0;      // 上昇開始の時刻
    double xEnd   = 1;      // 上昇終了の時刻
    double yStart = 440;    // 上昇開始のHz
    double yEnd   = 880;    // 上昇終了のHz
    double d = (yEnd - yStart) / (xEnd - xStart); // 上昇の傾き
    double f;

    // 440Hzのsin波を1秒間出力する
    for (t = 0; t <= 1; t += 1.0 / SAMPLE_RATE){
        y = A * sin(2.0 * M_PI * yStart * t);
        printf("%d\n%d\n", (short)y, (short)y);
    }

    // 1秒間で440Hzから880Hzに上昇するsin波(スイープ音)を出力する
    for (t = 0; t <= 1; t += 1.0 / SAMPLE_RATE){
        f = d * t + yStart;                  // 現在の周波数を求める
        y = A * sin(2.0 * M_PI * f * t);
        printf("%d\n%d\n", (short)y, (short)y);
    }

    // 880Hzのsin波を1秒間出力する
    for (t = 0; t <= 1; t += 1.0 / SAMPLE_RATE){
        y = A * sin(2.0 * M_PI * yEnd * t);
        printf("%d\n%d\n", (short)y, (short)y);
    }

    return 0;
}

