#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int, int);
  int dequeue();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue() {
  size = 0;
  headPtr = NULL;
  tailPtr = NULL;
}

Queue::~Queue() {
  int i;
  int n = size;

  // while(size>0)
  for (i = 0; i < n; i++)
    dequeue();
}
void Queue::enqueue(int x, int y) {
  NodePtr new_node = new NODE(x, y);

  if (size == 0) {
    headPtr = new_node;
  } else {
    tailPtr->set_next(new_node);
  } // 1.Create
    // 2 Connect

  // 3 change tail
  tailPtr = new_node;
  ++size; // 4.increase size
}

int Queue::dequeue() {
  int value;
  NodePtr t;
  if (headPtr) {
    t = headPtr;
    // 1. Save the node to be deleted

    // 1.5 take the value out to value
    value = t->get_value();
    // 2. move (head)
    headPtr = headPtr->get_next();

    if (size == 1)
      tailPtr = NULL;
    delete t; // 3. delete
    size--;
  }
  return value;
}