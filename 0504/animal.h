#pragma once
#include <iostream>
using namespace std;
//абстрактный базовый класс
class animal
{
public:
	char title[20];//кличка животного
	animal(const char* t) {
		strcpy_s(title, t);
	}
	virtual void Speak() = 0; //чисто виртульаня вункция


};
class frog : public animal {
public:
	frog(const char* t) : animal(t) {

	}
	virtual void Speak() {
		cout << title << " " << " say : Kva\n";
	}
		
};
class dog : public animal {
public:
	dog(const char* t) : animal(t) {

	}
	virtual void Speak() {
		cout << title << " " << " say : gav\n";
	}

};
class Cat : public animal {
public:
	Cat(const char* t) : animal(t) {

	}
	virtual void Speak() {
		cout << title << " " << " say : meow\n";
	}

};

