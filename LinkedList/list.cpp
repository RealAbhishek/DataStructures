#include "list.h"

using namespace std;

void printList(Node* head)
{
  if(head == NULL)
    return;
  else
  {
    std::cout<<head->getValue()<<std::endl;
    head = head->getNext();
    printList(head);
  }
}

int main()
{
  Node *head = new Node();
  head->addValue(10);
  Node *second = new Node();
  Node *third = new Node();
  head->addNext(second);
  second->addValue(20);
  second->addNext(third);
  third->addValue(30);
  third->addNext(NULL);
  
  printList(head);

  return 0;
}
