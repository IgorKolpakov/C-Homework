#include <stdio.h>
#include <string>
#define DEFAULT_RADIUS 32

class Function {
  public:
    Function() {
      name = "Function";
    }
    virtual int f(int x) { return x; }
    virtual std::string getName() { return name; }
  protected:
    std::string name;
};
class Ellipse : public Function {
  public:
    int f(int x) { return DEFAULT_RADIUS - 2 * x*x; }
    Ellipse() {
      name = "Ellipse";
    }
};
class Hiperbola : public Function {
  public:
    int f(int x) { return 2 / x; }
    Hiperbola() {
      name = "Hiperbola";
    }
};
class Parabola : public Function {
  public:
    int f(int x) { return x * x; }
    Parabola() {
      name = "Parabola";
    }
};

int main() {
  // input:
  int x;
  Ellipse func1;
  Hiperbola func2;
  Parabola func3;
  Function func4;
  Function* funcs[4] = { &func1, &func2, &func3, &func4 };
  printf("input y: ");
  scanf("%i", &x);
  // output:
  printf("results:\n");
  for (int i = 0; i < 4; i++) {
    printf("%i. %s\tresult y=f(%i): %i\n", i + 1, funcs[i]->getName().c_str(), x, funcs[i]->f(x));
  }
}
