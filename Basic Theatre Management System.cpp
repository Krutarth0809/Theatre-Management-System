#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
class admin {
private:
  int pass;
  int username;

protected:
  int rate_movie;
  char movie1[20];
  

public:
  //admin( int rate) {}
  admin() {
    
    cout << "input today's rate" << endl;
    cin >> rate_movie;
  }
  void change_rate() {
    cout << "enter the new rate" << endl;
    cin >> rate_movie;
  }
  void movies() {
    cout << "enter first movie for today" << endl;
    cin >> movie1;
    
  }
  friend void total();
};

class bookings : virtual protected admin {
private:
  int i, j, ii, jj, nn;

protected:
  int n;
  int seats[10];
  int seatss[5][5]{{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};

public:
  int count = 0;
  void book_ticket() {
    cout<<"the movie is : "<<movie1<<endl;
    cout << "input no. of tickets" << endl;
    cin >> n;
    cout << endl;

    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        cout << " "<<seatss[i][j]<<" ";
      }
      cout << endl;
    }

    for (i = 0; i < n; i++) {
      cout << "enter seat number : " << endl;
      cin >> nn;
      for (ii = 0; ii < 5; ii++) {
        for (jj = 0; jj < 5; jj++) {
          if (nn == seatss[i][j]) {
            count = count + 1;
            seats[ii] = seatss[ii][jj];
            seatss[ii][jj] = 0;
          }
        }
      }
    }
  }

  friend void total();

};

class food {
protected:
  int rate_pizza=0;
  int rate_popcorn=0;
  int rate_sandwich=0;
  int rate_sizzler=0;
  int rate_kiwispitzer=0;
  int rate_liit=0;
  int rate_irishjameson=0;
  int total = 0;
  int a, m, j;
  int s;

private:
  int fitem;
  int ditem;

  int i, ii;
  int nn;
  int x;

public:
  void erate() {
    cout << "enter pizza rate;" << endl;
    cin >> rate_pizza;
    cout << "enter popcorn price :" << endl;
    cin >> rate_popcorn;
    cout << "enter sandwich rate :" << endl;
    cin >> rate_sandwich;
    cout << "enter sizzler price :" << endl;
    cin >> rate_sizzler;
    cout << "enter kiwi spitzer price :" << endl;
    cin >> rate_kiwispitzer;
    cout << "enter liit rate :" << endl;
    cin >> rate_liit;
    cout << "enter irish jameson price :" << endl;
    cin >> rate_irishjameson;
  }
  void getfitem() {
    cout << "items available are " << endl;
    cout << " 1)pizza : " << rate_pizza << endl;
    cout << "2)popcorn : " << rate_popcorn << endl;
    cout << "3)sandwich : " << rate_sandwich << endl;
    cout << "4)sizzler : " << rate_sizzler << endl;
    cout << "thank you : " << endl;
  }
  void getditem() {
    cout << "1)kiwi spitzer : " << rate_kiwispitzer << endl;
    cout << "2) liit : " << rate_liit << endl;
    cout << "3) irish jameson " << rate_irishjameson << endl;
    cout << "thank you " << endl;
  }
  void selectit() {
    cout << "what would you like to have :" << endl;
    cout << "press 1 for food menu" << endl;
    cout << "press 2 for drinks menu " << endl;
    cin >> i;
    if (i == 2) {
      getditem();
      cout << "how many items would you like to have ?" << endl;
      cin >> s;
      for (nn = 0; nn < s; nn++) {
        cout << "type the numbers of the item :" << endl;
        cin >> x;
        if (x == 1) {
          cout << "kiwi spitzer " << endl;
          total = total + rate_kiwispitzer;
        } else if (x == 2) {
          cout << "liit " << endl;
          total = total + rate_liit;
        } else if (x == 3) {
          cout << " jameson " << endl;
          total = total + rate_irishjameson;
        } else if (x > 3) {
          cout << "invalid input ";
        }
      }
    } else if (i == 1) {
      getfitem();
      cout << "how many items would you like to have :" << endl;
      cin >> a;
      for (m = 0; m < a; m++) {
        cout << "type the number of the item " << endl;
        cin >> j;
        if (j == 1) {
          cout << "pizza" << endl;
          total = total + rate_pizza;
        } else if (j == 2) {
          cout << "popcorn " << endl;
          total = total + rate_popcorn;
        } else if (j == 3) {
          cout << "sandwich " << endl;
          total = total + rate_sandwich;
        } else if (j == 4) {
          cout << "sizzler " << endl;
          total = total + rate_sizzler;
        } else if (j > 4) {
          cout << "invalid input :";
        }
      }
    }
  }
  friend void total();
  friend class print_ticket;
};

class print_ticket : virtual protected bookings, virtual protected food {
private:
  int i, a,nnn;

protected:
public:
int tot=0,totall=0;
  void printt_ticket(bookings b, food f) {
    cout << "welcome to rajmandir cinemas" << endl;
    cout << "no of tickets : " << b.count;
    cout << "your seats are :" << endl;
    for (i = 0; i < nnn; i++) {
      cout << seats[i];
    }
    cout<<endl;
    cout<<"your total is : "<<count*rate_movie;
    tot=count*rate_movie;
    cout << "food items selected by you : " << endl;
    cout << f.s + f.a<<endl;
    ofstream ofile;
    ofile.open("ticketcopy.txt");
    ofile << "welcome to rajmandir cinemas" << endl;
    ofile << "no of tickets : " << b.count;
    ofile << "your seats are :" << endl;
    for (i = 0; i < nnn; i++) {
      
      cout << seats[i];
      ofile<<seats[i]<<endl;
    }
    ofile << "food items selected by you : " << endl << f.s + f.a;
    ofile<<"total for food : "<<endl<<total;
    totall=total;
    ofile.close();
  }
  void totalll(){
  int total_seats=0;
  int food=0;
  total_seats=total_seats+tot;
  food=food+totall;
  ofstream oofile;
  oofile.open("daytotal.txt",ios::app);
  oofile<<" updated !!!"<<endl<<total_seats;
  oofile<<endl<<food;
  oofile.close();
}
};

int main() {
  int x,user,password;
  admin a;
  bookings b;
  food f;
  print_ticket p;
  cout<<"input username : "<<endl;
  cin>>user;
  cout<<"input password : "<<endl;
  cin>>password;
  if (user==0000 && password==0000)
  {
  do{
  cout<<"WELCOME TO RAJ MANDIR CINEMAS"<<endl;
  cout<<"1.Change Rate"<<endl<<"2.change movies"<<endl<<"3.Book ticket"<<endl<<"4.Enter Rate for Food Items"<<endl<<"5.Get Food Item"<<endl<<"6.Get Drinks"<<endl<<"7.Select Food and Drinks Menu"<<endl<<"8.Print Ticket"<<endl;
  cin>>x;
  
  switch(x)
    {
      case 1:
      a.change_rate();
      break;
      case 2:
      a.movies();
      break;
      case 3:
      b.book_ticket();
      p.totalll();
      break;
      case 4:
      f.erate();
      break;
      case 5:
      f.getfitem();
      break;
      case 6:
      f.getditem();
      break;
      case 7:
      f.selectit();
      p.totalll();
      break;
      case 8:
      p.printt_ticket(b,f);
      break;
      default:cout<<"enter x !!!";
      
    }}
    while (x!=9);
  }
  else
    cout<<"invalid username or password !!! ";
  
return 0;  
}
