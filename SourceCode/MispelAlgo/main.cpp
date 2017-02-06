//
//  main.cpp
//  MispelAlgo
//
//  Created by 윤성빈 on 2016. 5. 23..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    int loopCnt = 0;
    std::cin >> loopCnt;
    
    for(int i = 0 ; i<loopCnt; i++)
    {
        std::string value;
        int position;
        
        std::cin>> position;
        std::cin>> value;
        
        value.replace(position-1,value.length()-position+1
                             ,value.substr(position,value.length()-position));
        
        std::cout << i+1 << " " << value << std::endl;
 
    }
 
    
    
    return 0;
}
