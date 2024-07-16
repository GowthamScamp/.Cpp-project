#include<iostream>
using namespace std;

class publication{
protected:
    float price;
public:
    void getdate(){
    cout<<"enter your Price:\n";
    cin>>price;
    }
    void putdate(){
    cout<<"Price is: "<<price<<endl;
    }
};

class book:public publication{
private:
    int pagecount;
public:
    void getdate(){
        cout<<"enter your Page-count:\n";
        cin>>pagecount;
        publication::getdate();
        }
        void  putdate(){
        cout<<"page-count is :"<<pagecount<<endl;
        publication::putdate();
        }
};

class tape:public publication{
private:
    float time;
public:
    void getdate(){
    cout<<"enter  Time in Minutes:\n";
    cin>>time;
      publication::getdate();
    }
    void putdate(){
    cout<<"The Time is :"<<time<<endl;
     publication::putdate();
    }
};


int main(){
  book b;
  tape t;
  int n;
  cout<<"1.  Book Information "<<endl;
  cout<<"2.  Tape Information" <<endl;
  cout<<"__________________________________________"<<endl;
  cout<<"Enter Your choice:\n";
  cin>>n;
switch(n){
    case 1:
            cout<<"------Book information---------"<<endl;
            b.getdate();
            b.putdate();
        break;
    case 2:
           cout<<"------Tape information---------"<<endl;
            t.getdate();
            t.putdate();
            break;
    default:
        cout<<"Please check the number you entered";
}


}
