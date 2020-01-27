#include "Object.h"


class String : public Object {

    char* s;
    size_t length;

    /**
     * Redundent method for user friendliness.
     */ 
    size_t size() { return 0; }
    
    /**
     * Alphanumerically ompares the given String to this String
     * Returns 0 if equal, 1 if if the given String is alphumerically higher,
     * or -1 if the given String is alphanumerically lower.
    */
    int compare(String s) { return 0; }

    /**
     * Checks if the given object is equal to this object.
    */
    size_t equals(Object o) { return 0; }

    /**
     * Returns the String beginning at the starting index and
     * ending before the end index.
     * Returns null if either index is invalid.
     */
    String* substring(size_t start, size_t end) { return nullptr; }

    /**
     * Concatenates the given String to this String.
     * Returns pointer to the resulting String.
     */
    String* concat(String* s) { return nullptr; }


    /**
     * Removes leading and trailing spaces from this String
     */
    void trim() { }


    /**
     * Returns a list of Strings split at the given separator.
     */
    String** split(char* separator) { return nullptr; }

    /**
     * Checks if this String contains the given String.
     */
    bool contains(String* sub) { return 0; }


    /**
     * Prints this String
     */
    void print() { }
};