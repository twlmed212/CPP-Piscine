#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const& name) : name(name), floorCount(0) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
        floor[i] = NULL;
    }
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (inventory[i])
            delete inventory[i];
        if (floor[i])
            delete floor[i];
    }
}

Character::Character(const Character& other) : name(other.name), floorCount(0) {
    for (int i = 0; i < 4; i++)
        floor[i] = NULL;
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;

        for (int i = 0; i < 4; i++) {
            if (inventory[i]) {
                delete inventory[i];
                inventory[i] = NULL;
            }
        }

        for (int i = 0; i < 4; i++) {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const& Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == NULL) {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    if (inventory[idx] == NULL)
        return;
    if (floorCount < 4) {
        floor[floorCount] = inventory[idx];
        floorCount++;
    }
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3)
        return;
    if (inventory[idx] == NULL)
        return;
    inventory[idx]->use(target);
}