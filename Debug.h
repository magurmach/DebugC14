//
//  Debug.h
//  Debug
//
//  Created by Shakib Ahmed on 3/23/15.
//  Copyright (c) 2015 Shakib Ahmed. All rights reserved.
//

#ifndef __Debug__Debug__
#define __Debug__Debug__

#include <stdio.h>
#include <iostream>

#define MARK() Debug::mark(__FILE__,__LINE__)

class Debug
{
    
public:
    static void show()
    {
        std::cout<<std::endl;
    }
    
    template<typename T,typename... Args>
    static void show(T a, Args... args)
    {
        std::cout<<a<<" ";
        show(args...);
    }
    
    template<typename T>
    static void showIterable(T& a)
    {
        for(auto &x: a)
        {
            std::cout<<x<<" ";
        }
        show();
    }
    
    static void mark(const char *file, int line)
    {
        show(file, line,"reached");
    }
    
    
};

#endif /* defined(__Debug__Debug__) */
