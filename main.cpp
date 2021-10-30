#include <iostream>
#include <vector>
#include "Stack.h"

#include <cstdlib> // для функций rand() и srand()

// Указатели (стек) - Пирамидальная сортировка

int main() {
    Stack myStack;

    std::vector<int> v_temp; //+1

    int size = 0; //+1
    std::cout << "inter numbers of elements" << std::endl;
    std::cin >> size; //+1
    for (int i = 1; i <= size; i++) 
    {
        srand(i*15234); //+1

        v_temp.push_back(rand()); //+1
    }

    myStack.push(v_temp);

    std::cout << "Stack size : " << myStack.getSize() << std::endl; //+2
    for(unsigned int i = myStack.getSize(); i > 0; --i) {
        std::cout << i << ") " << myStack.get(i) << std::endl;
    }

    myStack.sort();
    std::cout << "After sort: " << myStack.getSize() << std::endl;
    for(unsigned int i = myStack.getSize(); i > 0; --i) {
        std::cout << i << ") " <<  myStack.get(i) << std::endl;
    }

    return 0;
}
