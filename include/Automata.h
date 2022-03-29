#pragma once
#include <iostream>

enum STATE { 
	OFF, WAIT, ACCEPT, CHECK, COOK 
};

class Automata {
private:
    float cash;
    std::string menu[3];
    float prices[3];
    STATE state;
    int drink;

public:
    Automata();
    void on();
    float off();
    void coin(float money);
    void getMenu();
    STATE getState();
    void choice(int d);
    bool check();
    void cook();
    void finish();
    void cancel();
};
