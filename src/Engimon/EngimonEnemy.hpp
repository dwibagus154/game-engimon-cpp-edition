#ifndef _EngimonEnemy_hpp_
#define _EngimonEnemy_hpp_

#include "Engimon.hpp"
#include "../Position/Position.hpp"

#include <vector>

class EngimonEnemy : public Engimon
{
private:
    //int idEngimonLiar;
    Position engimonEnemyPosition;
    // static vector<EngimonEnemy> listEngimonLiar;

public:
    EngimonEnemy(const Position &p, string n, string sp, int i, const vector<Element> &el)
        : Engimon(n, sp, i, el)
    {
        this->engimonEnemyPosition = p;
        // listEngimonLiar.push_back(&this);
    }

    void moveEngimonEnemy(const Position &p)
    {
        this->engimonEnemyPosition = p;
    }

    Position getPosition()
    {
        return engimonEnemyPosition;
    }

    void print()
    {
        cout << Engimon::getName() << endl;
    }
};

#endif // _EngimonEnemy_hpp_