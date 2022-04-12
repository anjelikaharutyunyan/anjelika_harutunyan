using namespace std;
#ifndef Human_h
#define Human_h

enum EyeColor{
	Black,blue,grey,green,brown
};
enum HairColor {
	white,ginger,black
};
enum Gender{
	Male,Female
};

class Human{
public:
	Date birth_date;
	EyeColor eye_color;
	HairColor hair_color;
	Gender gender;
	int healthLevel;
	char * Speak();
	void Walk();
	void See();
	void Breathe();
	bool Eat();
	bool Drink();
	int Sleep();

private: 
	void Think();	
};

class HomoSapience : Human {
private: 
	Address address;
	string name;
	string surname;
	Style style;
	Nationality nationality;
	void work();
	};

class Programmer : HomoSapience {
public:
	int sallary;
	bool TestCode();	
	void WriteCode();
	void Smoke();
	void GetAngry();
	void GetHappy();	
	void GetTyred();
};

#endif
