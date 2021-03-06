// Lab09.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int size_of_hashtable = 100;

struct Node {
	char value[1000] = "";
	Node* next = NULL;
};

int sfold(char* key) {
	unsigned int *lkey = (unsigned int *)key;
	int intlength = strlen(key) / 4;
	unsigned int sum = 0;

	for (int i = 0; i<intlength; i++) {
		sum += lkey[i];
	}

	int extra = strlen(key) - intlength * 4;
	char temp[4];
	lkey = (unsigned int *)temp;
	lkey[0] = 0;

	for (int i = 0; i<extra; i++) {
		temp[i] = key[intlength * 4 + i];
	}

	sum += lkey[0];
	return sum % size_of_hashtable;
}

void add_to_OA_hash(string &hastable) {
	string value;
	int key;
	int collisions = 0;
	cout << "value: ";
	cin >> value;
	cout << "\nkey: ";
	cin >> key;
	//insert the value given into the hash table at the key, use an if statement to check if it is used, if it is interate the collions counter
	//once the value is insterted, use a cout staement to let the user know where it was instered and the # of collisions
	int hashIndex = key % size_of_hashtable;
}

void add_to_linked_hashtable(vector<Node> &hashtable) {
	int collisions = 0;
	
	char string[1000];
	cin >> string;
	int n = sfold(string);
	cout << "n: " << n << endl;
	Node temp;
	strcpy_s(temp.value, string);
	cout << temp.value;
	Node* position_to_insert = &hashtable[n];
	while (true) {
		if (position_to_insert->next != NULL) {
			position_to_insert = position_to_insert->next;
			collisions++;
		}
		else {
			position_to_insert->next = &temp;
			cout << position_to_insert->next << endl;
			cout << "collisions: " << collisions << endl;
			return;
		}
	}
}

int main() {
	string input;
	vector<Node> linked_hashtable(100);
	string open_addressing_hashtable[100];

	//search LL next node while not null... if statements
	add_to_linked_hashtable(linked_hashtable);
	

	//note: I do not know how to implement what is required, I only know the basic idea of what we are supposed to do
}





