#ifndef Programmer_h
#define Programmer_h
#include "homosapience.h"

enum Workplace{
	Instigate,Synergy,Amazon
};
enum Level{
	Learner,Junior,Middle,Senior
};
enum Code{
	True,False,Done,Dontdone
};
enum Language{
	JS, J, Python
};

class Programmer : HomoSapience{
private : 
	Workplace _workplace;
	Language = _language;
	Level = _level;
	unsigned int sallary;
public:
        bool TestCode();        
        void WriteCode();
        void Smoke();
        void Angry();
        void Happy();        
        void Tired();	
};

void work() override;
void Programmer :: setWorkplace(Workplace workplace){
if(Workplace == Instigate || Workplace == Amazon || Woorkplace == Synergy){
_workplace = Workplace;
}
}  
Workplace Programmer :: getWorkplace(){
return _Workplace;
}
#endif
