#include "Soldier.h"

Soldier::Soldier(std::string name)
{
    this->_name    = name;
    this->_ptr_gun = nullptr;
}

void Soldier::addGun(Gun *ptr_gun) { this->_ptr_gun = ptr_gun; }

void Soldier::addBulletToGun(int num) { this->_ptr_gun->addBullet(num); }

bool Soldier::fire() { return this->_ptr_gun->shoot(); }

Soldier::~Soldier()
{
    if (nullptr == this->_ptr_gun)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}