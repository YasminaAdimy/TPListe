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
    
  //Getter
    int nb_elts();
  
    
  //Method insert
    void Insert(int indice, Vector v);
    
  //Methode pop back
    void PopBack();
    void PushBack(Vector v);  
    
    
  //Detructor
    ~List();
    
};
