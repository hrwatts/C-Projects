#include<iostream>
#include<string>

bool is_even(int number){
    return (number%2==0)?1:0;
}

int main()
{
    int new_number;
    std::string EvenOdd;
    std::cout << "Enter a positive integer. \n" << std::endl;
    std::cin >> new_number;
    EvenOdd=is_even(new_number)?"even":"odd";
    std::cout << "Your number is " << EvenOdd;
}

