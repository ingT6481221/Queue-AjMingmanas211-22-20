#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc,char *argv[]) {
Queue q;
  int i,price;
  for(i=1;i<argc;i++){
    if(argv[i][0]=='x'){
      price=q.dequeue();
      cout<<"You have to pay "<<price<<endl;
      int money,change;
      do{
        cout<<"Cash: ";
        cin>>money;
        if(money==price)
        cout<<"Thank you"<<endl;
        
        else if(money>price){
          change=money-price;
          cout<<"Your change is "<<change<<endl;
        }
      }while(money<price);{
        //cout<<"Not enough cash"<<endl;
      }
    }
    else{
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      i++;
    }
  }
  /*q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();//5
  q.enqueue(7);
  q.dequeue();//1
  
  q.enqueue(6);
  q.dequeue();//
  q.dequeue();
  
 q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);*/
  cout<<"End of program"<<endl;

  }
