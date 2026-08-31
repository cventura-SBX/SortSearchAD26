#include <iostream>
#include "Search.h"

int main()
{
    //ya esta ordenado el arregloo
    int array[10]{ 1,2,5,6,7,9,10,17,99,100};
    
    int index = Search::busquedaBin(array, sizeof(array) / sizeof(array[0]), 17);

    std::cout << "index at: " << index << " valor: " << array[index];
}

