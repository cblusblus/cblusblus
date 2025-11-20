int sum(int a, int b) {
    return a + b;
}

mov eax, edi
add eax, esi
ret

c = a * 5;

lea eax, [rdi + rdi*4]   ; 5배 계산

int a = x + y;
int b = a * z;

mul eax, ebx   ; 병렬
add ecx, edx   ; 병렬