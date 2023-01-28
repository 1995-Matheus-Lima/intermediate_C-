#include <curses.h>
#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>

using namespace std;

/* 
----- Mini Project ATM ------
  -> Check balance
  -> cash withdraw
  -> User details
  -> update mobile No
*/

class ATM {                //class ATM
  private:                 // private members variables
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
  public:                 // public members functions
  // setData function is setting the data into the private members variables
  void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a){
    account_No = account_No_a; // assigning the formals arguments to the private members var's
    name = name_a;
    PIN = PIN_a;
    balance = balance_a;
    mobile_No = mobile_No_a;
  }
  // getAccountNo  function is returning the user's account no.
  long int getAccountNo(){
    return account_No;
  }
  // getName function is returning the user's name no.
  string getName(){
    return name;
  }
  // getPIN function is returning the user's PIN no.
  int getPIN(){
    return PIN;
  }
  // getBalance function is returning the user's Balance no.
  double getBalance(){
    return balance;
  }
  // getMobileNo function is returning the user's Mobile no.
  string getMobileNo(){
    return mobile_No;
  }
  // setMobile function is updating the user mobile no.
  void setMobile(string mob_prev, string mob_new){
    if(mob_prev == mobile_No){       // it will check the old mobile no
      mobile_No = mob_new;           // and Update with new, if old matches
      cout << endl << "Sucessfully update mobile number";
      std::this_thread::sleep_for(std::chrono::milliseconds(3000));
      system("clear");  //getch is to hold the screen (until user press any key )  
    }else{  //display a message in case of incorrect old mobile number
      cout << endl << "Incorrect old mobile number";
      std::this_thread::sleep_for(std::chrono::milliseconds(3000));
      system("clear");  
    }
  }
  // cashWithDraw function is used to withdraw money from ATM
  void cashWithDraw(int amount_a){
    if(amount_a > 0 && amount_a < balance){
      balance -= amount_a;
      cout << endl << "Please collect your cash";
      cout << endl << "Avaliable balance: " << balance;
      std::this_thread::sleep_for(std::chrono::milliseconds(3000));
      system("clear");  
    }else{
      cout << endl << "Invalid input or Insuficient Balance" << balance;
      std::this_thread::sleep_for(std::chrono::milliseconds(3000));
      system("clear"); 
    }
  }
};
int main(){
  int choice = 0, enterPIN;                      // enterPin and EnterAccount ==> user authentication
  long int enterAccount;
  system("clear");
  //create user Object
  ATM user_1;
  //set user details (into objetc)   (setting defeault data);
  user_1.setData(1234567,"math",111,4500.30,"9087654321");

  do{
    system("clear");
    cout <<  endl << "----- Welcome to ATM -----" << endl;
    cout <<  endl << "Enter the account number : " ; // asking the user count acount 
    cin >> enterAccount;
    cout <<  endl << "Enter the PIN number : " ; // asking the user count PIN 
    cin >> enterPIN;

    // check if enter valuers matches with user details
    if((user_1.getAccountNo() == enterAccount) && user_1.getPIN() == enterPIN){
      do{
        int amount = 0;
        string old_mobileNo, new_mobileNo;
        //user interface
        cout <<  endl << "----- Welcome to ATM -----" << endl;
        cout <<  endl << "Select Options "; 
        cout <<  endl << "1 - Check balance"; 
        cout <<  endl << "2 - Cash withdraw"; 
        cout <<  endl << "3 - Show user details";
        cout <<  endl << "4 - Update mobile number"; 
        cout <<  endl << "5 - exit" << endl;
        int choice;
        cin >> choice; 
        switch (choice){
          case 1:
            cout << endl << "Your bank balance is: " << user_1.getBalance() << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(3000));        
            system("clear");
            break;
          case 2:
            cout << endl << "Enter the amount: ";
            cin >> amount;
            user_1.cashWithDraw(amount);
            cout << endl;
            break;
          case 3:
            cout << endl << "****** User Details ********** ";
            cout << endl << "user name: " << user_1.getName();
            cout << endl << "account number: " << user_1.getAccountNo();
            cout << endl << "account Balance: " << user_1.getBalance();
            cout << endl << "Number Mobile: " << user_1.getMobileNo() << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(3000));        
            system("clear");
            break;
          case 4:
            cout << endl << "Enter old Mobile Number: ";
            cin >> old_mobileNo;
            cout << endl << "Enter new Mobile Number: ";
            cin >> new_mobileNo;
            user_1.setMobile(old_mobileNo,new_mobileNo);
            break;;
          case 5:
            exit(0);
          default:
           cout << endl <<  "Enter a valid Data!";
        }
      }while(1);
    }
  }while(1);

  return 0;
}