#include <iostream>

int main() {
    for(i=1; i<=100; ++i){
        if (i%3 == 0 ){
            std::cout << "Foo";
        }
        else if (i%5 == 0 ){
            std::cout << "Bar";
        }
        else if (i%3 == 0 & i%5 == 0){
            std::cout << "FooBar";
        }
        else{
            std::cout << i;
        }
    }
}
