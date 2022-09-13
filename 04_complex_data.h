#include "main.h"

struct inflatable {
  char name[20];
  // std:string name; //=> error
  float volume;
  double price;
};

void complexDataStructure() {

  inflatable quest = {"Hello", 1.88f, 29.99};

  cout << quest.name << endl;
  cout << quest.volume << endl;
  cout << quest.price << endl;

  quest.volume = 5.99f;

  cout << quest.volume << endl;
}

void complexDataEnum() {

  enum spectrum {
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo,
    ultraviolet
  };

  enum { zero, null = 0, one, uno = 1 };

  spectrum band;

  band = blue;

  cout << ultraviolet << endl;

  cout << band << endl;

  int color = 3 + red;
  cout << color << endl;

  cout << zero << " " << null << " " << one << " " << uno << " " << endl;
}

void complexDataPointer() {
  int a = 5;
  int *pa;
  pa = &a;

  cout << a << " : " << *pa << endl;
  cout << &a << " : " << pa << endl;
}

void complexDataComplex(){

  struct thisYear{
    int year;
  };

  thisYear s01, s02, s03;
  s01.year = 2020;

  thisYear* pa = &s02;
  pa->year = 2021;
  
  thisYear trio[3];
  trio[0].year = 2022;

  thisYear* arp[3] = {&s01, &s02, &s03};
  thisYear** ppa = arp;

  cout << pa << endl;
  cout << (*pa).year << endl;
  cout << pa->year << endl;
  
  cout << trio->year << endl;

  
  cout << ppa << " : " << arp << endl;
  cout << *ppa << " : " << arp[0] << endl;
  cout << (**ppa).year << endl;
  cout << (*ppa)->year << endl;
}