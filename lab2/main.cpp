//
//  main.cpp
//  lab2
//
//  Created by Żaneta Larwa on 31.10.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "Pies.hpp"
#include "Zwierze.hpp"
#include "Stado.hpp"
#include "Kot.hpp"
#include "Kaczka.hpp"

int main(int argc, const char * argv[])
{
    Stado stado=Stado(5);
    Stado stado2=Stado(5);
    stado + Pies();
    stado + Kot();
    stado + Kaczka();
    stado.daj_glos();
    stado2 + Kot();
    stado2 + Kaczka();
    stado2 + Kot();
    stado2.daj_glos();
    stado + stado2;
    stado.daj_glos();
    stado +stado;
    stado.daj_glos();
    return 0;
}
