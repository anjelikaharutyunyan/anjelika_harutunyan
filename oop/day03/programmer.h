using namespace std;
#ifndef PROGRAMMER
#define PROGRAMMER

#include "employee.h"
#include "enums.h"

enum Company{
Instigate, Synergy, CapitalSoft, Microsoft
};
enum ProgrammingLanguage{
JavaScript, Assebler, Cpp, Python
};
enum Level{
Learner,Junior,Middle,Senior
};
enum Specialist{
ComputerSystemAnalyst, DatabaseAdministrator, SecurityAnalyst, HardwareEngineer, SoftwareDeveloper, WebDesigner
};
class Programmer:Employee {
private:
    ProgrammingLanguage  _programmingLanguage;
    Company _company;
    Level _level;
    Specialist _specialist;
public:
       Programmer(const Employee& employee, ProgrammingLanguage, Company, Level, Specialist); 
    String WriteCode(string code){
    return code;
}
    void TestCode();
    void CorrectCodeErrors();
};

#endif

