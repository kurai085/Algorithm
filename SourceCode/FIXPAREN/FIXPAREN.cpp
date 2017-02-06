//
//  main.cpp
//  FIXPAREN
//
//  Created by 윤성빈 on 2017. 2. 5..
//  Copyright © 2017년 윤성빈. All rights reserved.
//
/*
 1.알고리즘을 작성한다.
 (,),{,},[,],<,> 
 <-High -- Low->
 우선순위는 위와 같다.
 
 1. 닫는 괄호가 있어야한다.
 */
#include <iostream>
#include <stack>

char check_pair(char token)
{
    if(token == '(')
        return ')';
    else if(token == '{')
        return '}';
    else if(token == '[')
        return ']';
    else if(token == '<')
        return '>';
    else
        return '\0';
        
}

bool is_open_bracket(char token)
{
    if(token == '(' || token == '{'
       || token == '<' || token == '(')
        return true;
    
    return false;
}

int main(int argc, const char * argv[]) {

    char* str={0};
    std::cin >> str;
    
    int idx = 0;
    char beforeOpen = 0;
    std::stack<char> tokenStack;
    
    while(true)
    {
        if(str[idx]=='\0')
            break;
        
        if(is_open_bracket(str[idx]))
        {
            tokenStack.push(str[idx]);
        }
        else
        {
            continue;
        }
    
        
        idx++;
    }
    
    
    
    return 0;
}
