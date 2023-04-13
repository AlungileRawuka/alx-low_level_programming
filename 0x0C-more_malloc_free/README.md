#This folder contains programs written in C that explore the concept of memory allocation using malloc, realloc, calloc and free().
The malloc() function dynamically allocates size bytes and returns a pointer to the allocated memory.
When the memory is no longer needed, it is returned to the operating system by calling the function free().
The calloc() function works the same way as malloc() except it initialises each block of memory with '0' and takes in 
two arguments (n, size), where n is the number of elements to be stored in the memory and size is the size of each of those elements.
The function realloc() is used to dynamically change the memory alocation of a previously allocated memory.
