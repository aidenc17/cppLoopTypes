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


//nested loop
int rows;
int columns;
char symbol;

    std::cout << "How many rows?: " ;
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }


    return 0;
}