//
// Created by Roni on 3/20/2021.
//

#ifndef EJEMPLO_DIP2_PFIZERBIONTECH_H
#define EJEMPLO_DIP2_PFIZERBIONTECH_H
#include "iostream"
#include "IVaccination.h"

using namespace std;

class PfizerBioNTech : public IVacciantion
         {
         public:
            string vaccineProcess() override;
};


#endif //EJEMPLO_DIP2_PFIZERBIONTECH_H
