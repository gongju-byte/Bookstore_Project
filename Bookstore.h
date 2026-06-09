#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>
#include <string>

using namespace std;
const int MAX_BOOKS = 7;

class BookStore {
private:
    string title[MAX_BOOKS];
    string author[MAX_BOOKS];
    string publisher[MAX_BOOKS];
    double price[MAX_BOOKS];

public:
    BookStore();
    void insertionSort(int criteria);
    void setData(const string t[], const string a[], const string p[], const double pr[]);
    void displayBooks();

    void searchByTitle(string key);
    void searchByAuthor(string key);
    void searchByPublisher(string key);
};

inline BookStore::BookStore() {}

inline void BookStore::setData(const string t[], const string a[], const string p[], const double pr[]) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        title[i] = t[i];
        author[i] = a[i];
        publisher[i] = p[i];
        price[i] = pr[i];
    }
}

// Search by Title
inline void BookStore::searchByTitle(string key) {
    bool found = false;

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (title[i] == key) {
            cout << "\n[!] FOUND TITLE AT INDEX " << i << "\n";
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
            cout << "\n[!] FOUND AUTHOR AT INDEX " << i << "\n";
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
            cout << "\n[!] FOUND PUBLISHER AT INDEX " << i << "\n";
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

inline void BookStore::displayBooks() {
    for (int i = 0; i < MAX_BOOKS; i++) {
        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Publisher: " << publisher[i] << endl;
        cout << "Price: RM" << price[i] << endl;
        cout << "--------------------------------------------\n";
    }
}

#endif