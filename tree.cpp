#include <iostream>

#include "tree.hpp"

tree::tree (bool select) {
    root = nullptr;
    seleccionado = nullptr;
    utility = new Utilitarios();
    if (select)
        autoseleccion = true;
    else autoseleccion = false;
}

tree::tree () {
    root = nullptr;
    seleccionado = nullptr;
    utility = new Utilitarios();
    autoseleccion = false;
}



int tree::insertRoot (treenode* node) {
    seleccionado = node;
    if (root == nullptr) {
        root = node;
        return node->getId();
    } else {
        return -1;
    }
}

treenode* tree:: Search(int pid){
    treenode* res = nullptr;
    treenode* temp = root;
    SearchPlus(temp,pid);
    return seleccionado;
}

void tree::SearchPlus(treenode* nodo, int pid){
    if (nodo->getId() == pid){
        seleccionado = nodo;
    }else{
        if(nodo->getSon() !=nullptr){
            SearchPlus(nodo->getSon(),pid);
            if(nodo->getBrother() != nullptr){
                SearchPlus(nodo->getBrother(),pid);
            }
        }   
    }
}

/*
treenode *tree::search (int name) {
    treenode *t = root;
    while (t != nullptr) {
        if (t->getId () > name)
            t = t->getLeft ();
        else if (t->getId () < name)
            t = t->getRight ();
        else break;
    }
    return t;
}

treenode *tree::remove (int name) {
    return nullptr;
}

void tree::prefix () {
    prefix (root, 0);
}

void tree::prefix (treenode *node, int level) {
    if (node == nullptr)
        return;
    
    for (int i = 0; i < level; i++)
        std::cout << '|';
    node->print ();

    prefix (node->getRight (), level+1);
    prefix (node->getLeft (), level+1);
}

void tree::infix () {
    infix (root, 0);
}

void tree::infix (treenode *node, int level) {
    if (node == nullptr)
        return;

    infix (node->getLeft (), level+1);
    
    for (int i = 0; i < level; i++)
        std::cout << '|';
    node->print ();

    infix (node->getRight (), level+1);
}

void tree::suffix () {
    suffix (root, 0);
}

void tree::suffix (treenode *node, int level) {
    if (node == nullptr)
        return;

    suffix (node->getRight (), level+1);
    suffix (node->getLeft (), level+1);
    
    for (int i = 0; i < level; i++)
        std::cout << '|';
    node->print ();
}

treenode * tree::getSeleccionado(){
    return seleccionado;
}
*/

