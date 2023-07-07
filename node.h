#ifndef node_h
#define  node_h

class NODE{
	 int ord_number,qty;
	NODE *nextPtr;
public:
	NODE(int,int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int o,int q){
	ord_number=o;
  qty=q;
	nextPtr=NULL;

}
int NODE::get_value(){
	int price;
  switch(ord_number){
    case 1://ramen
    cout<<"Ramen"<<endl;
    price=100*qty;
    break;
    case 2://somtum
    cout<<"Somtum"<<endl;
    price=20*qty;
    break;
    case 3: //fried chicken
    cout<<"Fried Chicken"<<endl;
    price=50*qty;
    break;
  }
    
    
  return price;

}


NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 //cout<<"deleting " <<ord_number<<endl;

}


#endif