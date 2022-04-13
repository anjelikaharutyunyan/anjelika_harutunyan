#include "./human.h"
#include "./date.h"
void Human :: Eat(Food food){
	if((food == Orange || food == Yogurt || food == Banana) && _healthlevel < 100){
	_healthlevel++;	
	}
}
void Human :: Drink(Liquid liquid){
	if((liquid == Juice || liquid == Tea || liquid == Coffee) && _healthlevel < 100){
	_healthlevel++;
}
	if((liquid == Alcohol) && _healthlevel < 100){
	_healthlevel -= 3;
}
}
void Human :: Walk(){
	if(_healthlevel < 100){
	_healthlevel++;
	}
	_weight--;
}

