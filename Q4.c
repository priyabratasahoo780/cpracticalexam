//Q4. Define an enum Weekday {MON, TUE, WED, THU, FRI SAT, SUN}.
// Read an interger(0-6) from the user and print the corresponding weekday name. Print "Invalid day" for any othe number. 
#include<stdio.h>
enum Weekday{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
};
int main(){
    enum Weekday T;
    T = 1;
    switch(T){
        case 0:
        printf("MON");
        break;
        case 1:
        printf("TUE");
        break;
        case 2:
        printf("WED");
        break;
        case 3:
        printf("THU");
        break;
        case 4:
        printf("FRI");
        break;
        case 5:
        printf("SAT");
        break;
        case 6:
        printf("SUN");
        break;
        default:
        printf("invalid number");
    }
    return 0;
}