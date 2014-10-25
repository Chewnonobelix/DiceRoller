#include "dice.h"


Dice::Dice()
{
    srand(time(NULL));
}

int Dice::roll(dice d, int n)
{
    int janus = 0;
    for(int mars = 0; mars < n; mars++)
    {
        janus += alea(d);
    }
    return janus;
}

QVector<int> Dice::roll(dice d, int n, int p)
{
    QVector<int> janus;
    for(int mars = 0; mars < n; mars++)
    {
        int venus = 0;
        for(int mercure = 0; mercure < p; mercure ++)
        {
            venus += alea(d);
        }
        janus<<venus;
    }

    return janus;
}

int Dice::alea(int type)
{
    return (rand()%(type)) + 1;
}

bool Dice::isEnum(int n)
{
    if(n == deux || n == quatre || n == six
            || n == huit || n == dix || n == douze
            || n == vingt || n == cent)
    {
        return true;
    }
    else
    {
        return false;
    }
}
