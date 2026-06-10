#ifndef SORTING_H
#define SORTING_H
#include "BookStore.h" 

inline void BookStore::insertionSort(int criteria) {
    for (int i = 1; i < MAX_BOOKS; i++) {

        string nextTitle = title[i];
        string nextAuthor = author[i];
        string nextPublisher = publisher[i];
        double nextPrice = price[i];

        int j = i;

        while (j > 0) {
            bool condition = false;

            if (criteria == 1) {
                condition = (author[j - 1] > nextAuthor);
            }
            else if (criteria == 2) {
                condition = (publisher[j - 1] > nextPublisher);
            }
            else if (criteria == 3) {
                condition = (price[j - 1] > nextPrice);
            }

            if (condition) {

                title[j] = title[j - 1];
                author[j] = author[j - 1];
                publisher[j] = publisher[j - 1];
                price[j] = price[j - 1];
                j--;
            }
            else {
                break;
            }
        }

        title[j] = nextTitle;
        author[j] = nextAuthor;
        publisher[j] = nextPublisher;
        price[j] = nextPrice;
    }
}

#endif