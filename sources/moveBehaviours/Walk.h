#ifndef WALK_H
#define	WALK_H
#include "MoveBehavior.h"

namespace MoveBehaviours
{
    class Walk : public MoveBehavior
    {
    public:
        void move()
        {
            std::cout << "I'm walking!" << std::endl;
        }
    };
}

#endif	/* WALK_H */

