#include "dice.h"


Dice::Dice()
{
    srand(time(NULL));
}

int Dice::roll(int d, int n) const
{
    int ret = 0;
    for(int i = 0; i < n; i++)
        ret += alea(d);

    return ret;
}

QVector<int> Dice::roll(int d, int p, int n) const
{
    QVector<int> ret;
    for(int i = 0; i < n; i++)
    {
        int k = 0;
        for(int j = 0; j < p; j ++)
            k += alea(d);

        ret<<k;
    }

    return ret;
}

int Dice::alea(int type) const
{
    return (rand()%(type)) + 1;
}

bool Dice::isStandard(int n) const
{
    switch (n)
    {
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
    case 20:
    case 100:
        return true;
    default:
        return false;
    }
}
