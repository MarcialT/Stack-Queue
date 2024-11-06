template<class T>
class Queue{
    private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    public:
    Queue(T,Node<T>*);
    ~Queue();
    void print();
    bool isEmpty();
    int getLength();
};