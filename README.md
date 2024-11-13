# 0x1B. C - Sorting Algorithms & Big O

![Terminal GIF](path/to/terminal.gif)

## Background Context

This project is a collaborative effort, meant to be completed by groups of two students. Each pair is required to work together to complete at least the mandatory tasks, with an emphasis on understanding sorting algorithms and their time complexity.

## Resources

Refer to the following resources for detailed explanations:

- [Sorting Algorithms](https://example.com)
- [Big O Notation](https://example.com)
- [Sorting Algorithms Animations](https://example.com)
- CS50's [Algorithm Explanation by David Malan](https://example.com)

*Warning*: Some visualizations may contain flashing images, which can trigger seizures for people with epilepsy.

## Learning Objectives

By the end of this project, you should be able to:

- Describe at least four different sorting algorithms
- Understand Big O notation and how to evaluate an algorithm's time complexity
- Choose the optimal sorting algorithm based on input characteristics
- Define what makes a sorting algorithm "stable"

## Requirements

### General

- Editors allowed: `vi`, `vim`, `emacs`
- Compilation on Ubuntu 20.04 LTS with `gcc`, using `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Each file should end with a newline
- Your code must follow the **Betty** style guidelines (`betty-style.pl` and `betty-doc.pl` will be used for checking)
- No global variables allowed
- Maximum of 5 functions per file
- Standard libraries are not allowed (e.g., `printf`, `puts`)
- Example `main.c` files shown are for testing purposes only and should not be pushed

### Header File

All function prototypes should be declared in `sort.h`, which must be include-guarded. Be sure to push this header file to your repository.

### GitHub

- Each group should maintain a single repository for the project
- Avoid cloning/forking a project repository with the same name before the deadline to avoid a 0% score

## Data Structure and Functions

### Functions

This project provides `print_array` and `print_list` functions to assist in testing your code:

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
These functions will be compiled with your sorting algorithms during grading. Include the prototypes in `sort.h`.

### Data Structure for Linked List

The following structure defines a doubly linked list node:

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
### Big O Notation

Please use concise Big O notation, omitting constants. Examples:

- O(1)
- O(n)
- O(n^2)
- O(log(n))
- O(n log(n))
  
For file-based answers, ensure each file ends with a newline.

### Testing

For testing your sorting algorithms with large data sets of random integers, you may use resources like [Random.org](https://random.org).

## Disclaimer

This project requires original work; copying solutions will result in a zero score and potential removal from the program. Plagiarism is strictly prohibited, and sharing project content publicly is not allowed.
