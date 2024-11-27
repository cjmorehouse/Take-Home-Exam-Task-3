
#include "Die.h"
#include <cstdlib>
using namespace std;

int Die::roll() {
    return rand() % 6 + 1;
}
