#include <iostream>
#include <limits>
#include <string>
#include "Bookstore.h"
#include "Book.h"

using namespace std;

int main() {
	int input, sub;
	BookStore bookstore;
	bookstore.setData(title, author, publisher, price);

	while (true) {
		system("cls");
		cout << "----- WELCOME TO BOOKSTORE! -----" << endl;
		cout << "1. View all books" << endl;
		cout << "2. Search a book" << endl;
		cout << "3. Sort books" << endl;
		cout << "0. Exit" << endl;
		cout << "Your choice: ";

		if (!(cin >> input)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "[!] Invalid input" << endl;
			continue;
		}

		cout << endl;

		if (input == 1) {
			system("cls");
			cout << "----- VIEW BOOKS -----" << endl << endl;
			bookstore.displayBooks();
			cout << "\n[?] Press enter to continue" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.get();

		}

		else if (input == 2) {
			system("cls");
			cout << "----- SEARCH BY -----" << endl;
			cout << "1. Book Name" << endl;
			cout << "2. Book Author" << endl;
			cout << "3. Book Publisher" << endl;
			cout << "0. Exit" << endl;
			cout << "Your choice: ";
			if (!(cin >> sub)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "[!] Invalid input" << endl;
				continue;
			}
			string key;
			cin.ignore();

			if (sub == 1) {
				cout << "Enter book title: ";
				getline(cin, key);
				bookstore.searchByTitle(key);
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();
			}
			else if (sub == 2) {
				cout << "Enter author name: ";
				getline(cin, key);
				bookstore.searchByAuthor(key);
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();
			}
			else if (sub == 3) {
				cout << "Enter publisher: ";
				getline(cin, key);
				bookstore.searchByPublisher(key);
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();
			}
			else if (sub == 0) {
				continue;
			}
			else {
				system("cls");
				cout << "[!] Invalid choice." << endl;
			}
		}
		else if (input == 3) {
			system("cls");
			cout << "----- SORT BY -----" << endl;
			cout << "1. Author" << endl;
			cout << "2. Publisher" << endl;
			cout << "3. Price" << endl;
			cout << "0. Exit" << endl;
			cout << "Your choice: ";

			if (!(cin >> sub)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "[!] Invalid input" << endl;
				continue;
			}

			if (sub == 1) {

				bookstore.insertionSort(1);
				system("cls");
				cout << "----- SORTED BY AUTHOR -----" << endl;
				bookstore.displayBooks();
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();

			}
			else if (sub == 2) {

				bookstore.insertionSort(2);
				system("cls");
				cout << "----- SORTED BY PUBLISHER -----" << endl;
				bookstore.displayBooks();
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();

			}
			else if (sub == 3) {

				bookstore.insertionSort(3);
				system("cls");
				cout << "----- SORTED BY PRICE -----" << endl;
				bookstore.displayBooks();
				cout << "\n[?] Press enter to continue" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin.get();

			}
			else if (sub == 0) {
				continue;
			}
			else {
				cout << "[!] Invalid choice." << endl;
			}
		}
		else if (input == 0) {
			system("cls");
			cout << "[!] Bye Bye" << endl;
			break;
		}
		else {
			system("cls");
			cout << "[!] Invalid choice." << endl;
		}
		cout << endl;
	}

	return 0;
}