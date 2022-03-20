//
// Created by Paul on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_PAPA_H
#define LAB01_INHERITANCE_PAPA_H
#include <iostream>
using namespace std;

class Papa {

public:
    Papa(std::string nombre);

    virtual string getNombre();

    virtual void setNombre(string nombre);

protected:
    string nombre;

};


#endif //LAB01_INHERITANCE_PAPA_H
