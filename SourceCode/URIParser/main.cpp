//
//  main.cpp
//  URIParser
//
//  Created by 윤성빈 on 2015. 10. 4..
//  Copyright © 2015년 윤성빈. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
 
    std::string str = "%0x2a";
    
    printf("%c",0x2a);
    //std::cout << "%d0x2a" <<std::endl;
    
    return 0;
}

void ParseURI(std::string * str,int length)
{
    char * arry = (char*)str;
    char rslt[length];
    
    for(int i =0; i<length; i++)
    {
        if(arry[i] == '%')
        {
            rslt[i] = '0';
            rslt[i+1] = 'x';
        }
        else
            rslt[i] = arry[i];
    }

}
