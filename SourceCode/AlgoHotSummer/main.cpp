//
//  main.cpp
//  AlgoHotSummer
//
//  Created by 윤성빈 on 2016. 8. 6..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>
#include <vector>
#define MAX_BUILDING_COUNT 9

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int testCase = 0;
    int elecSum = 0;
    int elecVal = 0;
    int rslt = 0;
    std::vector<std::string> rsltLst;
    std::cin >> testCase;
    
    for(int i = 0; i < testCase ; i ++)
    {
        std::cin >> elecSum;
        
        for (int num = 0; num < MAX_BUILDING_COUNT; num++)
        {
            elecVal= 0;
            std::cin >> elecVal;
            rslt += elecVal;
        }
        
        if(elecSum >= rslt)
            rsltLst.push_back("YES");
        else
            rsltLst.push_back("NO");
        
        rslt = 0;
    }
    
    for(int j = 0 ; j<rsltLst.size(); j++)
    {
        std::cout << rsltLst[j] << std::endl;
    }
    
    return 0;
}
