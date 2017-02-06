//
//  main.cpp
//  LectureAlgo
//
//  Created by 윤성빈 on 2016. 2. 20..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string msg = 0;
    std::vector<std::string> vt;
    
    int testCase  = 0;
    int loopCount = 0;
    std::cin >> testCase;
    
    while(loopCount < testCase)
    {
        vt.clear();
        
        std::cin >> msg;
        int index = (int)(msg.length()/2);
        
        if(index%2 != 0)
            break;
        
        size_t pos=0;
        const char* arr[index];
        
        for(int i = 1; i <= index ; i++)
        {
            arr[index-1]= msg.substr(pos,i*2).c_str();
            pos = i*2;
        }
        
        std::string swap;
        
        for(int j =0 ; j < vt.size(); j++)
        {
          
        }
        
        loopCount ++;
    }
    
    
    return 0;
}
