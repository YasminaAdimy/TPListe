#include "Node.h"
#include "Vector.h"
#include <cstdio>

//Constructor
Node::Node(Vector v){
  v_= new Vector(v);
  next_=nullptr;
}

/*  
//constructeur par copie
Node::Node(Node& obj){
  ptr = obj.ptr;
  next = obj.next;
}
 */ 
  
//destructeur 
Node::~Node(){
  delete v_;
};
  
  //Getters
Node* Node::next(){
  return next_;
};

Vector* Node::v(){
  return v_;
};

//Setters
void Node::set_next(Node* next){
  next_=next;
}

void Node::set_vector(Vector& v){
  delete v_;
  v_ = new Vector(v);
}

