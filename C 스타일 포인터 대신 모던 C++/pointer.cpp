/*
int a = 10;
int* p = &a; // p는 a의 주소를 가리킴
*/
class C1{int* p;};
class C2{int* p;};

int* p = new int(10);
C1 c1_inst(p);
C2 c2_inst(p);

int* p = new int(10);
*p = new int(20);
    //dangling pointer

delete p;
*p = 30;
    //use-after-free