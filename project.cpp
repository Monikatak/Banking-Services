#include<conio.h>
#include<iostream.h>
class Bkfn
  {
           protected:
                     int acno;
                     char name[30];
           public:
                     void getdet();
                     void printdet();
  };
void Bkfn :: getdet()
  {
           cout<<"Please enter your account number"<<endl;
           cin>>acno;
           cout<<"Please enter your  name"<<endl;
           cin>>name;
  }
void Bkfn :: printdet()
  {
           cout<<"Account Number: "<<acno<<endl;
           cout<<"Name: ";
           puts(name);
  }
class Bank : public Bkfn
  {
           protected:
                     float balance;
                     int alt_acc;
           public:
                     Bank()
                       {
                              balance=0;
                       }
                     void details();
                     void deposit();
                     void withdraw();
                     void moneytransfer();
  };
void Bank :: deposit()
  {
          int a;
          cout<<"Enter the amount to be deposited"<<endl;
          cin>>a;
          balance+=a;
          cout<<"Account balance is now "<<balance<<endl;       
  }
void Bank :: withdraw()
  {
          int a;
          m:
          cout<<"Enter the amount to be withdrawn"<<endl;
          cin>>a;
          if(a>balance)
            {
                       cout<<"Not enough balance"<<endl;
                       goto m;
            }
          balance-=a;
          cout<<"Account balance is now "<<balance<<endl;        
  }
void Bank :: moneytransfer()
  {
          int a;   
          cout<<"Enter the account in which you want to transfer the cash"<<endl;
          cin>>alt_acc;
          cout<<"Enter the amount"<<endl;
          cin>>a;
          balance-=a;
          cout<<a<<" rupees is transferred into the account "<<alt_acc<<endl;
          cout<<"Account balance is now "<<balance<<endl;   
  }
void Bank :: details()
  {
          cout<<"Banking details are:"<<endl;
          cout<<"Balance Amount: "<<balance<<endl;   
  }
class Sharesholding : public Bkfn
  {
           protected:
                     int num[10];
                     static float value[10];
                     static char company[10][10];
           public:
                     Sharesholding()
                       {
                             for(int i=0;i<10;i++)
                               {
                                      num[i]=0;
                               }
                       }
                     void buy();
                     void sell();
                     void details();
  };
float Sharesholding :: value[10]={150,300,25,1500,600,70,190,2000,1000,200};
char Sharesholding :: company[10][10]={"Reliance","IBM","Tata","Satyam","Vodafone","Nestle","Reebok","Adidas","Nike","HCl"};
void Sharesholding :: buy()
  {
          char ch;  
          int choice,no;
          do
          {  
             cout<<"Want to buy the shares of which company?"<<endl;
             cout<<"1. Reliance"<<endl;
             cout<<"2. IBM"<<endl;
             cout<<"3. Tata"<<endl;
             cout<<"4. Satyam"<<endl;
             cout<<"5. Vodafone"<<endl;
             cout<<"6. Nestle"<<endl;
             cout<<"7. Reebok"<<endl;
             cout<<"8. Adidas"<<endl;
             cout<<"9. Nike"<<endl;
             cout<<"10. HCL"<<endl;
             cin>>choice;
             cout<<"How many shares?"<<endl;
             cin>>no;
             num[choice-1]+=no;
             cout<<"Current shares in the company: "<<num[choice-1]<<endl;
             cout<<"Want to buy shares of another company?"<<endl;
             cin>>ch;
          }while(ch=='y' || ch=='Y');  
  }
void Sharesholding :: sell()
  {
          char ch;  
          int choice,no;
          do
          {
             m:   
             cout<<"Want to sell the shares of which componey?"<<endl;
             cout<<"1. Reliance"<<endl;
             cout<<"2. IBM"<<endl;
             cout<<"3. Tata"<<endl;
             cout<<"4. Satyam"<<endl;
             cout<<"5. Vodafone"<<endl;
             cout<<"6. Nestle"<<endl;
             cout<<"7. Reebok"<<endl;
             cout<<"8. Adidas"<<endl;
             cout<<"9. Nike"<<endl;
             cout<<"10. HCL"<<endl;
             cin>>choice;
             cout<<"How many shares?"<<endl;
             cin>>no;
             if(no>num[choice-1])
               {
                         cout<<"not enough shares to sell"<<endl;
                         goto m;        
               }
             num[choice-1]-=no;
             cout<<"Current shares in the company: "<<num[choice-1]<<endl;
             cout<<"Want to sell shares of another company?"<<endl;
             cin>>ch;
          }while(ch=='y' || ch=='Y');  
  }
