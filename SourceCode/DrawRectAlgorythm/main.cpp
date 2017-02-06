//
//  main.cpp
//  DrawRectAlgorythm
//
//  Created by 윤성빈 on 2016. 2. 20..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>


typedef struct _Point
{
    int px;
    int py;
    
}Point;


int main(int argc, const char * argv[]) {
    // insert code here...
    int testCase = 0;
    
    std::cin >> testCase;
    
    int px=0,py=0;
    
    int x=0,y=0;
    for(int i =0 ; i < 3; i++)
    {
        std::cin >> x >> y;
        
        if(px < x)
            px=x;
        
        if(py < y)
            py=y;
    }
    
    std::cout << px << " " << py << std::endl;
    
    return 0;
}
