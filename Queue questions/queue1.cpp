//Array implementation for queue

#include<iostream>
#include<climits>
using namespace std;

class queue{
    public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};

queue* createQueue(unsigned capacity){
    queue* Queue = new queue();
    Queue->capacity = capacity;
    Queue->front = Queue->size = 0;
    Queue->rear = capacity-1;
    Queue->array = new int[(Queue->capacity * sizeof(int))];
    return Queue;
}

int isFull(queue* queue){
    return(queue->size == queue->capacity);
}

int isEmpty(queue* queue){
    return(queue->size == 0);
}

void enqueue(queue* queue, int item){
    if(isFull(queue)){
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout<<item<<" enqueued \n";
}

int dequeue(queue* queue){
    if(isEmpty(queue)){
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(queue* queue){
    if(isEmpty(queue)){
        return INT_MIN;
    }
    return queue->array[queue->front];
}

int rear(queue* queue){
    if(isEmpty(queue)){
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main() 
{ 
    queue* queue = createQueue(1000); 
  
    enqueue(queue, 10); 
    enqueue(queue, 20); 
    enqueue(queue, 30); 
    enqueue(queue, 40); 
  
    cout << dequeue(queue) 
         << " dequeued from queue\n"; 
  
    cout << "Front item is "
         << front(queue) << endl; 
    cout << "Rear item is "
         << rear(queue) << endl; 
  
    return 0; 
}