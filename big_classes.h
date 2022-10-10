#pragma once
#include <iostream>
#include "colors.h"
using namespace std;
class Object{
    public:

    int id;
};

class Hardware: public Object{
    public:

    int condition=100;
    int RepairTime=0;

    void state(){
       if (condition > 70){
        green();
        cout << "The component is good condition\n";
       }
       else if(condition > 45){
        yellow();
        cout << "The component is in need of repairs\n";
       }
       else if(condition > 9){
        red();
        cout << "The component has been severely affected\n";
       }
       else{
        red();
        cout << "The component was destroyed\n";
       }
    }
};

class Humans: public Object{
    public:

    int skill;
    int numbers;
    int hapiness=100;
    int health=100;
    int HealingTime=0;
    int BusyStatus=0;
    string name;

    void being(){
        if(numbers<=0){
            red();
            cout << "the unit have all perished!\n";
        }
        if(health<25){
            red();
            cout << "the unit cannot work due to poor health\n";
        }

        if(hapiness<20){
            red();
            cout << "the unit have gone on strike\n";
        }
    }
};

class OuterStuff: public Object{
    public:

    int distance;
};
