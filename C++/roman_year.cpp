#include <iostream>
#include <string>
using namespace std;
string roman(int r, int p)
{
  if(p==1)
  {
    if(r>=0 && r<=3) return std::string(r, 'I');
    if(r==4) return "IV";
    if(r>=5 && r<=8) return "V"+std::string(r-5, 'I');
    if(r==9) return "IX";
  }
  if(p==2)
  {
    if(r>=0 && r<=3) return std::string(r, 'X');
    if(r==4) return "XL";
    if(r>=5 && r<=8) return "L"+std::string(r-5, 'X');
    if(r==9) return "XC";
  }
  if(p==3)
  {
    if(r>=0 && r<=3) return std::string(r, 'C');
    if(r==4) return "CD";
    if(r>=5 && r<=8) return "D"+std::string(r-5, 'C');
    if(r==9) return "CM";
}
  if(p==4)
  {
    if(r>=0 && r<=3) return std::string(r, 'M');
  }
}
// string func()
// {
//   int a=0;
//   return std::string(a,'I');
// }

int main(int argc, char const *argv[])
{
  int n,p=1;
  string fin="";
  cout<<"Enter the number"<<endl;
  cin>>n;
  while(n>0)
  {
    int r=n%10;
    string s = roman(r,p);
    fin=s+fin;
    n=n/10;
    p++;
  }
  cout<<fin<<endl;
  return 0;
}
