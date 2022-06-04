```
3. 다음과 같이 객체를 생성할 때 StringBuffer 객체의 용량은 얼마인가?
          StringBuffer sb 〓 new StringBuffer(“Able was I ere I saw Elba.”);
  42
    해설 생성자 StringBuffer(String str)는 주어진 문자열을 표현하는 객체를 만들고 
         버퍼의 용량은 (str의 길이＋16)이다.
```

> ![image](https://user-images.githubusercontent.com/17442343/171999715-90012882-7cab-4da8-b1de-83dd9bd6865e.png)

```
  5. int값 65를 상응하는 16진수 문자열인 “41”로 바꾸고자 한다. Java API 문서를 찾아 Integer 클래스에 관해 살펴보고 어떤 메소드를 사용하면 되는지 알아보라.
    Integer.toHexString()
      해설 Integer 클래스가 제공하는 메소드로 public static String toHexString(int i)를 사용하면 된다. Integer.toHexString(65)의 결과는 “41”이다.
```

```
  6.  다음 문장은 키보드로 입력을 받아 그대로 출력하는 문장이다. 만약 키보드로 한글을 입력한다면 결과를 예측할 수 없다. 이유를 설명하라.
              System.out.println((char)System.in.read());
    read() 메소드는 1바이트를 읽는다. 따라서 숫자나 영문자와 같이 0에서 255 사이의 ASCII 코드값만을 읽을 수 있다. 
    한글은 2바이트 문자이므로 다른 방법이 필요하다.
```

```
  7. Object 클래스에 관한 설명으로 맞는 것을 모두 고르시오.
              a. 객체를 String으로 변환하는 toString() 메소드를 가지고 있다.
              b. 다른 객체와 같은지 비교하는 equals(String) 메소드를 가지고 있다.
              c. java.lang 패키지에 포함되어 있다.
              d. 상속 구조에서 모든 클래스의 최상위 클래스이다.
      a, b, c, d
        해설 Object 클래스에서 정의된 toString()과 equals() 메소드는 모든 클래스에서 그대로 또는 재정의하여 사용할 수 있다.
```

```
  8. 보기의 내용이 밑줄 부분에 들어간다고 할 때, 결과가 다른 하나는 무엇인가?
              String str1 = “Java”; 
              String str2 = str1;
              String str3 = new String(“Java”); 
              System.out.println(  );
    a. str1.equals(str2)
    b. str2.equals(str3)
    c. str1==str2 
    d. str2==str3                                                                                                       - 정답
      해설  〓〓 연산자를 이용할 때는 두 객체가 같은 객체일 때만 true가 된다. 
            보기에서 str1과 str2는 같은 객체를 가리키며 str3은 별개의 객체를 가리킨다.
```

> ![image](https://user-images.githubusercontent.com/17442343/171999893-b6e51a5a-76e0-4140-abd8-9bf8e219eac7.png)

> ![image](https://user-images.githubusercontent.com/17442343/172000078-c20c5527-126a-4d6e-b66e-ee823d192147.png)

> ![image](https://user-images.githubusercontent.com/17442343/172000096-bf3091f1-0edc-4523-be7a-8d03b3525ce2.png)


```
  
```
