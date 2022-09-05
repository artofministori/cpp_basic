# C++ 시작하기

## cpp 파일 구성 요소

- // 주석
- #include 전처리 지시자
- 함수 머리 : int main()
- using namespace 지시자
- {} 함수 몸체 코드 블럭
- cout 출력문
- return 종료

### main() 함수

- 함수 몸체에서 처리하는 동작
- 컴퓨터에게 내리는 지시를 구문(statement), 세미콜론으로 끝남
- 인터페이스 역할을 하는 함수 머리
  - 함수 리턴형 : 호출 함수가 피호출 함수로 넘겨주는 정보의 흐름을 나타냄
  - 컴파일러가 추가하는 시동 코드에 의해 호출됨
  - 함수 몸체와 운영체제(컴파일러) 사이의 인터페이스

### 전처리기

- #include 전처리 지시자

```
#include <iostream> : iostream 내용을 프로그램에 추가
```

### 헤더

- C++ 에서는 .h 생략

### namespace 이름 공간

- std(standard) : C++ 표준 구성 요소에 담긴 클래스, 함수, 변수 등등

```
using namespace std;
=> 구성 요소 모두에 std를 사용하지 않을 수 있기 때문에 게으른 방식

using std::cout
using std::cin
using std::endl
=> cout, cin, endl 만 std를 사용하지 않도록 선언함 : using 선언
```