#include <iostream>

void SetValueTo9999(int &alias) {
    alias = 9999;
    std::cout << "&alias: " << &(alias) << std::endl;
}

void SetValuePassingInAPointer(int *p) { *p = 123456; }

int main() {
    int x = 10;
    std::cout << "&x : " << &(x) << std::endl;

    // Store memory location of 'x' in a pointer
    int *p_x = &x;

    SetValueTo9999(x);
    std::cout << "SetValue(x): " << x << std::endl;
    SetValuePassingInAPointer(&x);
    std::cout << "SetValueInPassingInAPointer(x): " << x << std::endl;
    return 0;
}