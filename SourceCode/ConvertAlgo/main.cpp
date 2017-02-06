//
//  main.cpp
//  ConvertAlgo
//
//  Created by 윤성빈 on 2016. 5. 24..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>
#include <math.h>

double round( double value, int pos )
{
    double temp;
    temp = value * pow( 10, pos );
    temp = floor( temp + 0.5 );
    temp *= pow( 10, -pos );
    return temp;
}


int main(int argc, const char * argv[]) {
    
    int LoopCount =0;
    std::cin >> LoopCount;
    
    for(int i =0 ; i<LoopCount; i++)
    {
        double num=0.0f;
        std::string dan;
        
        std::cin >> num;
        std::cin >> dan;
        
        if(dan=="kg")
        {
            num = round(num*2.2046,4);
            dan="lb";
        }
        else if(dan=="lb")
        {
            num = round(num*0.4536,4);
            dan="kg";
        }
        else if(dan=="l")
        {
            num = round(num*0.2642,4);
            dan="g";
        }
        else if(dan=="g")
        {
            num = round(num*3.7854,4);
            dan="l";
        }
        
        printf("%d %.4lf %s\n",i+1, num,dan.c_str());
        
    }
    return 0;
}
