// let's create a program that calculates the average of different ages:
#include <iostream>
int main(){
    int ages[5] = {23,45,63,53,53};
    int avg , sum = 0;
    // for-each loop for access the element of an array .
    int length = sizeof(ages) / sizeof(ages[0]);
    for (int age: ages)
    {
        sum += age;
    }
    avg = sum / length;
    std::cout << "The avg age is " << avg ;
    return 0;
}