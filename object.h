#include "stdlib.h"

class Object {

    public:

    /**
     * Returns a nearly unique hash of this object 
    */ 
    size_t hash() { }

    /**
     * Checks if the given object is equal to this object
    */
    virtual size_t equals(Object o) {  }

};