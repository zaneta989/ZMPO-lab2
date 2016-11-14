//
//  Stado.cpp
//  lab2
//
//  Created by Żaneta Larwa on 31.10.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Stado.hpp"
#include <iostream>
Stado::Stado(int w)
{
    zbior=new Zwierze [w];
    maxSize=w;
    for(int i=0; i<getMaxSize();i++) zbior[i]=Zwierze();
    size=0;
}

Stado Stado::operator + (Zwierze z)
{
    zbior[size]=z;
    size++;
    return *this;
}
Stado Stado::operator + (Stado s)
{
    Stado pom = Stado(getSize());
    for(int i=0; i<getSize(); i++) pom+zbior[i];
    
    *this=Stado(getMaxSize()+s.getMaxSize());
    for(int i=0; i<pom.getSize(); i++) *this+pom.zbior[i];
    for(int i=0; i<s.getSize(); i++) *this+s.zbior[i];
    
    return *this;
}
Stado Stado:: operator - (Zwierze z)
{
    Zwierze* wsk;
    wsk=&z;
    for(int i=0; i<getSize(); i++)
    {
        if( &zbior[i]==wsk)
        {
            Zwierze  pom [100];
            for(int j=0; j<getSize(); j++) pom[j]=zbior[j];
            int k=0;
            for(int j=0; j<getSize();j++)
            {
                //pom[j]=zbior[j];
                if(j==i) continue;
                zbior[k]=pom[j];
            }

        }
        break;
            
    }
    
    return *this;
}
void Stado::daj_glos()
{
    for(int i=0; i<size; i++)
    {
        zbior[i].daj_glos(); cout<<" ";
    }
    cout<<endl;
}
int Stado::getSize()
{
    return size;
}
int Stado::getMaxSize()
{
    return maxSize;
}
