//Convert Birr into Half, Quarter, Dime, Nickle, and Penny
#include <iostream> 
using namespace std;
int amount=0,half=0,quarter=0,dime=0,nickle=0,penny=0;
char mHalf(){ amount-=50; half++;   return 'H'; }
char mQuarter(){ amount-=25;  quarter++;  return 'Q'; }
char mDime(){ amount-=10; dime++; return 'D'; }
char mNickle(){ amount-=5; nickle++; return 'N'; }
char mPenny(){ amount-=1; penny++; return 'P'; }

int toCents(){
    while(amount!=0){
    (amount >= 50)?cout<<mHalf():cout<<"_";
    (amount >= 25)?cout<<mQuarter():cout<<"_";
    (amount >= 10)?cout<<mDime():cout<<"_";
    (amount >= 5)?cout<<mNickle():cout<<"_";
    (amount >= 1)?cout<<mPenny()<<"; ":cout<<"_";
    }
cout<<endl<<half<<" X 50 cents\n"<<quarter<<" X 25 cents\n"<<dime<<" X 10 cents\n"<<nickle<<" X 5 cents\n"<<penny<<" X 1 cents\n"; 
return 0;
}
int main() {  
    cout << "Inter Birr: ";cin>>amount;cout<<endl;amount*=100; toCents();
    return 0;
}
