#include <stdio.h>
#include <string>

using namespace std;

void getInfo(string company, string model, int places) {
  printf("Info:\nCompany: %s\tModel: %s\tPlaces: %i\n", company.c_str(), model.c_str(), places);
}


class Car {
  public:
    Car() {}
    Car(string _company, string _model) {
      company = _company;
      model = _model;
      places = 1;
      getInfo(company, model, places);
    }
  protected:
    string company, model;
    int places;
};

class PassengerCar : virtual public Car {
  public:
    PassengerCar() {}
    PassengerCar(string _company, string _model) {
      company = _company;
      model = _model;
      places = 4;
      getInfo(company, model, places);
    }
};

class Bus : virtual public Car {
  public:
    Bus() {}
    Bus(string _company, string _model) {
      company = _company;
      model = _model;
      places = 8;
      getInfo(company, model, places);
    }
};

class Minivan : public PassengerCar, public Bus { 
  public:
    Minivan(string _company, string _model) {
      company = _company;
      model = _model;
      places = 6;
      getInfo(company, model, places);
    }
};

int main() {
  Car car1("A", "car1");
  PassengerCar car2("B", "car2");
  Bus car3("C", "car3");
  Minivan car4("D", "car4");
  
  return 0;
}
