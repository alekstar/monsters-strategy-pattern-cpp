#ifndef DRAGON_H
#define	DRAGON_H
#include "Monster.h"
#include "Fire.h"
#include "Fly.h"
#include <memory>

namespace Monsters
{
    class Dragon : public Monster
    {
    public:
        Dragon()
        {
            setMoveBehaviour(std::shared_ptr<MoveBehavior>(new Fly()));
            setAbility(std::shared_ptr<Ability>(new Fire()));
        }
        
        void display() const
        {
            std::cout << "I'm dragon!" << std::endl;
        }
    };
}

#endif	/* DRAGON_H */

