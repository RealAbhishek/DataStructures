#include<iostream>

class Node
{
  private:
    int data;
    Node *next;
  public:
    Node()
    {
      data = 0;
      next = nullptr;
    }

    Node(int value)
    {
      Node *l = new Node();
      l->addValue(value);
    }

    inline void addValue(int value)
    {
      data = value;
    }
    inline int getValue()
    {
      return data;
    }
    inline void addNext(Node *_next)
    {
      next = _next;
    }
    inline Node* getNext()
    {
      return next;
    }

    ~Node(){}
};
