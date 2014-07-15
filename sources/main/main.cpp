#include "Monster.h"
#include "Dragon.h"
#include "Spider.h"
#include <vector>
#include <memory>

using namespace Monsters;

int main() 
{
    std::vector<std::shared_ptr<Monster>> monsters;
    monsters.push_back( std::shared_ptr<Monster>(new Dragon()));
    monsters.push_back( std::shared_ptr<Monster>(new Spider()));
    for(std::vector<std::shared_ptr<Monster>>::iterator i = monsters.begin(); 
        i != monsters.end(); 
        ++i)
    {
        (*i)->display();
        (*i)->move();
        (*i)->useAbility();
        std::cout << std::endl;
    }
    return 0;
}

