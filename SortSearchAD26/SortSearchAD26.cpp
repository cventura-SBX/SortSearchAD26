#include <iostream>
#include "Search.h"
#include "SortingA.h"

int main()
{
    //ya esta ordenado el arregloo
    int array[10]{ 10,2,50,6000,7,900,10,17,99,100};

    SortingA::burbuja(array, (sizeof(array) / sizeof(array[0])));

    int index = Search::busquedaBin(array, sizeof(array) / sizeof(array[0]), 17);

    std::cout << "index at: " << index << " valor: " << array[index];
}

