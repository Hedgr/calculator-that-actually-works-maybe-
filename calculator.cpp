#include <iostream>
#include <string>
#include <regex>

using namespace std;

string version = "0.1";

class calculator_c {
    float x = 0;
    float y = 0;
    float answer = 0;
    
    bool is_number(const string& str);
    sting operator_s = "";
    int operator_i = 0;
    
    void get_op();
    void deciper_op();
    
    int basic_4();
};

bool calculator_c::isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void calculator_c::get_op() {
    do {
        cout << "\nplease input the operation you want to do (+,-,*,/, etc.)\n";
        cin >> operator_s;
    } while(operator_s == "+" || operator_s == "-" || operator_s == "*" || operator_s == "/")
    do {
        cout << "\nplease input a number to be the first number\n"
        cin >> x;
    } while(isNumber() == true)
    do {
        cout << "\nplease input another number\n"
        cin >> y;
    } while(isNumber() == true)
}

void calculator_c::deciper_op() {
    if(operator_s == "+") {
        operator_i == 1;
    }
    if(operator_s == "-") {
        operator_i == 2;
    }
    if(operator_s == "*") {
        operator_i == 3;
    }
    if(operator_s == "/") {
        operator_i == 4;
    }
    
    
    if(operator_i == 1, 2, 3, 4) {
        basic_4();
    }
 }

int calculator_c::basic_4() {
    if(operator_i == 1) {
        answer = (x + y);
    }
    if(operator_i == 2) {
        answer = (x - y);
    }
    if(operator_i == 3) {
        answer = (x * y);
    }
    if(operator_i == 4) {
        answer = (x / y);
    }
    
    return answer;
}

calculator_c calculator;

int main() {
    do {
    cout << "version: " << version;
    calculator.get_op();
    calculator.deciper_op();
    cout << "\n\nthe answer is: " << answer << "\n";
    } while(true)
}
