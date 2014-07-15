#ifndef UNACCEPTEDABILITY_H
#define	UNACCEPTEDABILITY_H

#include "Ability.h"

namespace Abilities
{
    class UnacceptedAbility : public Ability
    {
    public:
        void use()
        {
            std::cout << "No ability was accepted for me!" << std::endl;
        }
    };
}

#endif	/* UNACCEPTEDABILITY_H */

