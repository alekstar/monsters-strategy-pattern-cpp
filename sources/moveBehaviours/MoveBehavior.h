#ifndef MOVEBEHAVIOR_H
#define	MOVEBEHAVIOR_H
namespace MoveBehaviours
{
    class MoveBehavior
    {
    public:
        virtual void move() = 0;
        virtual ~MoveBehavior()
        {
        }
    };
}

#endif	/* MOVEBEHAVIOR_H */

