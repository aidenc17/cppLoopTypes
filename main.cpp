#include <iostream>

int main() {

//while loops
    std::string name;

    while (name.empty()) {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << '\n';

//do while loop
    int number;
     do{
        std::cout << "Please enter a postive #: ";
        std::cin >> number;
    }while (number < 0);

    std::cout << "the number is: " << number << '\n';



//for loop

    for (int i = 1; i <= 3; i++ ) {
        std::cout << i << '\n';
    }




    return 0;
}