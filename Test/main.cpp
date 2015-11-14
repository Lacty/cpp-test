
#include <iostream>
#include <functional>

/*
enum class FadeType {
  None,
  
  FullScreen,
  Circle,
  Vell,
  FromLeft,
  FromRight,
  BothSide,
  Hole
};*/

enum FadeType {
  Circle,
  FullScreec
};



class Fade {
private:
  std::function<void()> fade;
  void a();
  void b();
  
public:
  void setOutType(FadeType type);
  
  void draw();
};

void Fade::a() {
  std::cout << "a" << std::endl;
}

void Fade::b() {}

void Fade::setOutType(FadeType type) {
  switch (type) {
    case Circle:
      fade = [=]{ a(); };
    break;
      
    case FullScreec:
      fade = [=]{ b(); };
    break;
  }
}

void Fade::draw() {
  fade();
}

int main() {
  Fade fade;
  fade.setOutType(Circle);
  fade.draw();
}