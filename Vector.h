#include <stddef.h>

typedef struct 
{
    size_t size;
    size_t capacity;
    int* ptr;
}Vector;

void ctor(Vector* this);
void dtor(Vector* this);
void push_back(Vector* this, int val);
void clear(Vector* this);
void pop_back(Vector* this);
size_t size(Vector* this);
size_t capacity(Vector* this);
void insert(Vector* this,size_t index,int val);
void erase(Vector* this,size_t index);
void insert_range(Vector* this, size_t start, size_t end, int val);
void print(Vector* this);
