#include <iostream>

using namespace std;

class Account{
    public:
        int number;
        double balance;

    void Deposit( double value);
    void Withdraw(double value);
};
void Account::Deposit( double value){
    if(value > 0){ 
        balance += value ;
    }
    else{ 
        cout << "was no possible do it with this value"<< endl;
    }
};
void Account::Withdraw(double value){
    if(!(value > balance)){
        balance -= value;
    }
    else{
        cout << "was no possible Withdraw this value" << endl;
    }
}
int main(){
    Account personal;
    Account *ppersonal = &personal;
    personal.number = 178910;
    personal.balance = 100.52;
    cout << "balance: " << personal.balance <<endl;
    personal.Deposit(99.48);
    cout << "balance after deposit: " << personal.balance <<endl;
    personal.Withdraw(200);
    cout << "balance after withdraw: " << personal.balance <<endl;
    (*ppersonal).balance += 200;
    cout << "balance after value changed by pointer: " << personal.balance <<endl;
    ppersonal -> balance += 200;
    cout << "balance after value changed by pointer using arrow notation : " << personal.balance <<endl;
    return 0;
}