#include <iostream>
// int pointer.
int* preparedChaiOrders(int cups){
   int* orders = new int [cups];
   for (int i = 0; i < cups; i++)
   {
    orders[i] = (i + 1) * 10;  
    }
   return orders;
}
int main(){
    int cups = 4;
    int* chaiOrder = preparedChaiOrders(cups);
    for (int i = 0; i < cups; i++)
    {
      std::cout << "cup " << i + 1 << " " << "has " << chaiOrder[i] << " ml" << "\n";
    }
    delete[] chaiOrder;
    return 0;
}