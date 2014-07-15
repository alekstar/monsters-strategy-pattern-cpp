#ifndef FLY_H
#define	FLY_H
#include "MoveBehavior.h"
#include <iostream>

namespace MoveBehaviours
{
    class Fly : public MoveBehavior
    {
    public:
        void move() const
        {
            std::cout << "I'm flying!" << std::endl;
        }
    };
}

#endif	/* FLY_H */

