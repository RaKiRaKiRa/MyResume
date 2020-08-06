#include <vector>
using namespace std;
template<typename T>
class Node {
public:
    Node(T v): value(v) {}
private:
    T value;
    Node* next;
};

template<typename T>
class List {
public:
    List(): begin(NULL), end(NULL){}
    ~List() {
        while(begin != NULL && begin != end) {
            Node<T>* next = begin->next;
            delete begin;
            begin = next;
        }
        if(end != NULL) {
            delete end;
        }
    }
    void push_back(T v) {
        Node<T>* cur = new Node<T>(v)
        if(begin == NULL) {
            begin = cur;
            end = cur;
        } else {
            end->next = cur;
            end = end->nect;
        }
    }

    void pop_front() {
        if(begin == NULL) {
            return;
        }else if(end == begin) {
            delete end;
            end = NULL;
            begin = NULL;
        } else {
            Node<T>* next = begin->next;
            delete begin;
            begin = next;
        }

    }
    T front() {

    }
    T back() {

    }
private:
    Node<T>* begin;
    Node<T>* end;
};