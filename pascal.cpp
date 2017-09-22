#include <iostream>
#include <vector>
using namespace std;

int factor(int x)
{   int y=1;
    for( int i=1;i<=x;++i) y=y*i;
    return y;
}

int main()
{
    // TODO: написать вывод треугольника Паскаля с использованием vector.
    //
    // Вид треугольника:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // ...
int i;
int res;
cout << "Input number of lines\n";
cin >> i;
vector <vector <int> > v(i);
for(int j=0;j<i; ++j){
 for(int k=0;k<=j;++k)
 {cout << j <<" "<< factor(j)<< " ";
res=factor(j)/(factor(k)*factor(j-k));
v[j].push_back(res);}}
for(int j=0;j<i; ++j){
 for(int k=0;k<=j;++k)
      {cout<< v[j][k]<< " ";}
cout << "\n";
}
    return 0;
}

