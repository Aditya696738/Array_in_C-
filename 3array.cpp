#include <iostream>
int main(){
    int ages[5] = {99,45,63,53,53};
    int avg , sum = 0;
    // for-each loop for access the element of an array .
    int length = sizeof(ages) / sizeof(ages[0]);
    for (int age: ages)
    {
        sum += age;
    }
    avg = sum / length;
    std::cout << "The avg age is " << avg << "\n";
// find lowest age among these ages array
    int lowestage = ages[0];
    for (int age: ages)
    {
       if (lowestage > age)
       {
        lowestage = age;
       }
    }
    std::cout << "The lowest age is: " << lowestage << "\n";
    return 0;
}