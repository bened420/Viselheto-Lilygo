#include "menu.h"
#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>

#define BAT_ADC_PIN 4

void drawMenu() {
    float voltage = 0;
    for (int i = 0; i < 10; i++) {
        voltage += (analogRead(BAT_ADC_PIN) / 4095.0) * 3.3 * 2;
    }
    voltage /= 10;
    canvas.fillSprite(TFT_BLACK);
    canvas.setTextSize(2);
    if (currentMenu == 0) {
        canvas.setCursor(0, 0);
        canvas.setTextColor(TFT_BLACK, TFT_WHITE);
        canvas.println("Animaciok");
        canvas.setTextColor(TFT_WHITE, TFT_BLACK);
        canvas.println("Dobokockak 2D6");
    }else {
        canvas.setCursor(0, 0);
        canvas.setTextColor(TFT_WHITE, TFT_BLACK);
        canvas.println("Animaciok");
        canvas.setTextColor(TFT_BLACK, TFT_WHITE);
        canvas.println("Dobokockak 2D6");
    }



    if (voltage > 4.0) {
        canvas.setCursor(5, 150);
        canvas.setTextColor(TFT_GREEN, TFT_BLACK);
        canvas.print("Charging");
    }else if (voltage > 3.5) {
        canvas.setCursor(5, 150);
        canvas.setTextColor(TFT_GREEN, TFT_BLACK);
        canvas.print(voltage);
    }else {
        canvas.setCursor(5, 150);
        canvas.setTextColor(TFT_RED, TFT_BLACK);
        canvas.print(voltage);
    }

    canvas.pushSprite(0,0);
}
