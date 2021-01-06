#include <iostream>
using namespace std;

class Calander{
  private:
    int month[12] = {31,28,31,30,31,30,31, 31, 30, 31, 30, 31};
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int key;
    int x,y;

  public:
    void setDate(){
      cin>>x;
      cin>>y;
    }
    void solution(){
      for(int i=0;i<x-1;i++){
        y+=month[i];
      }
      key = y%7;
    }

    void printDay(){
      cout<<day[key];
    }
};
int main() {
  Calander c;
  c.setDate();
  c.solution();
  c.printDay();
}