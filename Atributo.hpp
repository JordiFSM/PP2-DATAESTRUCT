#ifndef ATRIBUTO_HPP
#define ATRIBUTO_HPP

class Atributo{
    private:
        char* key;
        char* value;
        Atributo* brother;

    public:

    Atributo(char* key, char* value){
        this->key = key;
        this->value = value;
        brother = nullptr;
    }

    Atributo* getBro(){
        return brother;
    }    

    char* getKey(){
        return key;
    }

     char* getValue(){
        return value;
    }

    void setBro(Atributo* at){
        brother = at;
    }

    void setKey(char* key){
        this->key = key;
    }
};

#endif