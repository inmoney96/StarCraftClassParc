#include "unit.h"

void UNIT::Attack(UNIT& _target)
{
	cout << _target.name << "을 공격!" << this->atk << "의 데미지!" << endl;
	_target.Sethp(_target.hp - 5);
	if (_target.hp <= 0) {
		_target.Death();
	}
}

void UNIT::Move()
{
	cout << "이동 중" << endl;
}

void UNIT::Death()
{
	if (this->hp <= 0) {
		cout << "꾸와악";
		delete this;
	}
}
