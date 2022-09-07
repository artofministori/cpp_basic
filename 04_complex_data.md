# 복합 데이터형
#### <a href="04_complex_data.cpp">예제파일 링크</a>

- 복합 데이터 형은 기본 정수와 부동 소수점으로부터 만들어짐
- 배열
- 구조체
- 포인터
- 클래스

## 배열

- 데이터형이 같은 여러 개의 값을 연속적으로 저장할 수 있는 데이터 구조
- 데이터형, 배열 이름, 배열 원소의 개수를 선언
- 배열 원소에 개별적 접근 가능 : 인덱스

### 배열 초기화 규칙

- 초기화 형식은 배열 정의하는 곳에서만 사용 가능
- 초기화할 때 개수를 정의하지 않으면 원소 개수만큼 생성됨

```
int a[3] = {1,2,3};
int b[3];
b[3] = {4,5,6} (X)
short c[] = {1,2,3,4,5} : 원소 5개짜리 배열 생성
```

## 문자열

- 연속적으로 저장되어 있는 문자들
- char형 배열

```
char a[5] = {'H', 'e', 'l', 'l', 'o'};
char b[10] = "Mr. Cheeps"; // '\0'이 저장됨
char f[] = "Bubbles";
```
- 'S' vs "S"
  - 'S' 는 하나의 문자로 구성 => 83이 대입됨
  - "S" 는 두 개의 문자(S와 \0)로 구성, 메모리 주소 저장

```
char size = 'S' (O)
char size = "S" (X)
```

### 문자열 상수의 결합

### 배열에 문자열 사용

### 문자열 입력

### 한 번에 한 행 입력

- cin.getline()
- cin.get()

#### 빈행과 기타 문제

- cin.clear()

### 문자열과 수치의 혼합 입력

## string 클래스

- 문자열을 하나의 데이터형으로 나타냄

```
string str = "Hello World"; // string 객체 초기화
```

### 대입, 결합, 추가

```
string str1 = "Hello";
string str2;
string str3;

str1 = str2;
str3 = str1 + str2;
str3 += str1;
```

### string 클래스 조작

```
#include <string> // string class 사용
#include <cstring> // c 스타일 문자열 라이브러리

// C 스타일
strcpy(str1, str2); // str2를 str1에 복사
strcat(str1, str2); // str2를 str1에 추가
```

### string 클래스 입출력

### 다른 형태의 문자열 상수

## 구조체

- 관련된 정보를 하나의 단위로 묶어서 저장
- 여러 종류의 데이터를 저장
- 클래스의 기초
- 사용자 정의 데이터형 -> 선언 필요
- 구조체 서술 정의, 구조체 변수 생성

```
// 구조체 서술 정의
struct inflatable {
  char name[20];
  float volume;
  double price;
}

// 구조체 변수 생성
inflatable a;

// 구조체 사용
// 초기화
inflatable quest = {
  "Hello",
  1.88f,
  29.99
}

// 대입
quest.volume = 3.09f;
```

### 구조체 대입

### 구조체 배열

```
inflatable quest[2] = {

  {"Hello", 0.12f, 55.94},
  {"World", 0.45f, 89.32}

};
```

## 공용체

- 서로 다른 데이터 형을 한 번에 한 가지만 보관할 수 있는 데이터 형식이다.

## 열거체

- spectrum을 새로운 데이터 형의 이름의 열거체 형태 데이터로 생성
- red ~ ultraviolet 순서대로 0~7까지 정수값을 나타내는 기호 상수 생성 -> 열거자
- 입력되는 정수값을 지정할 수 있음
- 대입 연산만 가능

```
enum spectrum {
  red, orange, yellow, green, blue, violet, indigo, ultraviolet
}

spectrum band;

band = blue; (O)
band = 2000; (X)

* band에는 8가지 값만 대입할 수 있다.

int color = blue; (O)
band = 3 (X)
color = 3 + red;

enum bigstep { first, second = 100, third } // third = 101

enum { zero, null = 0, one, uno = 1 } // zero, null = 0 ,, one, uno = 1
```

## 포인터와 메모리 해제

- 포인터 : 값 자체가 아니라 값의 주소를 저장하는 변수
- 메모리 관리하는데 필수
- runtime, compile time
- oop에서 배열의 크기를 runtime에 결정하기를 원하는 경우

```
int home = 5;

home : 변수 값
&home : 변수 주소
```

```
int a = 5; // int형 변수 선언, 5 초기화
int* pa; // int형 포인터 선언
pa = &a; // pa 포인터에 a 주소 대입

- a, *pa => 변수값 6
- &a, pa => 주소값 16진수
```

