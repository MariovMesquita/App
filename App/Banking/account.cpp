#include "account.h"
#include "time.h"

Account::Account(float balance, string iban, unsigned int account_nr, bool status)
    :balance(balance),
    iban(iban),
    account_nr(account_nr),
    status(status)
{}

Account::Account(const string& type)
    :Account()
{
    this->type=type;
}


Account::Account(const Account &account)
    :balance(account.balance),
    iban(account.iban),
    account_nr(account.account_nr),
    status(account.status)
{}

Student::Student(float balance, string iban, unsigned int account_nr, bool status)
    :Account(balance, iban, account_nr, status)
{}

Student::Student(const string& type)
    :Account(type)
{}

Student::Student(const Student &student)
    :Account(student)
{}

Retired::Retired(float balance, string iban, unsigned int account_nr, bool status)
    :Account(balance, iban, account_nr, status)
{}

Retired::Retired(const Retired &retired)
    :Account(retired)
{}

Retired::Retired(const string& type)
    :Account(type)
{}

Normal::Normal(float balance, string iban, unsigned int account_nr, bool status)
    :Account(balance, iban, account_nr, status)
{}

Normal::Normal(const Normal &normal)
    :Account(normal)
{}

Normal::Normal(const string& type)
    :Account(type)
{}

ostream& operator << (ostream& os, const Account &account)
{
    os<<"*** "<<account.type<<" ***"<<endl;
    os<<"Account Number "<<account.account_nr<<endl;
    os<<"IBAN code: "<<account.iban<<endl;
    os<<"Balance: "<<account.balance<<endl;
    os<<"ACC status: " <<account.status<<endl;
    return os;
}

Account::RandomAccountNumber(){
    unsigned int v1,i;
    srand(i); //srand takes integer in order to seek the seed
    for(i=0;i<100;i++){
    v1= rand() % 10000+1;

}
  return v1;
}
//ficheiros de transferências para todos os registos de movimentos feitos
float Account :: withdraw(float amount){
if (amount>=0){
    if ((balance>=amount)){
    balance-=amount;
   }
   else {
       cout << "You dont have nuff money" << endl;

}
}
else {
cout << "Positive amount values only, please try again " << endl;
}
return balance;
}

//fazer objetos movimentos
//dois 2 ids
//e o amount
//objeto encontrar as contas
//identificar bancos
//pede obj conta
//conta efetua deposito

float Account :: deposit(float amount){
if (amount>=0){
        balance+=amount;
    }
else {
    cout << "positive values only, please try again" << endl;
}
return balance;
}


/*
unsigned int Account::check_balance(){
    int new_value;
    new_value=balance;
}
*/
//isto faz o mesmo q get()
void Account:: block (){

status = 0;

}

Account::~Account()
{

}
