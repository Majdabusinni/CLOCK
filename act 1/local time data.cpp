#include <stdio.h> /* printf */
#include <time.h> /* time_t, struct tm, time, localtime, asctime */
#include <iostream>
using namespace std;
//& =tell C++ to print the memory address were the value of time  is stored/
int main()
{
    cout << "hello";
    time_t rawtime;
    struct tm *info;
    time(&rawtime);
    info=localtime(&rawtime);
    printf("current local time and date :%s",asctime(info));

    return 0;

}
