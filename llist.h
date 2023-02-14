#ifndef LLIST_H
#define LLIST_H

struct Node {
  std::string string;
  int         number;
  Node       *next;
};

struct List {
  Node       *head;
  size_t      size;

  List();
  ~List();

  void push_front(const std::string &s);
};

#endif