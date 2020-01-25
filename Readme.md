This API has the following classes:

    -Object

    -String

    -Queue

Object class:

    -hash() returns has of object

    -equals() checks if two objects are equal

String class:

    -2 fields char* s and size_t length

    -size_t size() returns size of string

    -int compare(String s) compares 2 strings

    -size_t equals(Object o) checks if 2 strings are equal

    -String* substring(size_t start, size_t end) returns substring of given string

    -String* concat(String* s) adds given string to this string

    -void trim() Removes leading and trailing spaces from this String

    -String** split(char* separator) Returns a list of Strings split at the given separator

    -bool contains(String* sub) Checks if this String contains the given String.

    -void print() Prints this String

Queue class:

    -void enqueue(Object o) adds an object to the end of this queue
    
    -Object* dequeue() pops first object of this queue

    -Object* peek() Returns the first object in this queue without removing.

    -size_t size() Returns the size of this queue.
