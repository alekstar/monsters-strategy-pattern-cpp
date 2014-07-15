#ifndef NET_H
#define	NET_H
#include "Ability.h"
namespace Abilities
{
    class Net : public Ability
    {
    public:
        void use()
        {
            std::cout << "I'll catch everithing with net!" << std::endl;
        }
    };
}
#endif	/* NET_H */

