//Breckin Hume
//Linked List Program
//March 31st 2022
//Mika Morgan
#include <iostream>
using namespace std;


struct Node
{
  int data;
  Node * next;
  Node * previous;

  Node(int d)
  {
    data = d;
    next = NULL;
    previous = NULL ;
  }
};

//Making the Class
class list
{
  private:
    Node * head;
    Node * tail;
  public:
    list()
    {
      head = NULL;
      tail = NULL;
    }

    //Function for inserting nodes at the front of the list
    void frontsert(int d)
    {
      
      Node * temp = new Node(d);
      
   
      if(head == NULL)
      {
       
        head = temp;
        tail = temp;
      }

      else
      {
        temp -> next = head;
        head -> previous = temp;
        head = temp;
      }
      
    } 

    //function to add nodes to the end of the list
    void backsert(int d)
    {
      
      Node * temp = new Node(d);
      
     
      if(head == NULL)
      {
         
          head = temp;
          tail = temp;
      }     
      else
      {
        temp -> previous = tail;
        tail -> next = temp;
        tail = temp;
      }

      
      delete temp;
    } 

     //In order function
    void inordersert(int d)
    {
       
      Node * temp = new Node(d);
      
      
      if(head == NULL)
      {
       
        head = temp;
        tail = temp;
      }
        
      else
      {
        if (temp -> data < head -> data)
          frontsert(d);

        else
        {
          
          Node * traverse = head;
          Node * trailing = NULL;   

          
          while (temp -> data > traverse -> data && traverse)
          {
            trailing = traverse;
            traverse = traverse -> next;
          }
          if (traverse == NULL)
            backsert(d);
          else
          {
            temp -> next = traverse;
            traverse -> previous = temp;
            trailing -> next = temp;
            temp -> previous = trailing;
          }

        }
      }
    } 

    //Remove function
    void remove(int d)
    {
      if (d == head -> data && head == tail)
      {  
        head = NULL;
        tail = NULL;
      } 
      else if(d == head -> data)
      {
        Node * temp = head;

        head = head -> next;
        delete temp;
        head -> previous = NULL;
        temp = NULL;
      } 
      else if(d == tail -> data)
      {
        tail = tail -> previous;

       
        delete tail -> next;
        tail -> next = NULL;
      }

 
      else
      {
        Node * traverse = head;
        Node * trailing = NULL;
        while(traverse && traverse -> data != d)
        {
          trailing = traverse;
          traverse = traverse -> next;
        }
        if(traverse != NULL)
        {
          trailing -> next = traverse -> next;
          traverse -> next -> previous = trailing;
          delete traverse;
          traverse = NULL;
        }
      }
    } 
    //Printout function
    void print()
    {
      Node * traverse = head;
      while(traverse)
        {
          cout << traverse -> data << " ";
          traverse = traverse -> next;
        }
    }

    //Size function
    int size()
    {
      int count = 0;
      Node * traverse = head;

      while(traverse != NULL)
      {
        count++;
        traverse = traverse -> next;
      }

      return count;
    } 

};
   int main()
  {  
    list L1; 
  //Using the fronsert function  
  L1.frontsert(3);
  L1.frontsert(6);
  L1.frontsert(8);
  L1.frontsert(25);
  //Using the backsert function
  L1.backsert(19); 
  L1.backsert(7);
  L1.backsert(38);
  L1.backsert(78);
  //Using the in order insert function
  L1.inordersert(82);
  L1.inordersert(12);
  L1.inordersert(33);
  //Using the remove function
  L1.remove(82);
  L1.remove(12);
  L1.remove(25);
  //Using the print function
  L1.print();
  //Using the size function
  L1.size();

   
    
  }
