int a, b;

int sum = a + b;
/*
Assignment
├── Identifier(sum)
└── BinaryOp(+)
    ├── Identifier(a)
    └── Identifier(b)
*/

int x = 1 + 2;

int x = 3;

constexpr int add(int a, int b) { 
    return a + b; 
}
int x = add(2, 3);

int x = 5;

void foo(){
    int i = 1;  //DDE에서 삭제
    int j = 2;

    return j;
}

template <typename T>
void boo(T i){
    std::cout << i << std::endl;
}   //DDE에서 삭제

int main(){
    //do not use boo
    return 0;
}