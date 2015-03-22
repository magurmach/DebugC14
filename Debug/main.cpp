//
//  main.cpp
//  Debug
//
//  Created by Shakib Ahmed on 3/23/15.
//  Copyright (c) 2015 Shakib Ahmed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Debug.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    //function demonestration
    
    
    int a[15];
    int i;
    for(i=0;i<15;i++)
    {
        a[i]=i;
    }
    
    Debug::showIterable(a);
    
    MARK();
    Debug::show("Notice that MARK() has printed the line number MARK is being called from and the file");
    
    vector<int> v;
    for(i=0;i<15;i++)
    {
        v.push_back(i);
    }
    
    Debug::showIterable(v);
    
    string temporaryString="THIS";
    Debug::show("Integer like",a[10],"and string like",temporaryString,"can be show together","with space like this in between automatically");
    
    
    
    return 0;
}
