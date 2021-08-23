#include<stdio.h>

/**
* @brief count how many command-arguments are switches
* @param argc argument counter
* @param argv vector of arguments
* @return number of switches
*/
size_t countSwitches(size_t argc, char *argv[]);

/**
* @brief check if the argument is all upper case letters
* @param argc argument counter
* @param argv vector of arguments
* @return 1 if it is all upper case letters, 0 if it's not
*/
size_t checkUpperCase(char *str);

/**
* @brief check if the argument is all lower case letters
* @param argc argument counter
* @param argv vector of arguments
* @return 1 if it is all lower case letters, 0 if it's not
*/
size_t checkLowerCase(char *str);

/**
* @brief count how many command-arguments are all upper case letters
* @param argc argument counter
* @param argv vector of arguments
* @return number of upper case letters
*/
size_t countUpperCase(size_t argc, char *argv[]);

/**
* @brief count how many command-arguments are all lower case letters
* @param argc argument counter
* @param argv vector of arguments
* @return number of lower case letters
*/
size_t countLowerCase(size_t argc, char *argv[]);

/**
* @brief counts the characters of the first word in a string
* @param str string to be counted
* @return the amount of characters in the first word in the string
*/
size_t wordSize(char *str);