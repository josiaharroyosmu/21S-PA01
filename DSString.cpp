//
// Created by Josiah Arroyo on 2/24/21.
//

#include "DSString.h"

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
