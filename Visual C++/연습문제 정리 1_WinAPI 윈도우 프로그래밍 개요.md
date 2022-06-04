```
  1. 다음은 Visual C+ +로 작성하는 윈도우 프로그래밍에 대한 설명이다. 틀린 것은? 
    1) 입출력 장치로부터 종속되어 있다.                                                                                                   - 정답
    2) 여러 개의 프로그램이 동시에 실행되는 멀티태스킹이 가능하다. 
    3) GUI(Graphics User Interface) 환경이므로 프로그램은 이를 위한 인터페이스를 제공해야 한다.  
    4) 키보드나 마우스 등을 사용할 때마다 사건(Event)이 발생하고 이때 메시지가 발생되며 콜백(CALLBACK) 함수가 이 메시지를 처리하게 된다. 
      윈도우 프로그래밍은 멀티태스킹을 지원하며, 입출력 장치로부터 독립되어 있다. 
      또한 GUI(Graphics User Interface) 환경이며 일관된 사용자 인터페이스를 제공한다. 
      사건이 발생하면 메시지가 발생하고 이는 콜백함수가 처리한다. 
```

```
  2. 다음은 WinMain 함수에 대한 설명이다. 틀린 것은?
    1) 콘솔 응용 프로그램에서 등장하는 main( ) 함수에 해당한다.
    2) 프로그램의 진입점(entry point)이다.
    3) 인스턴스 핸들을 나타내는 hinstance를 매개변수로 갖고 있다. 
    4) WM_PAINT 메시지를 이곳에서 처리하게 된다. 그래서 윈도우에 문자열을 출력한다.                                                                  - 정답
      WM_PAINT 메시지를 비롯한 모든 메시지는 콜백 함수가 처리한다.
```

```
  3. 다음 중 디버깅 모드에서 프로젝트를 실행하여 결과를 보려고 한다. 관계 있는 단축키는? 
    1) [F5]  
    2) [F7]  
    3) [F10]
    4) [F11]
      [ F5(디버깅)] 키를 눌러 실행한다.
```

```
  4. 콜백(CALLBACK) 함수의 정의에 대해 올바로 서술한 것은? 
    1) 프로그램이 호출하는 운영체제 내부의 함수
    2) 사용자 함수가 호출하는 운영체제 내부의 함수
    3) 운영체제가 호출하는 프로그램 내부의 함수                                                                                   - 정답
    4) 파라미터의 순서를 역으로 전달하는 함수
      콜백 함수에 대한 이해를 묻는 문제이다. 
      콜백 함수는 응용 프로그램이 제공하며 운영체제가 필요할 때 호출하는 함수이다. 
      호출되는 방향이 거꾸로 되었기 때문에 콜백이라고 부르는 것이다. 
      정의를 내린다면 ‘운영체제에 의해 호출되는 프로그램 내부의 함수’라고 할 수 있다. 
```

```
  5.  프로그램이 실행되는 동안 발생하는 모든 메시지를 처리하는 함수로 함수명 바로 앞에 CALLBACK이라는 매크로를 사용하며, 사용자가 정의하지만 실제로는 운영체제(OS)가 호출하는 함수는?
    1) WinMain  
    2) 윈도우 프로시저(Procedure)                                                                                                    - 정답
    3) 가상함수  
    4) InitInstance 
      윈도우 프로시저 함수에 대한 설명이다. 
```

```
  6. 운영체제(OS)가 애플리케이션에 메시지를 보낼 때 이를 처리하는 함수는?
    1) WinMain 
    2) 윈도우 프로시저                                                                                               - 정답
    3) 가상함수  
    4) InitInstance 
       Windows가 프로그램에 메시지를 보낸다는 것은 윈도우가 프로그램 내에 있는 함수, 
       즉 사용자가 작성하고, 사용자의 프로그램 코드에서 핵심적인 부분이 되는 함수를 호출한다는 뜻이다. 
       이 함수에 대한 매개변수는 현재 Windows에 의해 보내지고 사용자 프로그램이 받게 되는 특정한 메시지를 나타낸다. 
       사용자의 프로그램에 있는 이 함수를 ‘윈도우 프로시저’라고 한다.
```

