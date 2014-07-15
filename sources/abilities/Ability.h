#ifndef ABILITY_H
#define	ABILITY_H

namespace Abilities
{
    class Ability
    {
    public:
        virtual void use() const = 0;
        virtual ~Ability()
        {
        }
    };
}

#endif	/* ABILITY_H */

