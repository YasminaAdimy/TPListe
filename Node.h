#include "Vector.h"


#ifndef NODE_H
#define NODE_H
class Node{
  protected : 
    Node* next_;//adresse de l'objet suivant
    Vector* v_;//objet contenu dans la liste
  
  public: 
  //Getter
    Node* next();
    Vector* v();
  //Setter
    void set_next(Node* next);
    void set_vector(Vector& v);
  //Constructor
    Node(Vector v);
    Node() = delete;
    Node(Node& obj) = delete;
  //Detructor
    ~Node();
};

#endif
