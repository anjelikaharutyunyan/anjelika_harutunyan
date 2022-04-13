#ifndef Homo_Sapience_h
#define Homo_Sapience_h
#include "human.h"

enum Religion {
Christianity,Islam
};						        

enum Nationality{
Armenian,Greek,Russian
};

class HomoSapience : Human {
private: 
	Nationality _nationality;
	Religion _religion;
public:
	void Work() override;

	Religion getReligion();
	void setReligion(Religion);
	Nationality  getNationality();
	void setNationality(Nationality);

};


#endif
