#ifndef FIRE_H
#define	FIRE_H

#include "Ability.h"
#include <iostream>

namespace Abilities
{
    class Fire : public Ability
    {
    public:
        void use()
        {
            std::cout << "Burn them all!" << std::endl;
        }        
    };
}

#endif	/* FIRE_H */

