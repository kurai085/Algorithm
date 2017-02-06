//
//  main.cpp
//  AlgoBracket2
//
//  Created by 윤성빈 on 2016. 10. 20..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>
#include <stack>

char get_pair_bracket(char val)
{
    if(val == '(')
        return ')';
    else if(val == '{')
        return '}';
    else if(val == '[')
        return ']';
    
    return -1;
}

int main(int argc, const char * argv[]) {
    
    
    int testCase = 0;
    
    std::cin >> testCase;
    
    while(testCase--)
    {
        std::stack<char> stak;
        
        std::string str;
        char item =0;
        std::cin >> str;
        
        stak.push(str[0]);
        for(int i = 1 ; i < str.length(); i++)
        {
            if(stak.size() <= 0)
            {
                stak.push(str[i]);
                i++;
            }
            
            item = stak.top();
            
            if(str[i] != get_pair_bracket(item))
            {
                stak.push(str[i]);
            }
            else
            {
                stak.pop();
            }
        }
        
        if(stak.size() > 0)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
     
    }
    
    return 0;
}
