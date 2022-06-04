```
  1.  java.nio.file 패키지에 존재하는 인터페이스로 java.io 패키지의 File 클래스를 대신하기 위해 만들어진 경로를 다루기 위한 인터페이스는 무엇인가?
    Path
      해설 Path는 파일 시스템에 존재하는 경로를 표현하기 위한 것으로 Path 객체는 파일이나 디렉터리를 의미한다.
```

```
  2. Windows 시스템에서 ‘C:\home\joe\foo’에 관한 정보를 추출하기 위해서는 먼저 Path 객체를 생성해야 한다. 객체를 생성하는 문장을 작성하라.
    Path path = Paths.get(“C:\\home\\joe\\foo”);
      해설 Path 객체를 생성하려면 Paths.get(String path) 메소드를 사용한다.
```

```
  3. Files 클래스는 파일의 속성을 확인하거나 파일의 이동, 복사, 삭제 등을 위한 static 메소드를 제공한다. 예를 들어 파일을 복사하기 위한 ‘static boolean exists(매개변수)’를 제공하는데 이때 매개변수의 자료형은 무엇인가?
    Path
      해설 Files 클래스는 파일이나 디렉터리를 다루는 static 메소드를 제공하는데 대개 Path 객체를 매개변수로 사용한다.
```

```
  4. 데이터 입출력 과정에서 버퍼를 사용할 때, 데이터의 종류에 따라 ByteBuffer, CharBuffer, DoubleBuffer 클래스 등을 사용할 수 있다. 버퍼를 생성하기 위한 메소드는 무엇인가?
      allocate(int capacity)와 wrap(byte[] array)
        Buffer의 서브 클래스는 추상 클래스로 생성자를 사용할 수 없다.
        그래서 Buffer의 서브 클래스에서 선언 된 static 메소드인 allocate()나 wrap()을 사용하여 버퍼를 생성한다.
```

```
  5. 버퍼로부터 1개 데이터를 읽기 위한 상대적 읽기 메소드로 ‘get()’이 있다. 상응하는 절대적 읽기 메소드는 어떤 매개변수가 추가로 필요한가?
    절대적 읽기 메소드는 읽을 위치를 의미하는 int형의 매개변수가 필요하다. 
      해설 절대적 읽기 메소드의 형식은 ‘get(int index)’와 같다. index값은 버퍼의 limit 값보다 작아야 한다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172003801-4e7079b6-fc55-4323-8230-261abf648d2c.png)

> ![image](https://user-images.githubusercontent.com/17442343/172003814-d5de7d6b-a2e7-4f9f-a016-916a33696775.png)


```
  
```
