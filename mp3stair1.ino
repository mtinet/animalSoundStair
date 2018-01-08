// www.geeetech.com사의 vs1053 쉴드를 사용하는 동물소리 계단을 만들려고 시도하였으나, 
// arduino mega2560 보드는 쉴드가 동작이 안되고, arduino uno 보드는 조도센서를 사용한 
// analogRead핀을 6개만 사용가능하므로, digitalRead핀까지 사용해 테스트 해 보았지만, 
// 지속되는 오작동으로 제대로 작동하지 않음. 
// 그래서 계단 10개를 5개씩 2개로 나누어 arduino uno 보드 2개와 mp3 쉴드 2개로 작업하였음.
// 두개로 나눈 파일의 파일명은 mp3stair1.ino 와 mp3stair2.ino로 구분하였으며, 
// 1은 아래쪽 계단 5개, 2는 위쪽 계단 5개를 동작시킴. 
// 조도센서의 전원을 분리하여 만들어도 되지만, 분리하지 않은 상태이므로 둘 중 하나의
// 보드에서 조도센서에 전원을 인가하고 두 arduino uno 보드 사이에 gnd 핀을 접지해줘야 함.
// track001.mp3~track005.mp3 까지 사용함.

#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;

int s1, s2, s3, s4, s5;
int s_val1, s_val2, s_val3, s_val4, s_val5;


void setup(){
  Serial.begin(9600);
  sd.begin(SD_SEL, SPI_HALF_SPEED);
  MP3player.begin();

  s_val1 = analogRead(A0);
  s_val2 = analogRead(A1);
  s_val3 = analogRead(A2);
  s_val4 = analogRead(A3);
  s_val5 = analogRead(A4);
  
  Serial.println("Make fun!!");
}

void loop(){
  s1 = analogRead(A0);
  s2 = analogRead(A1);
  s3 = analogRead(A2);
  s4 = analogRead(A3);
  s5 = analogRead(A4);

  
   
  Serial.print("s1 : ");
  Serial.print(s1);
  Serial.print("  s2 : ");
  Serial.print(s2);
  Serial.print("  s3 : ");
  Serial.print(s3);
  Serial.print("  s4 : ");
  Serial.print(s4);
  Serial.print("  s5 : ");
  Serial.println(s5);

  
  if (s1 < s_val1 - 100) {
    MP3player.playTrack(1);   
    Serial.println("1");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s2 < s_val2 - 100) {
    MP3player.playTrack(2);   
    Serial.println("2");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s3 < s_val3 - 100) {
    MP3player.playTrack(3);   
    Serial.println("3");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }

  if (s4 < s_val4 - 100) {
    MP3player.playTrack(4);   
    Serial.println("4");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }
  if (s5 < s_val5 - 100) {
    MP3player.playTrack(5);   
    Serial.println("5");
    delay(10);
  } else {
    MP3player.playTrack(0);
    Serial.println("non");
    delay(10);
  }  
}
