#include "./date.h"
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
enum Food{
	Banana,Yogurt,Orange
};
enum Liquid{
	Juice,Coffee,Tea,Alcohol
};
class Human{
private:
	Date _BirthDate;
	EyeColor _EyeColor;
	HairColor _HairColor;
	Gender _gender;
	int _healthlevel;
	short _weight;
public:
	char * Speak();
	void Walk();
	void Eat(Food);
	void Drink(Liquid);
	int Sleep();
};

#endif
