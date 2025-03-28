class MyCircularQueue {
private:
    vector<int> queue; // queue, using a vector for dynamic sizing
    int front; // front pointer, for dequeue
    int rear; // rear pointer, for enqueue
    int n; // size of queue

public:
    
    MyCircularQueue(int k) {
        n = k; // Set size
        queue.resize(n); 
        front = rear = -1; 
    }
    
    // Enqueue element
    bool enQueue(int value) {
        if ((rear + 1) % n == front) {
            return false; // Overflow (queue is full)
        }

        // If queue is empty
        if (rear == -1) {
            front = 0;
            rear = 0;
        } else {
            // Increment rear MOD n to rotate across the array
            rear = (rear + 1) % n;
        }
        queue[rear] = value;
        return true;
    }
    
    // Dequeue element
    bool deQueue() {
        if (front == -1) {
            return false; // Underflow (queue is empty)
        }

        // If the queue becomes empty after this operation
        if (front == rear) {
            front = rear = -1;
        } else {
            // Increment front MOD n to rotate across the array
            front = (front + 1) % n;
        }
        return true;
    }
    
    
    int Front() {
        if (front == -1) {
            return -1; 
        }
        return queue[front];
    }
    
    int Rear() {
        if (rear == -1) {
            return -1; 
        }
        return queue[rear];
    }
   
    bool isEmpty() {
        return front == -1;
    }
    
   
    bool isFull() {
        return (rear + 1) % n == front;
    }
};