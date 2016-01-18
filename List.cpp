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
  Node* n1= new Node(v);
  head_=n1;
  nb_elts_=1;
}




//destructeur
List::~List(){
  delete head_;
};

//Getter
int List::nb_elts(){
  return nb_elts_;
};


//methode insert
void List::Insert(int indice, Vector v){
  Node* el= new Node(v);
  Node* cur=head_;
  int i=0;
  while (i<indice || (*cur).next()!= nullptr){
    cur=(*cur).next();
    i++;
  }
  Node* nextnext=(*cur).next();
  (*cur).set_next(el);
  (*el).set_next(nextnext);
  nb_elts_++;
}

//methode pull back 
void List::PopBack(){
  Node* cur=head_;
  Node* prev=new Node();
  while ((*cur).next()!= nullptr){
    prev=cur;
    cur=(*cur).next();
  }
  (*cur).set_next(prev);
  nb_elts_--;
}

//methode push back 
void List::PushBack(Vector v){
  Node* el=new Node(v);
  Node* cur=head_;
  while ((*cur).next()!= nullptr){
    cur=(*cur).next();
  }
  (*cur).set_next(el);
  nb_elts_++;
}


