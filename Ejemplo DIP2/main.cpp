#include <iostream>
#include "PfizerBioNTech.h"
#include "Moderna.h"
#include "Johnson.h"
#include "Hospital.h"

int main() {
    //
    Hospital* hospital= new Hospital("San Juan de Dios");
    Moderna* _vacunaModerna;
    Johnson* _vacunaJohnsons;
    PfizerBioNTech* _vacunaPfizer;


   string t= hospital->vaccinate(_vacunaModerna);

    cout<<"Holadvdsvdfsfsdfwdfdfdwfddfgefgs";

    return 0;
}
