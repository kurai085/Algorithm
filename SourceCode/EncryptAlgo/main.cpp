//
//  main.cpp
//  EncryptAlgo
//
//  Created by 윤성빈 on 2016. 5. 23..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
   
    int loopCnt = 0, len =0;
    std::cin >> loopCnt;

    for(int i = 0; i < loopCnt; i++)
    {
        std::string str;
        std::cin >> str;
        len = (int)str.length()-1;
        char swap;
        
        for(int pos =1; pos <= (len/2)+(len%2); pos++)
        {
            
            for(int subPos = pos; subPos < len; subPos++)
            {
                swap = str[subPos];
                str[subPos] = str[subPos+1];
                str[subPos+1] = swap;
            }
            
        }
        
        std::cout << str << std::endl;
        
    }
    
    return 0;
}
