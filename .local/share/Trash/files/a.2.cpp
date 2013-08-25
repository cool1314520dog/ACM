#include<iostream>
using namespace std;
class queue {
    int data[100];
    int front,rear;
    void enqueue(int x);
    int dequeue();
};
void queue::enqueue(int x){
    data[rear++]=x;
}
int queue::enqueue(int x){
    data[rear++]=x;
}
int queue::dequeue() {
    int res=data[front];
    front++;
    return res;
}
