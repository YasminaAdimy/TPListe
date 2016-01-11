
#ifndef VECTOR_H
#define VECTOR_H

class Vector{
  protected:
    float x_;
    float y_;
   
  public:
    //Getters
    float x();
    float y();
    float norm();
    
    //method add
    void add(Vector v);
    
    //Constructor
    Vector();
    Vector(float x, float y);
    
    //destructor
    // ssoit on fait ca ~Vector()=default; soit:
    ~Vector();
};

#endif
    
