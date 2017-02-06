#include <iostream>
#include <string.h>

#define DAYS_OF_WEEK 7
using namespace std;

int monthArr[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
int arr[DAYS_OF_WEEK];

void solve(int month, int date, char* day)
{
    int days = monthArr[month];
    int startIndex = date;
    bool reverse = false;
    
    if(strncmp(day,"Mon",3)==0) startIndex -= 1;
    else if(strncmp(day,"Tue",3)==0) startIndex -= 2;
    else if(strncmp(day,"Wed",3)==0) startIndex -= 3;
    else if(strncmp(day,"Thu",3)==0) startIndex -= 4;
    else if(strncmp(day,"Fri",3)==0) startIndex -= 5;
    else if(strncmp(day,"Sat",3)==0) startIndex -= 6;
    
    if(startIndex < 1)
    {
        days = monthArr[month-1];
        startIndex = days + startIndex;
    }
    
    for(int i = 0; i < DAYS_OF_WEEK; i++)
    {
        if(!reverse&&startIndex > days)
        {
            startIndex -= days;
            reverse = true;
        }
        
        arr[i] = startIndex;
        startIndex++;
    }
    
    printf("%d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
}

int main(int argc, const char * argv[]) {
    // insert code here...

    int testCase =0;
    cin >>testCase;
 
    int month = 0;
    int date = 0;
    
    for(int i=0; i < testCase; i++)
    {
        char day[12]="";
        cin >> month >> date >> day;
        solve(month, date, day);
    
    }
    return 0;
}
