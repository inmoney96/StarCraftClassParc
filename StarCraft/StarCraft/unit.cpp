#include "unit.h"

void UNIT::Attack(UNIT& _target)
{
	cout << _target.name << "�� ����!" << this->atk << "�� ������!" << endl;
	_target.Sethp(_target.hp - 5);
	if (_target.hp <= 0) {
		_target.Death();
	}
}

void UNIT::Move()
{
	cout << "�̵� ��" << endl;
}

void UNIT::Death()
{
	if (this->hp <= 0) {
		cout << "�ٿ;�";
		delete this;
	}
}
