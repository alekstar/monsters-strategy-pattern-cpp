#ifndef FROST_H
#define	FROST_H
#include "Ability.h"

namespace Abilities
{
    class Frost : public Ability
    {
    public:
        void use() const
        {
            std::cout << "I can made everything to ice!" << std::endl;
        }
    };
}

#endif	/* FROST_H */

