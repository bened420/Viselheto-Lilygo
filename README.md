# Viselhető LilyGo kijelző

Egy program, ami különféle animációkat játszik le és egyéb kiegészítőkkel látja el a LilyGo T-Display S3-at, hogy stílusos kiegészítő legyen.

## Funkciók
* Többféle animáció
* 2D6 szimulátor
* Akkuszint-kijelzés

A felső gomb (GPIO 14) használatával válthatunk a menüpontok és animációk között, hosszú nyomásra be- vagy kiléphetünk.

Az alsó gomb (GPIO 0) hosszú nyomására az eszköz deep sleep-be megy, felébreszteni a felső gomb nyomásával lehet.
A kódban van lehetőség 1 gombosra konfigurálni az eszközt.

A kód moduláris, különböző logók és animációk könnyen hozzáadhatóak.


## Szükséges eszközök
* LilyGo T-Display S3
* Egy 8.5 x 20 x 40 mm méretű akkumulátor (vagy hasonló, ami pont befér a modul alá)
* Egy 3D nyomtatott tok (https://makerworld.com/hu/models/2791160-lilygo-t-display-s3-case-battery-keychain#profileId-3103618)

## Projekt futtatása
* A projektet PlatformIO segítségével kell megnyitni CLion-ben vagy Visual Studio Code-ban.
* A szükséges könyvtárak benne vannak a platformio.ini-ben, így automatikusan letöltésre kerülnek.
