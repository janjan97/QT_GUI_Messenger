## QT GUI 메신저 프로그램 [ MoJi Chat ]
 + Language : C / C ++
 + Tools : QT Creator
 + OS : Ubuntu

설계 및 목표
---
채팅과 파일전송이 가능한 GUI 메신저 프로그램을 구현해보기 (GTK+ or QT사용)

 요구사항
------
1. 채팅방 구성과 사용자 등록 기능을 가진 소켓 서버를 구현한다.
2. 위 5번에서 구현한 소켓 채팅 프로그램을 활용하여 채팅 기능을 구현한다.
3. GTK+ 또는 Qt 를 이용하여 간단한 채팅 프로그램을 위한 GUI 클라이언트 프로그램을 작성하고 구현한 채팅 프로그램에 적용하여 본다.
4. 파일 전송 기능을 구현한다. FTP 프로토콜 등을 참고하는 것도 좋다.

제한사항 및 결과
----
4번의 요구사항인 파일 전송 기능은 구현하지 못 하였다.

## 기능 
### 연결과 사용자 등록

![연결 및 연결실패](https://user-images.githubusercontent.com/66328790/196455395-c449d51f-614c-4577-998c-0bb4a488a7bf.PNG)

### 사용자와 채팅

![채팅](https://user-images.githubusercontent.com/66328790/196455824-434479a5-b2e3-4a85-a161-2fbd4a907c79.png)

---
<p align="center"><img src="https://user-images.githubusercontent.com/66328790/197033586-d3836246-8aca-40e0-abed-5cba61fd1d25.png"></p>

##### <p align="center"> MainWindow.h

전송과 등록 버튼의 콜백 함수와 통신에 필요한 `QTcpSocket`클래스를 정의한다.

<p align="center"><img src="https://user-images.githubusercontent.com/66328790/197033940-957a8529-91b6-4f2c-a6cf-1431d04002b4.png"></p>

등록을 확인하는 플래그 `is_registered`변수를 `false`로 정의하고 `connect_server`함수에서 소켓과 시그널 그리고 시그널을 받을 경우 콜백 함수를 정의한다.
