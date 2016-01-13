#include "Vector.h"
#include "Node.h"

class List{
  protected : 
    Node* head_;
    int nb_elts_;//objet contenu dans la liste
    
  public :
  //constructeur
    List();
    List(Vector v);
    
    
  //Method insert
    void Insert(int indice);
    
    
  //Detructor
    ~List();
    
};
