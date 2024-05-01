// std::queue (https://en.cppreference.com/w/cpp/container/queue) is a MUCH
// better choice, but this is instructive for inexperienced programmers

// For an intro to templates in C++, see
// https://www.geeksforgeeks.org/templates-cpp/
// Remember that template classes must be implemented in the header file.

typedef std::size_t size_t;

template <typename T>
class Queue {
    private:
        // head is the index of the next item to be drawn from the queue
        size_t size;
        size_t head;
        size_t tail;
        // Y\This is why std::stack or std::vevtor is better
        T* data;
    public:
        Queue(size_t sz) : size(sz), head(0), tail(0) 
        {
            data = (T*)malloc(size*sizeof(T));
        }
        ~Queue() {
            free(data);
        }
        bool empty() { return head == tail; }
        void enqueue(T datum) {
            data[tail++] = datum;
            if (tail == size) tail = 0;
        }
        T dequeue() {
            if ( !empty() ) {
                T d = data[head++];
                if (head == size) head = 0;
                return d;
            }
            // Good place to throw an exception
            else {
                std::cerr << "Queue empty" << std::endl;
                return data[head];
            }
        }
};

;
