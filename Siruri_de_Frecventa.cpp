#include <iostream>
using namespace std;

/*
The problem: M candidates are participating in the elections.
On the day of the election, N voters cast their votes. Find how many votes each candidate received.

Reformulation: Given a string with N elements, find how many times each element from 1 to M appears in the given string.

Solution: use a frequency string
 input: N=4, M=100, v[]=25 28 25 30
output: 2 1 1
*/

int main()
{
  int N, M, v[1001], AP[1001];
  cin>>N>>M;
  // Initialize with 0 each position to be able to count the appearances
  for (int i = 1; i <= M; ++i) { 
    AP[i] = 0;
  }
  
  for (int i = 1;i <= N; i++) {
    cin>>v[i];
  }
  // update the appearances string
  for (int i = 1; i <= N; ++i) {
    ++AP[v[i]];// increase the number of appearances of v[i] item
  }


  for (int i = 1; i <= M; ++i) {
    cout<<"The element "<<i<<" appears by "<<AP[i]<<" times\n";
  }
  return 0;
}
