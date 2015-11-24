
#include <iostream>


class Fade {
private:
  bool mIsDuringFade;
public:
  void set();
  void draw();

  bool isDuringFade();
}

void Fade::set() {
  isDuringFade = true;
}

void Fade::draw() {
  // 処理
  if (終了条件) {
    mIsDuringFade = false;
  }
  // 描画
}

bool Fade::isDuringFade() {
  return mIsDuringFade;
}

int main() {
  Fade fade;
  fade.set();
  fade.draw();
}
