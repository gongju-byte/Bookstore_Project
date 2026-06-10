#ifndef SEARCHING_H
#define SEARCHING_H
#include <iostream>
#include <string>
#include "BookStore.h"

using namespace std;

// Search by Title
inline void BookStore::searchByTitle(string key) {
    bool found = false;

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (title[i] == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << title[i] << endl;
            cout << "Author    : " << author[i] << endl;
            cout << "Publisher : " << publisher[i] << endl;
            cout << "Price     : RM " << price[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "\n[!] Book not found.\n";
}

// Search by Author
inline void BookStore::searchByAuthor(string key) {
    bool found = false;

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (author[i] == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << title[i] << endl;
            cout << "Author    : " << author[i] << endl;
            cout << "Publisher : " << publisher[i] << endl;
            cout << "Price     : RM " << price[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "\n[!] Author not found.\n";
}

// Search by Publisher
inline void BookStore::searchByPublisher(string key) {
    bool found = false;

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (publisher[i] == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << title[i] << endl;
            cout << "Author    : " << author[i] << endl;
            cout << "Publisher : " << publisher[i] << endl;
            cout << "Price     : RM " << price[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "\n[!] Publisher not found.\n";
}

#endif
