#ifndef MONSTER_H
#define	MONSTER_H
#include "../moveBehaviours/MoveBehavior.h"
#include "../moveBehaviours/UnacceptedMoveBehaviour.h"
#include "../abilities/Ability.h"
#include "../abilities/UnacceptedAbility.h"
#include <memory>

namespace Monsters
{
    using namespace MoveBehaviours;
    using namespace Abilities;
    class Monster
    {
    private:
        std::shared_ptr<MoveBehavior> move_behaviour_;
        std::shared_ptr<Ability> ability_;
    public:
        Monster()
            :move_behaviour_(
                std::shared_ptr<MoveBehavior>(new UnacceptedMoveBehaviour())), 
            ability_(std::shared_ptr<Ability>(new UnacceptedAbility()))
        {
        }
        
        void setMoveBehaviour(std::shared_ptr<MoveBehavior> move_behaviour)
        {
            move_behaviour_ = move_behaviour;
        }
        
        void setAbility(std::shared_ptr<Ability> ability)
        {
            ability_ = ability;
        }
        
        virtual ~Monster()
        {
        }
        
        void move() const
        {
            move_behaviour_->move();
        }
        
        virtual void display() const = 0;
        void useAbility() const
        {
            ability_->use();
        }
        
    };
}

#endif	/* MONSTER_H */

