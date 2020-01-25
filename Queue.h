#include "Object.h"

class Queue : public Object {

    // list of Objects
    Object** q;
    

    /**
     *  adds an object to the end of this queue
     */
    void enqueue(Object o) {  }

    /**
     *  Pops the first object in this queue
     */
    Object* dequeue() {  }

    /**
     * Returns the first object in this queue without removing.
     */
    Object* peek() { }

    /**
     * Returns the size of this queue.
     */
    size_t size() { }

};