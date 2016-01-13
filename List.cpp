#include "Node.h"
#include "Vector.h"
#include "List.h"
#include <cstdio>


//constructor par defaut
List:: List(){
  head_=nullptr;
  nb_elts_=0;
}


//constructeur par valeur
List::List(Vector v){
  Vector* v_= new Vector(v);
  Node n1(v);
  head_=&n1;
  nb_elts_=1;
}




//destructeur
List::~List(){
};

//Getter
int List::nb_elts(){
  return nb_elts_;
};

/*

//methode insert
void List::Insert(int indice, Vector v){
  Vector* v_= new Vector(v);
  Node* cur= head_;
  for (i=0 ;i<indice; i++){
    cur=cur.next();
  }
  Node* nextnext=cur.next();
  cur.set_next(el);
  el.set_next(nextnext);
  nb_elts_++;
}

*/
