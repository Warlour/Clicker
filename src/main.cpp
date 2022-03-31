#include <iostream>
#include "auto.hpp"

int repeat;

int main(int argc, char const *argv[]){
    std::cin >> repeat;
    for (int i = 0; i < repeat; i++)
        LeftClick();

    return 0;
}