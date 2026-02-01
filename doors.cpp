#include "doors.h"
#include <cstdlib>
#include <ctime>

int getCorrectDoor(int nextDoorNumber);
{srand(10);

    return (nextDoorNumber % 2 == 1) ? 1 : 2;
}

