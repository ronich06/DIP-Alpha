//
// Created by brian on 20/3/2021.
//

#ifndef EJEMPLO_DIP2_JOHNSON_H
#define EJEMPLO_DIP2_JOHNSON_H


#include "iostream"
#include "IVaccination.h"


using namespace std;

class Johnson : public IVaccination
{
public:
    string vaccineProcess() override;
};




#endif //EJEMPLO_DIP2_JOHNSON_H
