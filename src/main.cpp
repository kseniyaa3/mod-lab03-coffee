#include <iostream>
#include "Automata.h"

int main()
{
    Automata automat;
    automat.on();
    automat.coin(40);
    automat.choice(2);
    automat.cook();
    automat.cancel();
    automat.coin(40);
    automat.choice(2);
    automat.cook();
    automat.finish();
    float cash = automat.off();
    return 0;
}