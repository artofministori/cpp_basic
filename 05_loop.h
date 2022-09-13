#include "main.h"

void loopIncDec(){

  double arr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};

  double *pt = arr;

  cout << pt << endl;
  cout << *pt << endl;
  
  cout << ++pt << endl;
  cout << *++pt << endl;
  cout << ++*pt << endl;
  
}

void compareString(){

  string word = "?ate";

  for(char ch='a'; word != "mate"; ch++){
    cout << word << endl;
    word[0] = ch;
  }

  cout << word << endl;
  
}