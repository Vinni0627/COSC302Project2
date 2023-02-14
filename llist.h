#ifndef LLIST_H
#define LLIST_H

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

#endif