# 데이터 처리

- 내장 데이터 형
  - 기본형 : 정수형, 부동 소수점형
  - 복합형 : 배열, 문자열, 포인터, 구조체

## 간단한 변수

- 정보 저장 : 변수 선언

### 변수 이름

- 표기법
- underscore 접두 기호 사용

### 정수형

- 소수부 없는 수
- 여러가지 정수형
- 양수/음수 표현
  - signed/unsigned
- 기본 정수형
  - char, short, int, long, long long

### short, int, long, long long 정수형

- 일반적으로 short-16bit, long-32bit 로 사용
- sizeof
- 변수 초기화

### unsigned 형

- 음수 저장을 할 수 없는 대신 양수 범위가 늘어남

### 정수형 변수 사용 상황

- int : 가장 자연스러운 크기의 정수 크기로 설정됨
- 문자수 표현 : unsigned
- short, long

### 정수형 상수

- 직접 입력하는 정수

### 상수의 데이터 형

- 일반적으로 int 형으로 저장
- 접미어 : l, u, ul 등을 사용해서 타입을 정할 수 있음

### char형

- 문자와 작은 정수
- 1바이트로 표현
- ASCII, Unicode
- 문자 'M' 저장시 77로 변환해서 저장됨 - cin/cout이 변환함
- char 문자 상수 표현 : ''로 묶어서 표현
- 유니버설 네임 코드
- signed char : -128 ~ 127
- unsigned char : 0 ~ 255
- 확장 문자형 : wchar_t
  - 2byte

### bool 형

- true/false

## const 제한자

- 기호 상수를 사용할 때
- 일반적으로 기호 상수의 경우 변수 이름을 모두 대문자로 사용
- 변수 scope 적용 가능
- 복합형 데이터에 적용 가능

```
const int MONTHS = 12;
```

## 부동 소수점수

- 표기 방법
  - 소수점 표기
  - 지수 표기
- 부동 소수점 데이터 타입
  - float, double, long double
- 부동 소수점형 상수
  - 기본적으로 double로 저장됨
  - 정수 사이값, 매우 큰 범위 숫자 표현
  - 정수 연산보다 느림

```
1.234f : float
1.234 : double
1.234l : long double
```

## 산술 연산자

```
+, -, *, /, %
```

### 연산 순서

### 나눗셈에 대한 보충

- 정수 / 정수 => 정수
- 정수 / 부동 소수점 , 부동 소수점 / 정수 => 부동 소수점

### 나머지 연산자

### 연산자 오버로딩

- 오버로딩 : 같은 이름의 함수(메서드)를 여러개 정의하고, 매개변수의 유형과 개수를 다르게 하여 다양한 유형의 호출에 응답
- int 나눗셈, float 나눗셈, double 나눗셈
- 데이터 타입에 따라 다른 연산을 수행함

### 데이터 형 변환

- 자동으로 형변환
  - 특정 데이터형 변수에 다른 데이터형 값을 대입
  - 수식에 데이터형을 혼합하여 사용했을 때
  - 함수에 매개변수를 전달할 때

#### 대입 구문에서 형 변환

```
float a = 3; // int => float
int b = 3.333f; // float => int
```

#### {} 사용한 형 변환

#### 수식에서 형 변환

#### 매개변수를 전달할 때의 형 변환

```
int a = 19.99 + 19.99; // double + double => int
int b = (int) 19.99 + (int) 19.99; // legacy
int c = int (19.99) + int (19.99); // new
```