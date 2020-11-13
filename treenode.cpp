#include <iostream>

#include "treenode.hpp"

treenode::treenode (char* name, int id, bool balanced, char* content) {
    this->name = name;
    this->id = id;
    this->balanced = balanced;
    this->content = content;
    listNodes = new Lista();
}

treenode::treenode (char* name, int id, bool balanced) {
    this->name = name;
    this->id = id;
    this->balanced = balanced;
    listNodes = new Lista();
}

void treenode::setId(int id){
    this->id = id;
}

void treenode::setContent(char* content){
    this->content = content;
}

void treenode::setBalanced(bool balanced){
    this->balanced = balanced;
}

void treenode::setBro(treenode* brother){
    this->brother = brother;
}
void treenode::setFather(treenode* father){
    this->father = father;
}

char* treenode::getName () {
    return name;
}

int treenode::getId(){
    return id;
}

treenode* treenode:: getBrother(){
    return brother;
}

treenode* treenode:: getFather(){
    return father;
}

void treenode::print () {
    std::cout << "[" << this << "]:" << name << std::endl;
}