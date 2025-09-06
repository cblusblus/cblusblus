#include <iostream>
#include <vector>
#include <string>

int main() {
    
    std::vector<int> v{1,2,3};
    v.clear();
        //v.size()=0
        //v.capacity()=3


    std::vector<int> v{1,2,3};
    v.clear();
    v.shrink_to_fit();
        //v.size()=0
        //v.capacity()=???

    std::vector<int> v{1,2,3};
    std::vector<int>().swap(v);
        //v.size()=0
        //v.capacity()=0
    
    return 0;
}