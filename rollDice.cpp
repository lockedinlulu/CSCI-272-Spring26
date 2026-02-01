#include <cstdlib>
#include <ctime>
#include <iostream>
#include "rollDice.h"

int rollDice() {
    return (rand() % 6) + 1;
    srand(time(0));
}