// displays current time
#include <stdio.h>
#include <time.h>
int main(){
    time_t current_time;
    time(&current_time);
    printf("Current Date and Time : %s\n",ctime(&current_time));
}