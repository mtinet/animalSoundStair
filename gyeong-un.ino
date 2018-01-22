// www.geeetech.com사의 vs1053 쉴드를 사용하는 동물소리 계단을 만들려고 시도하였으나, 
// arduino mega2560 보드는 쉴드가 동작이 안되고, arduino uno 보드는 조도센서를 사용한 
// analogRead핀을 6개만 사용가능하므로, digitalRead핀까지 사용해 테스트 해 보았지만, 
// 지속되는 오작동으로 제대로 작동하지 않음. 
// 그래서 계단 12개를 6개씩 2개로 나누어 arduino uno 보드 2개와 mp3 쉴드 2개로 작업하였음.
// 이 파일을 두 개의 아두이노 우노에 넣어서 활용하면 됨. 
// 1은 아래쪽 계단 6개, 2는 위쪽 계단 6개를 동작시킴. 
// track001.mp3~track006.mp3 까지 사용함.

#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;

int s1, s2, s3, s4, s5, s6;
int s_val1, s_val2, s_val3, s_val4, s_val5, s_val6;


void setup(){
  Serial.begin(9600);
  sd.begin(SD_SEL, SPI_HALF_SPEED);
  MP3player.begin();

  s_val1 = analogRead(A0);
  s_val2 = analogRead(A1);
  s_val3 = analogRead(A2);
  s_val4 = analogRead(A3);
  s_val5 = analogRead(A4);
  s_val6 = analogRead(A5);  
  
  Serial.println("Make fun!!");
}

void loop(){
  s1 = analogRead(A0);
  s2 = analogRead(A1);
  s3 = analogRead(A2);
  s4 = analogRead(A3);
  s5 = analogRead(A4);
  s6 = analogRead(A5);

  
   
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
  Serial.println(s6);

  
  if (s1 > s_val1 + 50) {
    MP3player.playTrack(1);   
    Serial.println("1");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s2 > s_val2 + 50) {
    MP3player.playTrack(2);   
    Serial.println("2");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s3 > s_val3 + 50) {
    MP3player.playTrack(3);   
    Serial.println("3");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }

  if (s4 > s_val4 + 50) {
    MP3player.playTrack(4);   
    Serial.println("4");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s5 > s_val5 + 50) {
    MP3player.playTrack(5);   
    Serial.println("5");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }  
  if (s6 > s_val6 + 50) {
    MP3player.playTrack(6);   
    Serial.println("6");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }  
}
