using namespace std;

struct inflatable{
  char name[20];
  //std:string name; //=> error
  float volume;
  double price;
};

void complexDataStructure(){

  inflatable quest = {
    "Hello",
    1.88f,
    29.99
  };

  std::cout << quest.name << std::endl;
  std::cout << quest.volume << std::endl;
  std::cout << quest.price << std::endl;

  quest.volume = 5.99f;

  std::cout << quest.volume << std::endl;
}

void complexDataEnum(){

  enum spectrum {
    red, orange, yellow, green, blue, violet, indigo, ultraviolet
  };

  enum {
    zero, null = 0, one, uno = 1
  };

  spectrum band;

  band = blue;

  cout << ultraviolet << endl;
  
  cout << band << endl;

  int color = 3 + red;
  cout << color << endl;

  cout << zero << " " << null << " " << one << " " << uno << " " << endl;
}

