x = a + b;
y = x + 1;
if (y < 10)
    a = a + 1;
z = a + b;

B1: x = a + b;
    y = x + 1;
B2: if (y < 10)
B3: a = a + 1;
B4: z = a + b;

B1 → B2 ── true → B3 → B4
      └── false ─────────→ B4

int a = 3 * 4;      → int a = 12;
double b = 2.5 * 8; → double b = 20.0;

int x = 5;
int y = x + 3;   → int y = 8;

int x = a + b;
int y = a + b + c;


int t = a + b;
int x = t;
int y = t + c;

int x = 10;
x = 20;

int x = 20;

for (int i = 0; i < n; ++i) {
    int limit = vec.size();
}

int limit = vec.size();
for (int i = 0; i < n; ++i) { }

for (int i=0; i<3; ++i){
    arr[i]++;
}

arr[0]++;
arr[1]++;
arr[2]++;

inline int add(int a, int b){...}; 
int x = add(3, 4);

int x = 3 + 4;

for (int i = 0; i < 4; ++i)
    c[i] = a[i] + b[i];

__m128 va = _mm_loadu_ps(a);
__m128 vb = _mm_loadu_ps(b);
__m128 vc = _mm_add_ps(va, vb);
_mm_storeu_ps(c, vc);