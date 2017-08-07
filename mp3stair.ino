// www.geeetech.com사의 vs1053 쉴드를 사용하는 동물소리 계단을 만들려고 시도하였으나, 
// arduino mega2560 보드는 쉴드가 동작이 안되고, arduino uno 보드는 조도센서를 사용한 
// analogRead핀을 6개만 사용가능하므로, digitalRead핀까지 사용해 테스트 해 보았지만, 
// 지속되는 오작동으로 제대로 작동하지 않음. 
// 그래서 계단 10개를 5개씩 2개로 나누어 arduino uno 보드 2개와 mp3 쉴드 2개로 작업하였음.
// 두개로 나눈 파일의 파일명은 mp3stair1.ino 와 mp3stair2.ino로 구분하였으며, 
// 1은 아래쪽 계단 5개, 2는 위쪽 계단 5개를 동작시킴. 
// 조도센서의 전원을 분리하여 만들어도 되지만, 분리하지 않은 상태이므로 둘 중 하나의
// 보드에서 조도센서에 전원을 인가하고 두 arduino uno 보드 사이에 gnd 핀을 접지해줘야 함.

#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;

int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;
int s5 = 0;
int s6 = 0;
int s7 = 0;
int s8 = 0;
int s9 = 0;
int s10 = 0;

void setup(){
  Serial.begin(9600);
  sd.begin(SD_SEL, SPI_HALF_SPEED);
  MP3player.begin();

  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  pinMode(s4, INPUT_PULLUP);
  pinMode(s5, INPUT_PULLUP);
  pinMode(s6, INPUT_PULLUP);
  pinMode(s7, INPUT_PULLUP);
  pinMode(s8, INPUT_PULLUP);
  pinMode(s9, INPUT_PULLUP);
  pinMode(s10, INPUT_PULLUP);

  Serial.println("Make fun!!");
}

void loop(){
  s1 = digitalRead(A0);
  s2 = digitalRead(A1);
  s3 = digitalRead(A2);
  s4 = digitalRead(A3);
  s5 = digitalRead(A4);
  s6 = digitalRead(A5);
  s7 = digitalRead(3);
  s8 = digitalRead(4);
  s9 = digitalRead(5);
  s10 = digitalRead(0);
  
   
  Serial.print("s1 : ");
  Serial.print(s1);
  Serial.print("  s2 : ");
  Serial.print(s2);
  Serial.print("  s3 : ");
  Serial.print(s3);
  Serial.print("  s4 : ");
  Serial.print(s4);
  Serial.print("  s5 : ");
  Serial.print(s5);
  Serial.print("  s6 : ");
  Serial.print(s6);
  Serial.print("  s7 : ");
  Serial.print(s7);
  Serial.print("  s8 : ");
  Serial.print(s8);
  Serial.print("  s9 : ");
  Serial.print(s9);
  Serial.print("  s10 : ");
  Serial.println(s10);
  
  if (s1 == LOW) {
    MP3player.playTrack(1);   
    Serial.println("1");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s2 == LOW) {
    MP3player.playTrack(2);   
    Serial.println("2");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s3 == LOW) {
    MP3player.playTrack(3);   
    Serial.println("3");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }

  if (s4 == LOW) {
    MP3player.playTrack(4);   
    Serial.println("4");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s5 == LOW) {
    MP3player.playTrack(5);   
    Serial.println("5");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s6 == LOW) {
    MP3player.playTrack(6);   
    Serial.println("6");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s7 == LOW) {
    MP3player.playTrack(7);   
    Serial.println("7");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s8 == LOW) {
    MP3player.playTrack(8);   
    Serial.println("8");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s9 == LOW) {
    MP3player.playTrack(9);   
    Serial.println("9");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s10 == LOW) {
    MP3player.playTrack(10);   
    Serial.println("10");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
 
}
 

