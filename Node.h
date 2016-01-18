#include "Vector.h"


#ifndef NODE_H
#define NODE_H
class Node{
  protected : 
    Node* next_;//adresse de l'objet suivant
    Node* prev_; //pointeur sur noeud précédent
    Vector* v_;//objet contenu dans la liste
  
  public: 
  //Getter
    Node* next();
    Node* prev();
    Vector* v();
  //Setter
    void set_next(Node* next);
    void set_prev(Node* prev);
    void set_vector(Vector& v);
  //Constructor
    Node(Vector v);
    Node();
    Node(Node& obj) = delete;
  //Detructor
    ~Node();
};

#endif
