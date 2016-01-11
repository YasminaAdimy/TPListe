#include "Vector.h"
#include <math.h>

//Getters
float Vector::x(){
  return x_;
};

float Vector::y(){
  return y_;
};


//Constructeur par defaut et autre
Vector::Vector(){
  x_=0;
  y_=0;
};

Vector ::Vector(float x, float y){
  x_=x;
  y_=y;
};

//Destructeur
Vector::~Vector(){
};

//Methode add
void Vector::add(Vector v){
  x_=x_+v.x();
  y_=y_+v.y();
};

//Methode norme
float Vector::norm(){
  return sqrt(pow(x_,2)+pow(y_,2));
}
