#include <stdio.h>
#include <string>
#include <vector>

int math(std::string regexp) {
  std::vector<std::string> stack, substack;
  int is_open = 0;
  for (int i = 0; i < regexp.length(); i++) {
    std::string ch(1, regexp[i]);
    if (ch == "(") {
      substack.push_back(ch);
      is_open++;
    } else if (ch == ")") {
      std::string temp;
      while(!substack.empty()) {
        if (substack.back() == "(") {
          is_open--;
          substack.pop_back();
          break;
        }
        stack.push_back(substack.back());
        substack.pop_back();
      }
    } else if (ch == "+" || ch == "-") {
      if (!substack.empty() && substack.back() != "(") {
        stack.push_back(substack.back());
        substack.pop_back();
      }
      substack.push_back(ch);
    } else if (ch == "*" || ch == "/") {
      substack.push_back(ch);
    } else if (ch >= "0" && ch <= "9") {
      std::string numb = ch;
      while(regexp[i + 1] >= '0' && regexp[i + 1] <= '9') {
        numb += regexp[i + 1];
        i++;
      }
      stack.push_back(numb);
    } else {
      throw std::overflow_error("incorrect number!");
    }
  }
  if (is_open > 0) throw std::overflow_error("bracket is not closed!");
  while(!substack.empty()) {
    stack.push_back(substack.back());
    substack.pop_back();
  }
  for (int i = 0; i < stack.size(); i++) {
    if (stack[i] == "+" || stack[i] == "-" || stack[i] == "/" || stack[i] == "*") {
      int var1 = std::stoi(stack[i - 2]), var2 = std::stoi(stack[i - 1]);
      if (stack[i] == "+") var1 += var2;
      if (stack[i] == "-") var1 -= var2;
      if (stack[i] == "*") var1 *= var2;
      if (stack[i] == "/") {
        throw std::overflow_error("divide by zero exception!");
        var1 /= var2;
      }
      stack.erase(stack.begin() + (i - 2), stack.begin() + i + 1);
      stack.insert(stack.begin(), std::to_string(var1));
      i = 0;
    }
  }
  return std::stoi(stack.back());
}

int main() {
  try {
    char reg[20];
    printf("enter example: ");
    scanf("%s", reg);
    int result = math(reg);
    printf("result: %i", result);
  }
  catch(std::exception &e) {
    printf("Error!\nMessage: %s", e.what());
  }
}
