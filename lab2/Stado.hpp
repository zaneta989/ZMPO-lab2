//
//  Stado.hpp
//  lab2
//
//  Created by Żaneta Larwa on 31.10.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Stado_hpp
#define Stado_hpp

#include <stdio.h>
#include "Zwierze.hpp"
#include <list>

class Stado
{
    public:
        Stado(int w);
    
        Stado operator + (Zwierze z);
        Stado operator + (Stado s);
        Stado operator - (Zwierze z);
        
        void daj_glos();
        
        
        int getSize();
        int getMaxSize();
        Zwierze * zbior;
        
private:
        
       
        int maxSize;
        int size;
};

#endif /* Stado_hpp */
