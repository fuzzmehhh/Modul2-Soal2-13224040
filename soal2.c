// Nama: Faiz Azmi Irwan
// NIM: 13224040
// Kode: Bunga Matahari (Stack)
// Program yang berfungsi memeriksa apakah terdapat bunga matahari yg tidak terkena cahaya 
// (dgn melihat tinggi bunga diantaranya)
#include <stdio.h>
#include <string.h>

#define MAX 1000

// menyimpan tumpukan karakter bunga
typedef struct {
    char data[MAX];
    int top;
} Stack;

// menginisialisasi stack kosong
void initStack(Stack *s) {
    s->top = -1;
}

// memeriksa apakah stack kosong
int isEmpty(Stack *s) {
    return s->top == -1;
}

// menambahkan karakter ke puncak stack
void push(Stack *s, char c) {
    if (s->top < MAX - 1) {
        s->top++;
        s->data[s->top] = c;
    }
}

// fungsi untuk mengambil nilai stack paling atas
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
}

// mengambil dan menghapus integer di puncak stack
int pop(Stack *s) {
    int c = s->data[s->top];
    s->top--;
    return c;
}

int main() {
    int flower[MAX];
    int count = 0;

    // menerima input terus-menerus hingga perintah enter
    while(scanf("%d", &flower[MAX]) == 1) {
        int k = getchar("\n");
    }

    //memeriksa apakah flower termasuk dark
    Stack s;

    initStack(&s);

    for (int i = count - 2; i = 1; i--) {
        if (flower[i] < flower[i-1] && flower[i] < flower[i+1]) {
            push(&s, flower[i]);
        }
    }

    //menampilkan flower yang dark
    while(isEmpty(&s) == 0) {
        printf("%d ", pop(&s));
    }

    return 0;
}
