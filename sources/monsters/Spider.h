#ifndef SPIDER_H
#define	SPIDER_H
#include "Monster.h"
#include "../abilities/Net.h"
#include "../moveBehaviours/Walk.h"
#include <memory>


namespace Monsters
{
    class Spider : public Monster
    {
    public:
        Spider()
        {
            setMoveBehaviour(std::shared_ptr<MoveBehavior>(new Walk()));
            setAbility(std::shared_ptr<Ability>(new Net()));
        }
        
        void display()
        {
            std::cout << "I'm spider!" << std::endl;
        }

    };
}

#endif	/* SPIDER_H */

