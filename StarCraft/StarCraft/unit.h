#pragma once

#include <iostream>
#include <string>

using namespace std;

class UNIT {
protected:
	string name;
	int hp;
	int atk;
public:
	UNIT() {}
	UNIT(const char* _name, int _hp, int _atk) :name(_name), hp(_hp), atk(_atk) {}

	string Getname() { return name; }
	int Gethp() { return hp; }
	int Getatk() { return atk; }

	void Sethp(int _cHp) { hp = _cHp; }

	void Attack(UNIT&);
	void Move();
	void Death();
};

class MARINE : public UNIT {
public:
	MARINE(const char* _name) :UNIT(_name, 50, 5) {}
};

class ZERGLING : public UNIT {
public:
	ZERGLING(const char* _name) :UNIT(_name, 35, 5) {}
};