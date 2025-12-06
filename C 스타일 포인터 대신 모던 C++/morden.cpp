#include <memory>

User* u1 = new User{...};
auto name_u1 = u1->getName();

User u2{...};
auto name_u2 = u2.getName();

void draw(const Shape* s);
void draw(const Shape& s);

int* arr = new int[100];
std::vector<int> v(100);

void read(const uint8_t* buf, const size_t size);
void read(std::span<const uint8_t> buf);

User* find(int id);
std::optional<User> find(int id);

class Item;

auto p1 = std::make_unique<Item>();
auto p2 = std::move(p1);
//p1은 더이상 객체를 소유하지 않음

class Node;

auto node1 = std::make_shared<Node>();
auto node2 = node1;
//node1과 node2는 같은 객체를 가리킴

class Node {
    std::shared_ptr<Node> child;
    std::shared_ptr<Node> parent;
};

auto node1 = std::make_shared<Node>();
auto node2 = std::make_shared<Node>();

node1->child = node2;
node2->parent = node1;

//이제 node1과 node2는 순환참조되어 메모리 해제 X

class Node {
    std::shared_ptr<Node> child;
    std::weak_ptr<Node> parent;
};

class Buffer {
    Buffer(size_t size)
        : data(std::make_unique<uint8_t[]>(size))

    ~Buffer() {}
    std::unique_ptr<uint8_t[]> data;
};

//Buffer 객체가 생성될 때 포인터 생성
//Buffer 객체가 소멸될 때 포인터 반환

class Base {};
class Derived : public Base {};

Base* b1 = new Derived();
if (auto d = dynamic_cast<Derived*>(b1)) {
    //변환 성공
}
else {
    //변환 실패
}

Base b2;
try {
     Derived& d_ref = dynamic_cast<Derived&>(b2);
     //변환 성공
}
catch{
    //변환 실패
}

recv(fd, buf, sizeof(buf), 0);

volatile uint32_t* gpio = (uint32_t*)0x40000000;