void Sharesholding :: details()
  {
         int c=0;   
         cout<<"Share trading details are: "<<endl;
         for(int i=0;i<10;i++)
           {
                  if(num[i]!=0)
                    {
                            c=1;   
                            cout<<"No. of shares in "<<company[i]<<": "<<num[i]<<endl;
                            cout<<"NAV of each share: "<<value[i]<<endl;  
                    }
           }
         if(c==0)
           {
                  cout<<"No shares bought of any company"<<endl;
           }
  }
class Finances : public Bkfn
  {
           protected:
                     int num[3];
                     float amount[3];
                     float interest[3];
                     int year[3];
           public:
                     Finances()
                       {
                               for(int i=0;i<10;i++)
                               { 
                                 num[i]=0;
                                 amount[i]=0;
                               }
                       }
                     void homeloan();
                     void bussloan();
                     void eduloan();
                     void details();
  };
void Finances :: homeloan()
  {
          num[0]=1;
          cout<<"Want to take a loan of how much?"<<endl;
          cin>>amount[0];
          cout<<"For how many years?"<<endl;
          cin>>year[0];
          cout<<"You are charged a total of 8% interest on home loan"<<endl;
          float total=(0.08*amount[0])+amount[0];
          interest[0]=total/(year[0]*12);
          cout<<"Hence amount to be paid per month over the next "<<year[0]<<" years is: "<<interest[0]<<endl;
  }
void Finances :: bussloan()
  {
          num[1]=1;
          cout<<"Want to take a loan of how much?"<<endl;
          cin>>amount[1];
          cout<<"For how many years?"<<endl;
          cin>>year[1];
          cout<<"You are charged a total of 12% interest on business loan"<<endl;
          float total=(0.12*amount[1])+amount[1];
          interest[1]=total/(year[1]*12);
          cout<<"Hence amount to be paid per month over the next "<<year[1]<<" years is: "<<interest[1]<<endl;    
  }
void Finances :: eduloan()
  {
          num[2]=1;
          cout<<"Want to take a loan of how much?"<<endl;
          cin>>amount[2];
          cout<<"For how many years?"<<endl;
          cin>>year[2];
          cout<<"You are charged a total of 6% interest on educational loan"<<endl;
          float total=(0.06*amount[2])+amount[2];
          interest[2]=total/(year[2]*12);
          cout<<"Hence amount to be paid per month over the next "<<year[2]<<" years is: "<<interest[2]<<endl;     
  }
void Finances :: details()
  {
          cout<<"Financial details are: "<<endl;
          int c;
          if(num[0]==1)
            {
                    c=1;
                    cout<<"You have taken home loan of amount "<<amount[0]<<endl;
                    cout<<"The amount to be paid per month over the next "<<year[0]<<" years is: "<<interest[0]<<endl;
            }
           if(num[1]==1)
            {
                    c=1;
                    cout<<"You have taken business loan of amount "<<amount[1]<<endl;
                    cout<<"The amount to be paid per month over the next "<<year[1]<<" years is: "<<interest[1]<<endl;
            }   
           if(num[2]==1)
            {
                    c=1;
                    cout<<"You have taken educational loan of amount "<<amount[2]<<endl;
                    cout<<"The amount to be paid per month over the next "<<year[2]<<" years is: "<<interest[2]<<endl;
            }       
           if(c==0)
            {
                    cout<<"No loan taken"<<endl;
            }    
  }
class Insurancepolicy : public Bkfn
  {
           protected:
                     int num[3];
                     int type[3];
           public:
                     Insurancepolicy()
                       {
                                for(int i=0;i<3;i++)
                                  {
                                       num[i]=type[i]=0;
                                  }
                       }
                     void life();
                     void automob();
                     void health();
                     void details();
  };
