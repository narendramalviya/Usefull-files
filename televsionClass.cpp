#include <iostream>
using namespace std;
class Television
{
private:
    string brand;
    int size;
    float price;

public:
    Television() {}
    Television(string brand, int size, float price){
             this->brand = brand;
             this->size = size;
             this->price =price;

    }
  
    void printTelevision(){
        cout<<"Brand - "<<this->brand<<" Size - "<<this->size<<" price - "<<this->price;
    }
};
class TelevisionHandler{
       
    public:
    TelevisionHandler(){

    }
     void printArrayOfPossiblyNull(Television *obj,int n){
         for (int i = 0; i < n; i++){
                    *(obj+i) = NULL;
                           
                  }
                  for (int i = 0; i < n; i++){
                        if(obj[i]== NULL)
                            cout<<"Slot -"<<i<<" NULL"<<endl;
                  }
                  cout<<endl;
                  
                  obj[0] = new Television("samsung",43,100000);
                  obj[1] = new Television("akai",43,20000);
                  obj[4] = new Television("mi",43,10000);
                  obj[9] = new Television("sony",43,20000);

                  for (int i = 0; i < n; i++){
                        if(obj[i]== NULL)
                            cout<<"Slot -"<<i<<" NULL"<<" ";

                       else{
                           obj[i]->printTelevision();
                       }
                  }
                //   for (int i = 0; i < n; i++){
                //         if(obj[i]== NULL){
                //              cout<<"Enter Brand ,Size, price"<<endl;
                //              string brand;
                //              int size;
                //              float price;
                //              cin>>brand>>size>>price;
                //             obj[i] = new Television(brand,size,price);    
                //         }

                //        else{
                //            obj[i]->printTelevision();
                //        }
                //   }

                //   for (int i = 0; i < n; i++){
                //         if(obj[i]== NULL)
                //             cout<<"Slot -"<<i<<" NULL"<<" ";

                //        else{
                //            obj[i]->printTelevision();
                //        }
                //   }
     }
};
int main()
{
     Television *obj = new Television[10];
     TelevisionHandler *Array_Of_Possibly_Null_Objects = new TelevisionHandler();

     Array_Of_Possibly_Null_Objects->printArrayOfPossiblyNull(obj,10);

    return 0;
}