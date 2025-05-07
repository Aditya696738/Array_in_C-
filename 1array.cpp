// Array are used to store multiple values/element in single variables.
#include <iostream>
using namespace std;
int main(){
    int temerature_of_days[7] = {23,34,43,39,37,42,40};
    // access the single value of an array
    cout << "temperature of first day - " << temerature_of_days[0] << endl;
    
    cout << "temperature of day in this week - " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << temerature_of_days[i] << " " << "degree C" << "\n";
    }
    return 0;
}
