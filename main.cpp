#include "Lista.hpp"
#include <iostream>

int main(){
    Lista* Doc = new Lista();
    Atributo* am = new Atributo("Body","chaep");
    Doc->insertar(am);
    printf("%s",Doc->getfirst()->getKey());
}
