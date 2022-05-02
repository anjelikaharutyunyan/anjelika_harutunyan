#include <iostream>
#include "programmer.h"

using namespace std;
        Programmer::Programmer(const Employee& employee, string favProgrammingLanguage, string company)
        :Employee(employee)
{

        _ProgrammingLanguage = ProgrammingLanguage;
    _company = company;
}

void Employee::Work() override {
    _freeFromWork = false;
    int time = 0;
    while (time <= _workTime) {
        if (time == _workTime / 2) {
                BreakTime();
            ++time;
            continue;
        }
        ++time;
        EndWork();
    }
}
void  TestCode(){
    if(code){
     _mental_level++;
         Joy();
    }
     else{
      Smoke();
      Drink(coffee);
      GetAngry();
      _hungerDegree++;
      CorrectCodeErrors();
      }
  }


