```
  1. Frame, Window, Panel, ScrollPane 클래스의 공통 슈퍼 클래스는 무엇인가?
    Object, Component, Container
      넷 모두 컨테이너에 해당하며 컨테이너 클래스의 루트 클래스는 Container 클래스이다. 
      컨테이너는 컴포넌트이므로 Component 클래스를 상속받으며, 
      Java의 모든 클래스는 Object 클래스의 후손이다.
```

```
  2. 컨테이너에 자식 컴포넌트를 추가할 때 사용되는 메소드의 이름은 무엇인가?
    add
      해설 가장 기본적인 메소드는 ‘Component add(Component comp)’이며 이외에도 여러 add()가 Container 클래스에서 오버로딩되어 있다.
```

```
  3. 컨테이너에 포함된 자식 컴포넌트들을 수동으로 배치하려면 어떻게 해야 하는가?
    먼저 컨테이너가 가지고 있는 배치관리자를 제거해야 하는데 ‘setLayout(null)’을 사용한다. 이후에는 각 자식 컴포넌트의 위치와 크기를 정한다.
      해설 배치관리자를 제거하지 않으면 setSize()나 setLocation()으로 자식 컴포넌트의 크기와 위치를 정해 어떻게 나타날지 예측하기 어렵다.
```

```
  4. 다음 컴포넌트 가운데 컨트롤에 해당하지 않는 것은 무엇인가?
    a. Button 
    b. TextField
    c. Choice 
    d. FileDialog
      d 
        FileDialog의 상속관계를 보면 Component＞Container＞Window＞Dialog＞FileDialog이다. 
        AWT GUI 컴포넌트들은 컨트롤과 컨테이너로 구분되며 FileDialog는 컨테이너에 속한다.
```

```
  5. Panel과 Frame의 기본 배치관리자는 무엇인가?
    Panel의 기본 배치관리자는 FlowLayout이며 
    Frame의 기본 배치관리자는 BorderLayout이다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172012480-06080eb6-de01-4e65-b998-bf4ae2d79990.png)

```
  7.  AWT 컴포넌트 가운데 콤보박스를 구현한 컴포넌트는 무엇인가?
    Choice
      해설    Choice는 여러 항목을 제시하고 이중 하나를 선택할 수 있게 하는 컴포넌트이다. 
```

```
  8. CheckboxGroup은 컴포넌트인가 아닌가?
    컴포넌트가 아니다.
      해설 컴포넌트는 화면에 보일 수 있어야 한다. 
           실제로 CheckboxGroup 클래스는 Component 클래스의 서브 클래스가 아니며, 
           이것의 슈퍼 클래스는 Object 하나뿐이다. 
           CheckboxGroup에 의해 그룹으로 묶인 Checkbox 컴포넌트들은 단지 하나만 on 상태를 가질 수 있다.
```

```
  9. List 컴포넌트에서 여러 항목을 선택할 수 있지만 객체를 생성할 때 이것을 명시해야 한다. 어떤 생성자를 사용하면 되는지 API 문서를 보고 답하라.
    List(int rows, boolean multipleMode)
      해설 mutipleMode가 true일 때 여러 항목을 선택할 수 있다. List() 또는 List(int rows)를 이용하면 기본적으로 한 항목만 선택할 수 있다.
```

```
  10. 한 줄짜리 텍스트를 입력받을 때 사용되는 컴포넌트는 무엇인가? 여러 줄의 텍스트를 입력받으려면 어떤 컴포넌트를 사용해야 하는가?
    TextFiled, TextArea
      생성자 TextField(String text, int columns)의 경우는 열의 개수만을 지정할 수 있고
      생성자 TextArea(String text, int rows, int columns, int scrollbars)의 경우는 행과 열의 개수를 지정 할 수 있다.
```

```
  11. 리스트박스를 표현하는 List 컴포넌트에서 어떤 경우에 ItemEvent가 발생하는가? 또 어떤 경우에 ActionEvent가 발생하는가?
      항목을 선택하거나 해제할 때 ItemEvent가 발생한다. 항목을 더블 클릭하거나 항목을 선택한 상태에서 엔터키를 치면 ActionEvent가 발생한다.
        해설 이벤트를 처리하려면 해당 컴포넌트에 이벤트를 등록해야 한다. 
             예를 들어 ActionEvent를 등록하려면 addActionListener()를 사용한다. 
             이때 매개변수로 ActionListen 객체가 주어져야 한다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172012992-3fabef8c-9cca-4c24-ad22-eaf364c889e6.png)
> 
> ![image](https://user-images.githubusercontent.com/17442343/172013081-6cc84495-7466-4f6f-8169-281debe067a0.png)

> ![image](https://user-images.githubusercontent.com/17442343/172013103-fb606030-53ae-46c5-8bd1-dbf0ccf4b4a0.png)

> ![image](https://user-images.githubusercontent.com/17442343/172013107-f98e589f-0ad5-4a0d-8eda-9d7a86e80d05.png)
>
> ![image](https://user-images.githubusercontent.com/17442343/172013134-42e8d725-f8e6-4571-8d37-7b964970a5e1.png)
 

