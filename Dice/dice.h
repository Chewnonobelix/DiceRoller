#ifndef DICE_H
#define DICE_H

#include <QVector>
#include <ctime>
#include <cstdlib>

#include "dice_global.h"

class DICESHARED_EXPORT Dice
{
public:
    enum dice {deux = 2, quatre = 4, six = 6, huit = 8, dix = 10, douze = 12,
               vingt = 20, cent = 100};

private:
    int alea(int);

public:
    Dice();
    int roll(dice, int = 1);
    QVector<int> roll(dice, int, int);
    bool isEnum(int);

};

#endif // DICE_H
