#ifndef DICE_H
#define DICE_H

#include <QVector>
#include <ctime>
#include <cstdlib>
#include <QObject>
#include "dice_global.h"

class DICESHARED_EXPORT Dice
{
    Q_GADGET

public:
    enum StandardDice {Two = 2, Four = 4, Six = 6, Eight = 8, Ten = 10, Twelve = 12,
               Twenty = 20, Cent = 100};

    Q_ENUM(StandardDice)

private:
    int alea(int) const;
    int roll(int, int = 1) const;

public:
    Dice();
    Q_INVOKABLE QVector<int> roll(int, int, int) const;
    Q_INVOKABLE bool isStandard(int) const;

};

#endif // DICE_H
