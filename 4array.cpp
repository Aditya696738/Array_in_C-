// array inside an function
#include <iostream>
int total_ticket(int ticket[] , int size){
    int total = 0;
    for (int  i = 0; i < size; i++)
    {
        total += ticket[i];
    }
    return total;
}
int main(){
    int ticket[5] = {12,34,31,45,23};
    int result = total_ticket(ticket , 5);
    std::cout << "total ticket sell = " << result << "\n";
    return 0 ;
}