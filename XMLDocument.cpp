#include "XMLDocument.hpp"

XMLDocument::XMLDocument(){
    ptree = new tree();
}

int XMLDocument::Root (char *name){
    int id = ptree->getUtility()->generaID();
    treenode *nuevo = new treenode(name,id,false);
    if(ptree->getRoot() == nullptr){
        ptree->insertRoot(nuevo);
        return 0;
    }else{
        return -1;
    }
}

bool XMLDocument:: Select (int id){

}