void Insurancepolicy :: details()
  {
          cout<<"Insurance details are: "<<endl;
          int c;
          if(num[0]==1)
            {
                    c=1;
                    if(type[0]==1)
                      {
                               cout<<"You have a premium life insurance account"<<endl;
                      }
                    else if(type[0]==2)
                      {
                               cout<<"You have a normal life insurance account"<<endl;     
                      }
            }
           if(num[1]==1)
            {
                     c=1;
                    if(type[1]==1)
                      {
                               cout<<"You have a premium automobile insurance account"<<endl;
                      }
                    else if(type[1]==2)
                      {
                               cout<<"You have a normal automobile insurance account"<<endl;     
                      }
            }   
           if(num[2]==1)
            {
                    c=1;
                    if(type[2]==1)
                      {
                               cout<<"You have a premium health insurance account"<<endl;
                      }
                    else if(type[2]==2)
                      {
                               cout<<"You have a normal health insurance account"<<endl;     
                      }
            }       
           if(c==0)
            {
                    cout<<"No insurance plan activated"<<endl;
            }
  }
void Insurancepolicy :: life()
  {
         num[0]=1;      
         int choice;      
         cout<<"What type of life insurance do you want?"<<endl;
         cout<<"1. Premium"<<endl;
         cout<<"2. Normal"<<endl;
         cin>>choice;
         switch(choice)
           {
                      case 1:
                           {
                                   type[0]=1;
                                   cout<<"You have chosen to have a premium account."<<endl;
                                   cout<<"You will have to pay an amount of 10,000 before the 10th of every month"<<endl;
                                   break;
                           } 
                      case 2:
                           {
                                   type[0]=2;
                                   cout<<"You have chosen to have a normal account."<<endl;
                                   cout<<"You will have to pay an amount of 4,000 before the 10th of every month"<<endl;
                                   break;
                           }
           }
  }
void Insurancepolicy :: automob()
  {
         num[1]=1;      
         int choice;      
         cout<<"What type of life insurance do you want?"<<endl;
         cout<<"1. Premium"<<endl;
         cout<<"2. Normal"<<endl;
         cin>>choice;
         switch(choice)
           {
                      case 1:
                           {
                                   type[1]=1;
                                   cout<<"You have chosen to have a premium account."<<endl;
                                   cout<<"You will have to pay an amount of 3,000 before the 10th of every month"<<endl;
                                   break;
                           } 
                      case 2:
                           {
                                   type[1]=2;
                                   cout<<"You have chosen to have a normal account."<<endl;
                                   cout<<"You will have to pay an amount of 1,000 before the 10th of every month"<<endl;
                                   break;
                           }
           }
  }
void Insurancepolicy :: health()
  {
         num[2]=1;      
         int choice;      
         cout<<"What type of life insurance do you want?"<<endl;
         cout<<"1. Premium"<<endl;
         cout<<"2. Normal"<<endl;
         cin>>choice;
         switch(choice)
           {
                      case 1:
                           {
                                   type[2]=1;
                                   cout<<"You have chosen to have a premium account."<<endl;
                                   cout<<"You will have to pay an amount of 5,000 before the 10th of every month"<<endl;
                                   break;
                           } 
                      case 2:
                           {
                                   type[2]=2;
                                   cout<<"You have chosen to have a normal account."<<endl;
                                   cout<<"You will have to pay an amount of 2,000 before the 10th of every month"<<endl;
                                   break;
                           }
           }
  }
