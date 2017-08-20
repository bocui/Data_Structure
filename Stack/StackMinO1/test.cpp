#include <iostream>
#include "stackminO1.h"

template<typename T>
void check(const StackMinO1<T> &sta, T expect)
{
    T tmp = sta.min();
    if(tmp == expect)
	std::cout << "Successful !" << std::endl;
}

int main()
{
    StackMinO1<int> sm1;
    sm1.push(2);
    check(sm1, 2);
    sm1.push(4);
    check(sm1, 2);
    sm1.push(1);
    check(sm1, 1);
    sm1.pop();
    check(sm1, 2);
}
