// Filename: Pointers.c
//
// These are notes and sandbox code for the CS50 2018 Week 3 short video
// entitled "Pointers".
//
// Date: 08/15/2018
//
// Name: Ian Hutcheson
//
// IDE: Microsoft Visual Studio 2017


#include <stdio.h>

void main() {
	// Pointers - most difficult topic we'll cover in CS50
	// A POINTER IS JUST AN ADDRESS

	// Good way to pass data back and forth between functions
	//     Pass data by reference, rather than by value
	//     Pass by value only passes a copy
	//     Using pointers means a change in one function can impact
	//          what happens in a different function (swap function example).

	// Pointer discipline

	// Back into basics of computer memory
	// File storage location (HDD, SSD, etc.) - permanent storage
	// Manipulation and use of data can only take place in RAM
	//      Must move it from disk drive to RAM (volatile memory)
	// In CS50, memory refers to RAM
	// Data types take up different amount of space in RAM
	//     int       | 4 bytes
	//     char      | 1 byte
	//     float     | 4 bytes
	//     double    | 8 bytes double precision floating point variables
	//     long long | 8 bytes really big integers
	// Memory can be thought of as a big array of byte-sized cells
	// RAM is random access - no need to iterate through the array to reach
	//     the location you want to access, just need an address
	// Data is represented in memory as binary (actually endianness)
	// Memory addresses usually represented as hexidecimal values (0x...)

	// POINTERS ARE JUST ADDRESSES
	// A pointer is nothing more than an address
	// An address to a location in memory where variables live
	
	// What happens when you int k; ?
	// You reserve 4 bytes of memory in a box called k
	// Let's assign it some integer value, say 5 (k = 5;)
	// What happens when you int* pk; ?
	// Creates a box called pk;
	// What happens when you pk = &k; ?
	// pk gets the address of k (ex. 0x80C74820)
	// pk ----> k   (pk becomes a pointer to k)
	// pk finds the location in memory where k lives
	printf("Lets initialize an integer variable called k and assign it a value of 5.\n");
	int k = 5;
	printf("    the value of k is: %d\n", k);
	printf("Lets declare an integer pointer named pk...\n");
	int* pk; 
	printf("and assign to it the address in memory where the variable k lives using the reference operator &.\n");
	pk = &k;
	printf("    the value of pk, the pointer to int k, is: %d\n", pk);  // Why does this address change everytime I build?
	printf("Lets go to that address using the deference operator (usage: *pk)\n");
	printf("and move in a new integer value of 10\n");
	*pk = 10; // Dereference operator
	printf("    the value of k is now: %d\n", k);
	printf("    and the address of k is still: %d\n", pk);
	//					Variable | Address | Value
	// int x = 5;			x		0x04	   5
	// int* ptr = &x;	   ptr		0x08	  0x04
	// int copy = *ptr;	   copy		0x0C	   5

	// A pointer is a data item whose value is a memory address
	// type of a pointer describes the data located at that memory address
	//     (ex. int* example above points to a location containing an integer)

	// Null pointer
	// points to nothing, can come in handy
	// Always set the value of a pointer to NULL if you don't set its value immediately
	// Check using (== NULL)

	// Another way to create a pointer is to simply extract the address of an 
	//     already existing variable (& operator)
	// if x is an int variable, then &x is a pointer-to-int whose value is
	//     the address of x
	// for arrays, &arr[i] is a pointer to the ith element in the array
	// An array's name is actually a pointer to the first element in that array!

	// Arrays passed to a function are passed by reference!

	// Dereferencing a pointer
	// ex. given a pointer-to-char pc, then *pc is the data the lives at the memory
	//     address stored inside the variable pc
	//     can do something like *pc = 'D', and whatever value previously lived
	//     at pc is changed to 'D'
	// * in this context is known as the dereference operator
	// Accesses the data at the memory address of a pointer
	// Note: Asterisks have two different meanings with respect to pointers
	//       char* pc <---- asterisk refers to the data type
	//       *pc <---- asterisk refers to the data that lives at the address pc points to
	// Like visiting your neighbor.. having their address (pc) isn't enough, you need to 
	//     actually GO TO (*pc) their address to hang with them

	// What happens if you dereference a pointer whose value is NULL?
	// Remember, NULL points to nothing
	// Error: Segmentation fault
	// This is good!
	// Prevents accidental dangerous manipulation of unknown pointers!
	// Always set pointers to NULL if you don't immediately initialize them
	//     to a known value
	// Better for your program to crash rather than screw up the OS or another program

	// int* p;
	// Value of p is an address
	// Can deference p with * operator
	// What's at that memory location? an integer

	// String is an alias for char*, a pointer to a character
	// Strings are just an address in memory!
	// 32 bit OS vs. 64 bit OS?  Refers to the length of memory addresses

	// what is *pk? go to the address pointed to by pk
	// *pk = 35? go to the address pointed to by k and assign it 35
	// identical to the code k = 35;

	// & is the reference operator (what is the address?)
	// * is the dereference operator (go to that address)

	// DID I MENTION A POINTER IS JUST AN ADDRESS

	return;
}