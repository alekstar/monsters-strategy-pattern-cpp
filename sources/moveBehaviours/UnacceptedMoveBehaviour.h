#ifndef UNACCEPTEDMOVEBEHAVIOUR_H
#define	UNACCEPTEDMOVEBEHAVIOUR_H

#include "MoveBehavior.h"
#include <iostream>

namespace MoveBehaviours
{
    class UnacceptedMoveBehaviour : public MoveBehavior
    {
    public:
        void move() const
        {
            std::cout << "I can't move!" << std::endl;
        }
    };
}

#endif	/* UNACCEPTEDMOVEBEHAVIOUR_H */

