int foo(int arr[]) { 
    // arr은 배열이 아니라 int* 로 취급
}

int main() {
    int data[5] = {1,2,3,4,5};
    foo(data);

    int arr[3] = {1,2,3};
    arr[5] = 10;
        // 컴파일 OK, 런타임 경고 없음  
        
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    a = b;  //컴파일 불가

    for (int i = 0; i < 3; i++) {
        a[i] = b[i];  // 직접 복사해야 함
    } 

    int arr[5] = {3,1,4,1,5};
    std::sort(arr, arr + 5);
        // 길이를 직접 계산해야 함
    
    return 0;
}