//
// Created by Josiah Arroyo on 2/12/21.
//

#ifndef STRING
#define STRING

#include <iostream>
#include <cstring>
#include <fstream>

class DSString{

private:
    /**
     *  You will need to add some private data members here.
     *  This is up to your discretion.  However, we **strongly**
     *  encourage you to implement your string class as a wrapper
     *  for typical null-terminated c-strings.  In doing this, you
     *  may use c-sting functions in the methods in this class such
     *  as:
     *    * strlen(...)
     *    * strcpy(...)
     *    * strcmp(...)
     *    * strncpy(...)
     *    * strcat(...)
     *    * strncat(...)
     *
     *    A quick google search will return plenty of references on
     *    the c-string functions.
     **/
    char* str;


public:

    /**
     * Constructors and destructor
     *
     * Make sure you do proper memory management.
     **/
    DSString();
    DSString(const char*);
    DSString(const DSString&);
    ~DSString();

    /**
     * Standard relational operators.  You are free to expand this
     * list if you'd like.
     *
     * Note that for each operator, there are two overloaded versions:
     *    one that takes a String object
     *    one that takes a null-terminated c-string
     *
     **/
    DSString& operator= (const char*);
    DSString& operator= (const DSString&);
    DSString operator+ (const DSString&);
    bool operator== (const char*)const;
    bool operator== (const DSString&)const;
    bool operator> (const DSString&);
    char& operator[] (const int);

    /**
     * getLength() returns the number (count) of characters in the string.
     **/
    int getLength();

    /**
     * The substring method returns a string object that contains a
     * sequence of characters from this string object.
     *
     * param start - the index of where to start
     * param numChars - the number (count) of characters to copy into
     *    the substring
     **/
    DSString substring(int start, int numChars);

    /**
     * the c_str function returns a null-terminated c-string holding the
     * contents of this object.
     **/
    char* c_str();

    /**
     * Overloaded stream insertion operator to print the contents of this
     * string to the output stream in the first argument.
     **/
    friend std::ostream& operator<< (std::ostream&, const DSString&);

    //You are free to add more functionality to the class.  For example,
    //you may want to add a find(...) function that will search for a
    //string within a string.  (just an example)
    //
    //Further - you will be able to update and modify this class as the
    //semester progresses.

};

//default constructor
DSString::DSString() {
    str = new char[1];
    str[0] = '\0';
}

//constructor with char pointer
DSString::DSString(const char* val) {
    /**if (val == nullptr) {
        str = new char[1];
        str[0] = '\0';
    }

    else {
        str = new char[strlen(val) + 1];
        strcpy(str, val);
    }**/
    str = new char[strlen(val) + 1];
    strcpy(str, val);
}

//copy constructor
DSString::DSString(const DSString& original) {
    /**if (original.str) {
        str = new char[strlen(original.str)+1];
        strcpy(str, original.str);
    }
    else {
        str = nullptr;
    }**/
    str = new char[strlen(original.str)+1];
    strcpy(str, original.str);
}

//destructor
DSString::~DSString() {
    delete[] str;
}

//copy assignment operator with null terminated c string
DSString& DSString::operator= (const char* temp) {
    if (strlen(str) != 0) {
        delete[] str;
    }
    str = new char[strlen(temp)+1];
    strcpy(str, temp);

    return *this;
}

//copy assignment operator with String Object
DSString& DSString::operator= (const DSString& temp) {
    if (this != &temp) {
        delete[] str;
    }
    str = new char[strlen(temp.str)+1];
    strcpy(str,temp.str);

    return *this;
}

//adds String object to the right of original string
DSString DSString::operator+ (const DSString& rhs) {
    //new c string with length of both original string object and new string object
    char* final = new char[strlen(rhs.str)+strlen(str)+1];
    //append the first string object
    strcpy(final, this->str);
    //append the second string object
    strcat(final, rhs.str);
    //create string object with the c string
    DSString finalString(final);
    delete[] final;

    return finalString;
}

//checks if the original string object is equal to a new c string
bool DSString::operator== (const char* rhs)const {
    //returns true if strcmp returns 0
    if (strcmp(str, rhs) == 0) {
        return true;
    }

    return false;
}

//checks if the original string object is equal to new string object
bool DSString::operator== (const DSString& rhs)const {
    //returns true if strcmp returns 0
    if (strcmp(str, rhs.str) == 0) {
        return true;
    }

    return false;
}

//returns true if the lhs (original string) comes first in lexicographical order
bool DSString::operator> (const DSString& rhs) {
    if (strcmp(str, rhs.str) > 0) {
        return true;
    }

    return false;
}

//returns the character at index i of the string
char& DSString::operator[] (const int i) {
    /**if (i > strlen(str)) {
        //not quite sure what goes here
        //Do I throw exception?
    }

    char* charString = new char[strlen(str)];
    strcpy(charString, this->str);
    char final = charString[i];
    delete[] charString;

    return final;**/
    return str[i];
}


//this function returns the string length
int DSString::getLength() {
    return strlen(str);
}

/**
DSString DSString::substring(int start, int numChars) {
    char* charString = new char[numChars + 1];
    char subbuff
}
 **/

char *DSString::c_str() {
    return str;
}

#endif