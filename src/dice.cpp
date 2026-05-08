#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>
#include "dice.h"
#include "menu.h"

struct dots {
    int leftx;
    int rightx;
    int centerx;
    int topy;
    int bottomy;
    int midy;
};



void drawDice(Dice d[], int size) {
    dots Dots;
    int diceSize = 60;
    int dotSize = 6;
    canvas.fillSprite(TFT_BLACK);
    for (int i = 0; i < size; i++) {
        canvas.fillRoundRect(d[i].x,d[i].y,diceSize,diceSize,8,TFT_WHITE);
        Dots.leftx = d[i].x + 15;
        Dots.rightx = d[i].x + 45;
        Dots.centerx = d[i].x + 30;

        Dots.topy = d[i].y + 15;
        Dots.bottomy = d[i].y + 45;
        Dots.midy = d[i].y + 30;


        switch(d[i].side) {
            case 1:
                canvas.fillCircle( Dots.centerx, Dots.midy, dotSize, TFT_BLACK);
                break;
            case 2:
                canvas.fillCircle(Dots.leftx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.bottomy, dotSize, TFT_BLACK);
                break;
            case 3:
                canvas.fillCircle(Dots.leftx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.centerx, Dots.midy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.bottomy, dotSize, TFT_BLACK);
                break;
            case 4:
                canvas.fillCircle(Dots.leftx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.leftx, Dots.bottomy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.bottomy, dotSize, TFT_BLACK);
                break;
            case 5:
                canvas.fillCircle(Dots.leftx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.centerx, Dots.midy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.leftx, Dots.bottomy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.bottomy, dotSize, TFT_BLACK);
                break;
            case 6:
                canvas.fillCircle(Dots.leftx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx,  Dots.topy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.leftx, Dots.midy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.midy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.leftx, Dots.bottomy, dotSize, TFT_BLACK);
                canvas.fillCircle(Dots.rightx, Dots.bottomy, dotSize, TFT_BLACK);
                break;
        }

    }
    canvas.pushSprite(0,0);
}
