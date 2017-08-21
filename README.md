# animalSoundStair

## 계단을 밟으면 동물울음소리가 나는 솔루션입니다.  

---
### 개요

* www.geeetech.com사의 vs1053 쉴드를 사용하는 동물소리 계단을 만들려고 시도하였으나,   
* arduino mega2560 보드는 쉴드가 동작이 안되고, arduino uno 보드는 조도센서를 사용한   
* analogRead핀을 6개만 사용가능하므로, digitalRead핀까지 사용해 테스트 해 보았지만,   
* 지속되는 오작동으로 제대로 작동하지 않음.   
* 그래서 계단 10개를 5개씩 2개로 나누어 arduino uno 보드 2개와 mp3 쉴드 2개로 작업하였음.  
* 두개로 나눈 파일의 파일명은 mp3stair1.ino 와 mp3stair2.ino로 구분하였으며,   
* 1은 아래쪽 계단 5개, 2는 위쪽 계단 5개를 동작시킴.   
* 조도센서의 전원을 분리하여 만들어도 되지만, 분리하지 않은 상태이므로 둘 중 하나의  
* 보드에서 조도센서에 전원을 인가하고 두 arduino uno 보드 사이에 gnd 핀을 접지해줘야 함.  
* mp3stair1은 track001.mp3~track005.mp3 까지 사용함.  
* mp3stair2는 track006.mp3~track010.mp3 까지 사용함.  


---
### 라이브러리

* libraries 폴더에 있는 세가지 라이브러리를 압축을 푼 다음 c:/program files(x86)/arduino/libraries/ 폴더에 복사하고 나서 아두이노IDE를 열어야 컴파일과 업로드가 가능합니다.

---
### 소리  

* 2초 이하의 동물소리들입니다. 계단에 사용하기 좋은 음원의 길이는 2초이하가 적당합니다.