```
  7. 다음 중 핸들을 담기 위한 자료형이 아닌 것은?
    1) HDC 
    2) HMENU 
    3) HWND 
    4) LPCTSTR
      HWND, HPEN, HMENU, HBRUSH, HDC 등이 핸들을 담기 위한 자료형이다.
```

```
  8. 다음 중 핸들의 설명으로 맞는 것은?
    1) 대부분 32비트의 정숫값이다.                                                                                                                    - 정답
    2) 사용자가 발급해 사용한다.
    3) 같은 종류의 핸들끼리는 중복된 값을 사용한다.
    4) 사용자는 핸들의 그 실제 값을 알고 있어야 한다. 
      핸들은 어떤 대상에 붙여진 번호이며, 정숫값을 가지고 대부분의 경우 32비트 값이다. 
      운영체제가 발급해 주며 사용자는 쓰기만 하면 된다. 
      값은 종류의 핸들끼리는 절대로 중복된 값을 가지지 않는다. 
      그 실제 값이 무엇인지 몰라도 상관없으며 핸들은 단순한 이름표의 역할만 할 뿐이다.
```

```
  9. 다음은 메시지에 대한 설명이다. 틀린 것은?
    1) 시스템이나 응용 프로그램에 의해 생성된다.  
    2) 키보드나 마우스 등의 사용자 입력 시 생성된다.
    3) 특정 함수 호출에 의해서도 생성된다.
    4) Windows 운영체제는 메시지의 생성과 처리가 한 번만 실행된다.                                                                                    - 정답
      Windows 운영체제는 메시지의 생성과 처리를 무수히 반복하면서 실행된다. 
```

```
  10. 다음 중 메시지를 받기 위하여 메시지 큐를 검사하는 함수로 윈도우가 항상 화면에 보이도록 하는 것은 ?
    1) CreateWindow  
    2) RegisterClassEx 
    3) ShowWindow   
    4) GetMessage                                                                                                                                   - 정답
```   

> ![image](https://user-images.githubusercontent.com/17442343/172016793-76885b7e-ccf8-4fee-bf4b-4218db7924fa.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016799-1765989b-7948-4fd1-96b9-3616df48e024.png)


```
  11. 차일드 윈도우의 바탕색은? 
    1) 흰색 
    2) 검은색 
    3) 빨간색 
    4) 노란색
      GetStockObject(BLACK_BRUSH)에서 배경색을 BLACK으로 결정한다. 
```
> ![image](https://user-images.githubusercontent.com/17442343/172016878-4345309d-ba5e-4427-bfa8-c1e3b3cd409b.png)

> ![image](https://user-images.githubusercontent.com/17442343/172016903-c3d5d97c-79df-4d9a-9639-b2379e625a39.png)

> ![image](https://user-images.githubusercontent.com/17442343/172016912-23517303-33ca-482f-9a96-d064585bb82f.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016916-d9791a9b-b4ce-4650-96b4-e458288eb27d.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016933-309f8d64-60b4-446e-88e6-d7520412e57a.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016936-3a93c139-2b80-4dfc-8aac-11c9ec09c98c.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016961-0f140976-0915-4625-9b81-680a177de9dc.png)

> ![image](https://user-images.githubusercontent.com/17442343/172016968-e2fc97e4-aa52-4586-bb32-9f0ffac73161.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172016973-ec340567-3e35-43d5-a2be-1494d76cab76.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172017006-069190d5-7c66-4dc4-a9b2-64c59d2ed9fa.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172017029-81ffae2a-e98e-48bd-8fa4-5c8c018bf255.png)

> ![image](https://user-images.githubusercontent.com/17442343/172017049-533c5870-57a9-4cb8-9c1a-5cfeec4051f9.png)
>
> ![image](https://user-images.githubusercontent.com/17442343/172017063-5392cd14-71b6-42c2-bc24-bed199cda1bd.png)

```
  
```







