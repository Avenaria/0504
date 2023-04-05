#pragma once
#include <iostream>
using namespace std;
#include "animal.h"
class baza
{
	char* st1;
	int size;
public:
	baza(const char* s, int d) {
		size = d;
		st1 = new char[size];

	}
	virtual ~baza(){}

};
class Dav : public baza {
	char* sp2;
	int size2;
public:
	Dav(const char* S1, int d1, const char* S2, int s2) : baza(S1, d1) {
		size2 = s2;
		sp2 = new char[size2];
	}
	virtual ~Dav() {};

};

