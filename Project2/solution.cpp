/* 
Vineeth Konjeti, Steven Dao, Jonathan Tran, Amal Sam
COSC 302
2/14/23

We create a program that allows us to use different sorting algorithms(merge, quick, qsort, and std:sort) on a linked list of values
*/

#include <iostream>
#include <algorithms>
#include <string>

using namespace std;


struct Node {
  string string;
  Node *next;
  int number;
};

struct List {
  Node *head;
  size_t size;

  List();
  ~List();

  void push_front(const string &s);
};

int main(int argc, char argv[]){

    
}