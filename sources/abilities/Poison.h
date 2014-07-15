#ifndef POISON_H
#define	POISON_H
#include "Ability.h"

namespace Abilities
{
    class Poison : public Ability
    {
    public:
        void use()
        {
            std::cout << "I can poison enemies!" << std::endl;
        }
    };
}

#endif	/* POISON_H */

