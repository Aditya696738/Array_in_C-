#include <iostream>
using namespace std;

int* staffmember(int staff){
    int* members = new int [staff]; 
    for (int i = 0; i < staff; i++)
    {
        members[i] = (i + 1) * 10;
    }
    return members;
}
int main(){
    int staff = 10;
    int * person = staffmember(staff);
    for (int i = 0; i < staff; i++)
    {
        cout << "Room " << i+1 << " has " << person[i] << " person for working " << "\n";
    }
    delete[] person;
    return 0;
}