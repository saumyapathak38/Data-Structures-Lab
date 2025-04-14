#include <stdio.h>

// Structure to store book details
typedef struct {
    int id;
    char title[20];
} Book;

int main() {
    Book books[] = {
        {101, "C Basics"},
        {102, "Data Structures"},
        {103, "Algorithms"}
    };

    int left = 0, right = 2, mid;
    int searchID = 102;  // Book to search for
    int found = -1;

    // Binary Search
    while (left <= right) {
        mid = (left + right) / 2;
        if (books[mid].id == searchID) {
            found = mid;
            break;
        } else if (books[mid].id < searchID) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Output result
    if (found != -1) {
        printf("Book Found: %s\n", books[found].title);
    } else {
        printf("Book Not Found\n");
    }

    return 0;
}


