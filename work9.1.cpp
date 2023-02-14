#include <stdio.h>
#include <iostream>
#define time 12

using namespace std;

float getProcent(float x, float proc) { return x * .01 * proc; }
void getData(float range, float proc, int end) {
  float pay = (range + getProcent(range, proc)) / time;
  printf("month\tpay\t\tresult\t\tprocent\n");
  float proc_sum = 0, pay_sum = 0;
  for (int i = 0; i < end; i++) {
    float nproc, npay = pay;
    if (i != end - 1) {
      nproc = getProcent((range + getProcent(range, proc)) / time, proc);
      range -= pay;
      pay_sum += pay + nproc;
      proc_sum += nproc;
    } else {
      nproc = getProcent((range + getProcent(range, proc)) / time, proc);
      pay_sum += range + nproc;
      proc_sum += nproc;
      npay = range;
      range -= range;
    }
    printf("%i\t%f\t%f\t%f\n", i + 1, npay, range, nproc);
  }
  printf("------------------\n\t%f\t\t\t%f\n", pay_sum, proc_sum);
}
int main() {
  try {
    // input:
    int start, end;
    float proc;
    printf("enter start sum: ");
    scanf("%i", &start);
    printf("enter end sum: ");
    scanf("%i", &end);
    printf("enter procent: ");
    scanf("%f", &proc);
    
    // output:
    if (proc < 0 || start < 0 || end < start) throw std::overflow_error("input data is not correct!");    
    float range = end - start;
    if (range > 0) {
      getData(range, proc, time);
      int month;
      printf("finish credit int month(2-%i): ", time);
      scanf("%i", &month);
      if (month < 2 || month > time) throw std::overflow_error("month < 2 or month > 12");
      printf("\nfinish credit int %i month matrix:\n", month);
      getData(range, proc, month);
    } else throw std::overflow_error("delta <= 0");
  }
  catch(std::overflow_error &err) { // error messages:
    printf("Error!\nMsg: %s\n", err.what());
  }
  return 0;
}
