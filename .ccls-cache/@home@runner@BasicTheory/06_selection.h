#include "main.h"
#include <fstream>
#include <iostream>

void enumSwitch() {

  enum { red, orange, yellow, green, blue, violet, indigo };

  cout << "input color code";
  int code;
  cin >> code;

  while (code >= red && code <= indigo) {
    switch (code) {
    case red:
      cout << "red" << endl;
      break;
    case orange:
      cout << "orange" << endl;
      break;
    case yellow:
      cout << "yellow" << endl;
      break;
    case green:
      cout << "green" << endl;
      break;
    case blue:
      cout << "blue" << endl;
      break;
    case violet:
      cout << "violet" << endl;
      break;
    case indigo:
      cout << "indigo" << endl;
      break;
    }

    cout << "input color code";
    cin >> code;
  }
}

void outfile() {

  char automobile[50];
  int year;
  double a_price;
  double d_price;

  ofstream outFile;
  outFile.open("carinfo.txt");

  cout << "데이터를 화면에 출력" << endl;

  outFile << "데이터를 파일에 출력" << endl;

  outFile.close();
}

void readFile() {
  ifstream inFile;

  char filename[60] = "carinfo.txt";
  inFile.open(filename);

  string value;
  string concat;

  inFile >> value; // 띄어쓰기 단위로 읽음
  while (inFile.good()) {
    concat += value;
    concat += " ";
    inFile >> value;
  }

  cout << concat << endl;

  inFile.close();
}