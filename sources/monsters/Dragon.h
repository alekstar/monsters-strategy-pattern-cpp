#ifndef DRAGON_H
#define	DRAGON_H
#include "Monster.h"
#include "../abilities/Fire.h"
#include "../moveBehaviours/Fly.h"
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
        
        void display()
        {
            std::cout << "I'm a dragon!" << std::endl;
        }
    };
}

#endif	/* DRAGON_H */

