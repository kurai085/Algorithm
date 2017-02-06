//
//  main.cpp
//  UrlAlgo
//
//  Created by 윤성빈 on 2016. 5. 25..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]) {
    // insert code here...
    int LoopCnt=0;
    std::cin>>LoopCnt;

    for(int i =0; i<LoopCnt; i++)
    {
        char str[80];
        char rslt[80];
        
        scanf("%s",str);
        
        int subPos =0;
        
        for(int pos=0; pos<sizeof(str)/sizeof(char); pos++)
        {
            if(str[pos]=='%')
            {
                char aa[2];
                aa[0]=str[pos+1];
                aa[1]=str[pos+2];
                
                int num=(int)strtol(aa,0,16);
                rslt[subPos]=num;
                pos+=2;
                subPos++;
            }
            else
            {
                rslt[subPos]=str[pos];
                subPos++;
            }
        }
        
        std::cout << rslt << std::endl;
    }

    return 0;
}
