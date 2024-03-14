[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/r57zone/Zapper-Light-Gun-PC/) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/r57zone/Zapper-Light-Gun-PC/blob/master/README.RU.md)
← Choose language | Выберите язык

Light gun modification from NES (Famicom and others) for PC NES emulators (FCEUX).

[![](https://user-images.githubusercontent.com/9499881/212734602-05fe86a4-f981-49e0-bcda-7e930fe3c7f1.gif)](https://youtu.be/HwHkjYlQwL0)

## What will need:
1. Light Gun for the NES.
2. 4.7k Ohm resistor.
3. Board [Digispark](http://alii.pub/5r59m3) (suitable for both large and small).

## Soldering
The light gun has 4 pins (contacts): power supply 5 volts (+), ground (-), digital button pin, digital pin depending on the value of the photoresistor.


To determine the pins, need to disassemble the gun, then need to find the ground (-), one of the contacts of the button (trigger) goes to the ground, the second contact of the button is the digital pin of the button value. As a rule, the power supply (+) is red, and it is most likely located on the opposite side of the ground (-). The remaining pin is responsible for the photoresistor.


![](https://user-images.githubusercontent.com/9499881/117073818-86264080-ad43-11eb-81dc-f019d03fef49.png)

* The photoresistor is soldered to pin 2.
* The button is soldered to pin 0.
* Power supply (+) is soldered to 5v and minus (-) to GND.
* Also need to solder a 4.7k Ohm resistor from pin 2 to 5v.


For Zapper will also need the [following](https://twitter.com/eNuffGs/status/1046244128365805570).

## Digispark firmware
1. Download [Arduino IDE](https://www.arduino.cc/en/software) and unpack it.
2. Install the latest [drivers Digispark](https://github.com/digistump/DigistumpArduino/releases/) ("Digistump.Drivers.zip").
3. Launch the Arduino IDE, go to settings, and add `https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json` in the "Additional links for the board manager" field and click "OK".
4. Go to "Tools" -> "Board" -> "Board Manager", enter in the search `Digistump AVR boards` and install it.
5. Copy [firmware contents](https://github.com/r57zone/Zapper-Light-Gun-PC/blob/master/Firmware/DigisparkLightGun.ino), insert it into the Arduino IDE and click the "Upload" button.
6. Connect the Digispark board within a minute or press the Upload button again. Digispark is flashed immediately after connection (need to re-plug it for flashing).

## Configuring FCEUX
1. Download [FCEUX](https://fceux.com/web/download.html) and unpack it ("FCEUX 2.3.0 win32 Binary").
2. Launch and go to "Config" -> "Input".
3. Configure the first gamepad or disable it (it is not necessary for a light gun), and in the second gamepad, select **"LCD Zapper (Advance)"**.
4. In the same window, in the second gamepad panel, click "Configure".
5. In the "LCD Zapper (Advance)" window, press the Trigger button and press the light gun button 2 times. Next, click on the "Light Sensor" button and shine something 2 times into the barrel of the gun or can quickly repaint the black background to white in the "Paint" program by clicking the right and left mouse buttons, and pointing the gun at the drawing area.
6. After the start of the game, shoot in the menu so that the delay of the light gun is determined by the patched rom (game).

## Troubleshooting
If you are using a monitor with a minimum brightness and the gun don't work, then try to increase the brightness slightly during the game.

## Games (Roms)
Thanks to the project [NESLCDMod](http://neslcdmod.com) now us can play original NES games on modern monitors and televisions.


On the site [can download patches for games](http://neslcdmod.com/roms/) and apply them to the original roms, using the program [Lunar IPS](http://fusoya.eludevisibility.org/lips/download/lips102.zip).

### Applying the patch
1. Find the original game file "Duck Hunt (World).nes" (MD5: `D802E9D7B8BFD586F878E0922F62BF46`).
2. Download [latest patch](http://neslcdmod.com/roms/) for it.
3. Run [Lunar IPS](http://fusoya.eludevisibility.org/lips/download/lips102.zip) and open the patch.
4. Next, select the original rom and the patched game is ready.

## Thanks
* For project [NESLCDMod](http://neslcdmod.com) which allowed us to play NES games on modern monitors and TVs.
* FCEUX emulator [developers](https://github.com/TASVideos/fceux/graphs/contributors) for a good emulator of NES games.
* For developer [Jason W. Thompson](https://github.com/JasonWThompson) for adding support for light guns to the FCEUX emulator.
* To the developer and radioamateur [Alexey Cluster](https://github.com/ClusterM) for the wiring scheme of the light guns.

## Feedback
`r57zone[at]gmail.com`