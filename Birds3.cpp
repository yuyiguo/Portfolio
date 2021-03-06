////////////////////////////////////////////////////////////////////////////////
//
// Birds3.cpp
//
// Class Inheritance Project
////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h" // including "Bird.pch" actually which was generated by stdafx.h
#include <iostream>
#include <string>
using namespace std;

class Bird
{
protected:
	Bird() { std::cout << "call Bird()\n "; }
	Bird(const string& val) : name(val) { std::cout << "call Bird(name)\n "; }
	string name;
	
public:
	const string& getName() { return name; }
	virtual bool canFly() = 0;
	virtual bool canSwim() = 0;
	virtual bool canWalk() = 0;

	

};

class FlyingBirds :virtual public Bird
{
protected:
	FlyingBirds() {}
public:
	bool canFly() { return true; }
};

class SwimmingBirds :virtual public Bird
{
protected:
	SwimmingBirds() {}
public:
	bool canSwim() { return true; }
};

class WalkingBirds : virtual public Bird
{
protected:
	WalkingBirds() {}
public:
	bool canWalk() { return true; }
};

class Sparrow: virtual public WalkingBirds, virtual public FlyingBirds  
{
public:
	Sparrow() : Bird("Sparrow") {}
	bool canSwim() { return false; }
};

class Chicken: public WalkingBirds
{
public:
	Chicken() : Bird("Chicken"){};
};

class Duck: public WalkingBirds, public SwimmingBirds
{
public:
	Duck() : Bird("Duck"){};
	bool canFly() { return false; }
};

class Goose: public WalkingBirds, public FlyingBirds, public SwimmingBirds
{
public:
	Goose() : Bird("Goose") {};
};

class Penguin: public WalkingBirds, public SwimmingBirds
{
public:
	Penguin() : Bird("Penguin") {};
};

int main()
{
	Sparrow sparrow;  
	
	cout<<sparrow.getName()<<"\n";
	bool result = sparrow.canFly();
	if (result)
		cout << "can fly \n";
	else
		cout << "cannot fly \n";
	result = sparrow.canSwim();
	if (result)
		cout << "can swim \n";
	else
		cout << "cannot swim \n";
	result = sparrow.canWalk();
	if (result)
		cout << "can walk \n";
	else
		cout << "cannot walk \n";

	cout << "\n";
	Duck duck;
	cout << duck.getName() << "\n";
	result = duck.canFly();
	if (result)
		cout << "can fly \n";
	else
		cout << "cannot fly \n";
	result = duck.canSwim();
	if (result)
		cout << "can swim \n";
	else
		cout << "cannot swim \n";
	result = duck.canWalk();
	if (result)
		cout << "can walk \n";
	else
		cout << "cannot walk \n";
	//Chicken chicken;
	//Duck    duckie;
	//Goose   goose;
	//Penguin penguin;
	getchar();
	return 0;
}

