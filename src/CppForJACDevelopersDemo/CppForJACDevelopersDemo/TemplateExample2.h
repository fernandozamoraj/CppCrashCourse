#include <iostream>
#include <string>

using namespace std;

template<class number_type, class data_type>
class Node{
private:
    number_type _id;
    data_type _data;
    Node<number_type, data_type> *_next;
public:
    Node(number_type id, data_type data);
 
    //getters are const
    number_type getId() const;
    data_type getData() const;
    Node<number_type, data_type> * getNext() const;

    //setters
    void setId(number_type id);
    void setData(data_type data);
    void setNext(Node<number_type, data_type> *next);
};

template<class number_type, class data_type>
Node<number_type, data_type>::Node(number_type id, data_type data){
  _id = id;
  _data = data;
}

//getters are const
template<class number_type, class data_type>
number_type Node<number_type, data_type>::getId() const{
  return _id;
}

template<class number_type, class data_type>
data_type Node<number_type, data_type>::getData() const{
  return _data;
}

template<class number_type, class data_type>
Node<number_type, data_type> * Node<number_type, data_type>::getNext() const{
  return _next;
}

//setters
template<class number_type, class data_type>
void Node<number_type, data_type>::setId(number_type id){
  _id = id;
}

template<class number_type, class data_type>
void Node<number_type, data_type>::setData(data_type data){
  _data = data;
}

template<class number_type, class data_type>
void Node<number_type, data_type>::setNext(Node<number_type, data_type> *next){
  _next = next;
}

void runTemplate2Example() {
  Node<int,string> *nodeA = new Node<int, string>(0, "a");
  Node<int,string> *nodeB = new Node<int, string>(1, "b");
  
  nodeA->setNext(nodeB);

  cout << nodeA->getId() << " " << nodeA->getData() << endl;
  cout << nodeA->getNext()->getId() << " " << nodeA->getNext()->getData() << endl;
} 