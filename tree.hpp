#ifndef TREE_HPP
#define TREE_HPP

#include "treenode.hpp"
#include "utilitarios.hpp"


class tree {
private:
    bool autoseleccion;
    treenode *root;
    treenode *seleccionado;
    Utilitarios* utility;
    

    void prefix (treenode*,int);
    void infix (treenode*,int);
    void suffix (treenode*,int);
public:
    tree (bool select);
    tree ();

    int insertRoot(treenode*);
    //treenode *search (int);
    //treenode *remove (int);
    //treenode *getSeleccionado();
    treenode* Search(int);
    treenode* SearchPlus(treenode*,int);
    treenode*getRoot(){return root;};
    Utilitarios *getUtility(){return utility;};

    //void prefix ();
    //void infix ();
    //void suffix ();

};

#endif