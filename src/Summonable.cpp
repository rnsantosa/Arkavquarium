#include <iostream>
#include "Point.hpp"
#include "Summonable.hpp"
#include "Matrix.hpp"
#include <time.h>
#include <cstdlib>

using namespace std;

const double Summonable::PI = 3.14159265;

/*Sekawan*/
Summonable::Summonable(int _s, Point _p) : position(_p) {
    //menerima id, jenis, speed, dan lokasi spawn
    speed = _s;
    direction = rand() % 360;         
}

/*Destructor*/
Summonable::~Summonable(){}

/*Getter*/
Point Summonable::getPosition() const{
    return position;
}

int Summonable::getDirection() const{
    return direction;
}
        
int Summonable::getSpeed() const{
    return speed;
}
        
/*Setter*/
void Summonable::setPosition(const Point& p){
    position = p;
}

void Summonable::setDirection(int direction){
    this->direction = direction;
}
    