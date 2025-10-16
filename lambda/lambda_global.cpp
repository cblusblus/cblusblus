#include <iostream>

int foo(int i, int j){
    auto adder_only_used_in_foo
        = [](int i, int j){return i+j;};
    return adder_only_used_in_foo(i, j);
}