int main()
  {
          cout<<"Welcome to Banking and Financial Services"<<endl;
          Bkfn b1;
          b1.getdet();
          Insurancepolicy i1;
          Finances f1;
          Sharesholding s1;
          Bank k1;
          for(;;)
          {
          cout<<"Please enter your choice"<<endl;
          cout<<"1. Banking"<<endl;
          cout<<"2. Share Trading"<<endl;
          cout<<"3. Financing"<<endl;
          cout<<"4. Insurance"<<endl;
          cout<<"5. Check personal details"<<endl;
          cout<<"6. Exit"<<endl;
          int choice;
          cin>>choice;
          switch(choice)
            {
                        case 1:
                             {
                                     int option;
                                     cout<<endl<<"What do you want to do"<<endl;
                                     cout<<"1. Money Transfer"<<endl;
                                     cout<<"2. Deposit Money"<<endl;
                                     cout<<"3. Withdraw Money"<<endl;
                                     cout<<"4. Go back"<<endl;
                                     cin>>option;
                                     switch(option)
                                       {
                                                   case 1:
                                                        {
                                                              k1.moneytransfer();
                                                              break;
                                                        }
                                                   case 2:
                                                        {
                                                              k1.deposit();
                                                              break;
                                                        }
                                                   case 3:
                                                        {
                                                              k1.withdraw();
                                                              break;
                                                        }
                                                   case 4:
                                                        {
                                                              break;
                                                        }
                                                   default:
                                                        {
                                                              cout<<"Invalid choice"<<endl;
                                                        }
                                       }
                                     break;
                             }
                        case 2:
                             {
                                     int option;
                                     cout<<endl<<"What do you want to do"<<endl;
                                     cout<<"1. Buy Shares"<<endl;
                                     cout<<"2. Sell Shares"<<endl;
                                     cout<<"3. Go back"<<endl;
                                     cin>>option;
                                     switch(option)
                                       {
                                                   case 1:
                                                        {
                                                              s1.buy();
                                                              break;
                                                        }
                                                   case 2:
                                                        {
                                                              s1.sell();
                                                              break;
                                                        }
                                                   case 3:
                                                        {
                                                              break;
                                                        }
                                                   default:
                                                        {
                                                              cout<<"Invalid choice"<<endl;
                                                        }
                                       }
                                     
                                     break;    
                             }
                        case 3:
                             {
                                     int option;
                                     cout<<endl<<"What do you want to do"<<endl;
                                     cout<<"1. Home Loan"<<endl;
                                     cout<<"2. Business Loan"<<endl;
                                     cout<<"3. Educational loan"<<endl;
                                     cout<<"4. Go back"<<endl;
                                     cin>>option;
                                     switch(option)
                                       {
                                                   case 1:
                                                        {
                                                              f1.homeloan();
                                                              break;
                                                        }
                                                   case 2:
                                                        {
                                                              f1.bussloan();
                                                              break;
                                                        }
                                                   case 3:
                                                        {
                                                              f1.eduloan();
                                                              break;
                                                        }
                                                   case 4:
                                                        {
                                                              break;
                                                        }
                                                   default:
                                                        {
                                                              cout<<"Invalid choice"<<endl;
                                                        }
                                       }
                                     break;
                             }
                        case 4:
                             {
                                     int option;
                                     cout<<endl<<"What do you want to do"<<endl;
                                     cout<<"1. Life Insurance"<<endl;
                                     cout<<"2. Automobile Insurance"<<endl;
                                     cout<<"3. Health Insurance"<<endl;
                                     cout<<"4. Go back"<<endl;
                                     cin>>option;
                                     switch(option)
                                       {
                                                   case 1:
                                                        {
                                                              i1.life();
                                                              break;
                                                        }
                                                   case 2:
                                                        {
                                                              i1.automob();
                                                              break;
                                                        }
                                                   case 3:
                                                        {
                                                              i1.health();
                                                              break;
                                                        }
                                                   case 4:
                                                        {
                                                              break;
                                                        }
                                                   default:
                                                        {
                                                              cout<<"Invalid choice"<<endl;
                                                        }
                                       }
                                     break;
                             }
                        case 5:
                             {
                                     b1.printdet();
                                     cout<<endl;
                                     f1.details();
                                     cout<<endl;
                                     k1.details();
                                     cout<<endl;
                                     i1.details();
                                     cout<<endl;
                                     s1.details();
                                     cout<<endl;
                                     break;
                             }
                        case 6:
                             {
                                     cout<<"Exited"<<endl;
                                     getch();
                                     exit(1);
                             }
                        default:
                             {
                                     cout<<"Invalid choice"<<endl;
                             }
            }
          }
          getch();
          return 0;
  }
