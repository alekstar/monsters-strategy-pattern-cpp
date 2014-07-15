#ifndef YETI_H
#define	YETI_H
#include "Monster.h"
#include "Walk.h"
#include "Frost.h"

namespace Monsters
{
    class Yeti : public Monster
    {
    public:
        Yeti()
        {
            setMoveBehaviour(std::shared_ptr<MoveBehavior>(new Walk()));
            setAbility(std::shared_ptr<Ability>(new Frost()));
        }
        
        void display()
        {
            std::cout << "I'm yeti!" << std::endl;
        }
    };
}

#endif	/* YETI_H */

