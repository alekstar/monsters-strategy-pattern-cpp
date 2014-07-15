#include "../monsters/Monster.h"
#include "../monsters/Dragon.h"
#include <vector>
#include <memory>

using namespace Monsters;

int main() 
{
    std::vector<std::shared_ptr<Monster>> monsters;
    monsters.push_back( std::shared_ptr<Monster>(new Dragon()));
    for(std::vector<std::shared_ptr<Monster>>::iterator i = monsters.begin(); 
        i != monsters.end(); 
        ++i)
    {
        (*i)->display();
        (*i)->move();
        (*i)->useAbility();
    }
    return 0;
}

