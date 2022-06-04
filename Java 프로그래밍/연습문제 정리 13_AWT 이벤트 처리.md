```
   1. 실제로 이벤트 처리를 수행하는 객체는 무엇인가?
    a. 이벤트 클래스 
    b. 이벤트 리스너
    c. 이벤트 소스 
    d. AWT 컴포넌트
      b 
        해설 Java에서는 이벤트가 발생한 컴포넌트(이벤트 소스)에서 직접 이벤트를 처리하지 않고 다른 객체에 이벤트의 처리를 위임한다. 
             이벤트의 처리를 위임받은 객체는 이벤트 리스너이다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172013202-74a252c7-d40a-4be6-9f54-5e54ad3e509d.png)

> ![image](https://user-images.githubusercontent.com/17442343/172013215-9159e34f-e99e-4124-b2a9-b0195a866263.png)

```
  4.  ActionEvent란 무엇인가?
    버튼을 클릭, 메뉴 항목을 선택, 리스트의 항목을 더블 클릭, TextField 컴포넌트에서 엔터키를 칠 때와 같이 어떤 명령을 지시하는 사용자 행위이다.
```

```
  5. 다음 중 상응하는 어댑터 클래스가 존재하지 않는 리스너는 무엇인가?
    a. ActionListener 
    b. MouseListener
    c. KeyListener 
    d. ComponentListener
      a
        해설 ActionListener를 구현할 때는 actionPerformed() 메소드만 정의하면 되므로 어댑터 클래스가 필요없고 ActionAdapter 클래스는 존재하지도 않는다.
```

```
  6. MouseListener 객체를 이용해 처리할 수 있는 저수준의 이벤트로는 어떠한 것이 있는가? 
    mouseClicked/mouseEntered/mouseExited/mousePressed/mouseReleased
      해설 MouseListener 인터페이스를 구현하여 이벤트 처리를 위한 클래스를 만들고자 할 때
           MouseEvent를 위의 다섯 가지로 구분하여 처리해 줄 수 있다. 
           MouseAdapter 클래스를 상속받아 클래스를 만들 때는 mouseDragged와 mouseMoved도 고려할 수 있다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172013389-036d12ad-9854-418d-9371-f9a9a070bbac.png)

```
  8. 리스트박스를 표현하는 List 컴포넌트에서 어떤 경우에 ItemEvent가 발생하는가? 또 어떤 경우에 ActionEvent가 발생하는가?
    항목을 선택하거나 해제할 때 ItemEvent가 발생한다. 항목을 더블 클릭하거나 항목을 선택한 상태에서 엔터키를 치면 ActionEvent가 발생한다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172013499-7b184d67-257b-4e29-8748-fcd8720b4a3d.png)

> ![image](https://user-images.githubusercontent.com/17442343/172013528-47cf723a-7778-45f4-a6be-497a3212047d.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172013537-7d9c10d4-8abc-4eb0-850e-a3ac0d10e12e.png)

> ![image](https://user-images.githubusercontent.com/17442343/172013569-97f77fff-147d-413d-b748-c9b92e390628.png)


```

```






