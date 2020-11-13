#ifndef TREENODE_HPP
#define TREENODE_HPP

#include "Lista.hpp"

class treenode {
private:
    
    treenode* father;
    treenode* brother;
    char* name;
    char* content;
    bool balanced;
    int id;
    Lista* listNodes;

public:
    treenode (char*,int,bool);
    treenode (char*,int,bool,char*); //nodo con contenido
    void setId(int);
    void setContent(char*);
    void setBalanced(bool);
    void setBro(treenode*);
    void setFather(treenode*);
    char* getContent(){return content;};
    char* getName (){return name;};
    treenode* getBrother(){return brother;};
    treenode* getFather(){return father;};
    int getId(){return id;};
    Lista* getList(){return listNodes;};
    void print ();
};

#endif