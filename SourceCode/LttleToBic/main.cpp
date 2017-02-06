//
//  main.cpp
//  LttleToBic
//
//  Created by 윤성빈 on 2015. 10. 4..
//  Copyright © 2015년 윤성빈. All rights reserved.
//

#include <iostream>
#include <boost/asio.hpp>

int32_t SwapEndian(int32_t val);


template<typename T, int N>

class Array
{
    private :
    T ar[N];
    public :
    void SetAt(int n, T v){if(n < N && n>=0) ar[n]=v;}
};

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1, b=2;
    
    
    return 0;
}

int32_t SwapEndian(int32_t val)
{//endian converter
    val = (((val <<8) & 0xFF00FF00)| ((val >> 8 ) & 0x00FF00FF));
    return (((val >> 16) & 0x0000FFFF)|((val << 16) & 0xFFFF0000) );
    
}