```
  1. InputStream 클래스와 OutputStream 클래스에 관한 설명 중 잘못된 것은?
    a. InputStream은 바이트 단위의 입력에 사용되는 스트림 중 최상위 클래스이다.
    b. OutputStream은 바이트 단위의 출력에 사용되는 스트림 중 최상위 클래스이다.
    c. InputStream과 OutputStream 클래스는 추상 클래스이다.
    d. InputStream의 서브 클래스는 ‘void write(int)’ 메소드를 제공해야 한다.                                              -- 정
      InputStream 클래스에서 ‘abstract int read()’ 메소드와 OutputStream 클래스에서 ‘abstract void write(int)’는 추상 메소드이다. 
      따라서 서브 클래스는 이 메소드를 정의해야 한다.
```

```
  2. 문자 단위 입력 스트림과 출력 스트림 클래스에서 최상위 클래스는 무엇인가?
    Reader와 Writer
      해설 InputStream 클래스와 OutputStream 클래스와 마찬가지로 Reader와 Writer는 추상 클래스이다. 
            Reader의 서브 클래스는 이름 끝에 Reader가 붙으며, Writer의 서브 클래스는 이름 끝에 Writer가 붙는다.
```

```
  3. File 클래스에 관한 설명으로 잘못된 것은?
    a. 파일이나 디렉토리의 경로를 표현한다.
    b. 경로를 표현하는 방법은 운영체제에 따라 다를 수 있다.
    c. 파일의 입출력 기능을 제공한다.
    d. 파일이나 디렉토리의 정보 조회, 생성이나 삭제 기능을 제공한다.
      c
        해설 File 클래스는 입출력 기능을 제공하지 않는다. 
             일 입출력 기능을 사용하려면 RandomAccessFile 클래스나 파일을 다루는 입출력 스트림을 이용해야 한다.
```

```
  4. 마이크로소프트 Windows에서 c:\temp\test.txt 파일을 표현하는 객체를 생성하고자 ‘public File(String pathname)’ 생성자를 사용하려 한다. 어떤 형태로 매개변수를 제공해야 하는가?
    “c:\\temp\\test.txt”
      해설 마이크로소프트 Windows를 사용할 때 절대경로를 표시하려면 “<드라이브 문자>:\\”로 시작해야 한다. 
           또한 상하위 디렉토리를 구분할 때도 ‘\’를 두 번 써 주어야 한다.
```

```
  5. RandomAccessFile 클래스는 파일로부터 읽기나 파일에 쓰기 기능을 지원하는 클래스이다. 여기서 파일 포인터가 무엇인지 설명하라.
    읽기나 쓰기 연산을 할 때 필요한 파일의 위치를 가지고 있는 포인터이다.
      해설 랜덤 엑세스 파일을 하나의 커다란 바이트 배열로 볼 수 있다. 
           파일 포인터는 이러한 바이트 배열에서 읽기나 쓰기의 위치를 표시하는 커서 또는 인덱스라 할 수 있다. 
           즉, 현재 위치가 시작 위치로부터 얼마나 떨어져 있는가를 나타낸다. 파일 포인터는 바이트 단위로 표시된다.
```

```
  6. 다음은 RandomAccessFile 클래스에서 제공하는 메소드들이다. 파일 포인터의 값을 바꾸지 않는 메소드는 무엇인가?
              a. long getFilePointer()                                                                        - 정답
              b. int read()
              c. void seek(long) 
              d. void write(byte[])
    read()와 write(byte[]) 연산은 파일 포인터가 가리키는 위치에서 수행되며 읽혀진 또는 쓰인 바이트의 수만큼 파일 포인터가 증가한다. 
    seek(long) 메소드는주어진 위치로 파일 포인터를 이동시킨다. 
    getFilePointer()는 현재의 파일 포인터 값을 리턴할 뿐이다.
```

```
  7. 파일을 데이터 소스로 하여 문자 단위의 입력을 수행할 때 필요한 클래스는 무엇 인가?  
    FileReader 클래스
      해설 파일을 데이터 생산자로 하여 문자 단위의 입력을 하려면 FileReader 클래스가, 
           바이트 단위로 입력하려면 FileInputStream 클래스가 필요하다. 
           ByteArrayInputStream에서는 바이트 배열을, 
           CharArrayReader에서는 문자 배열을,
           StringReader에서는 문자열을 데이터 생산자로 한다.
```

> ![image](https://user-images.githubusercontent.com/17442343/172001188-c3c84ed7-0264-4ddf-b76a-82bcb7ab0b7d.png)

> ![image](https://user-images.githubusercontent.com/17442343/172001276-fdbf40e5-4d2d-4d15-aff5-d7cfe96d0fd2.png)

> ![image](https://user-images.githubusercontent.com/17442343/172001282-73e4e94e-c497-4dfd-bd3b-fac5d09554e4.png)


```

```














