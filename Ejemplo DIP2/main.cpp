#include <iostream>
#include "PfizerBioNTech.h"
#include "Moderna.h"
#include "Johnson.h"
#include "Hospital.h"

int main() {
    //
    Hospital* hospital= new Hospital("San Juan de Dios");
    Moderna* _vacunaModerna= new Moderna();
    Johnson* _vacunaJohnsons= new Johnson() ;
    PfizerBioNTech* _vacunaPfizer= new PfizerBioNTech();

   cout<< hospital->vaccinate(_vacunaModerna);


    return 0;
}
