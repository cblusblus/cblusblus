#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pthread_t thread;

    pthread_create(
        &thread, NULL, 
        some_thread_func, NULL
    );
    pthread_join(thread, NULL);
}
