#ifndef BEE_H
#define	BEE_H
#include "Monster.h"
#include "Poison.h"
#include "Fly.h"

namespace Monsters
{
    class Bee : public Monster
    {
    public:
        Bee()
        {
            setMoveBehaviour(std::shared_ptr<MoveBehavior>(new Fly()));
            setAbility(std::shared_ptr<Ability>(new Poison()));
        }
        
        void display() const
        {
            std::cout << "I'm bee!" << std::endl;
        }
    };
}

#endif	/* BEE_H */

