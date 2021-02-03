#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1e5;
long long times[MAX];
int main(void)
{
ios_base::sync_with_stdio(0);
cin.tie(0);
long long N, M;
cin >> N >> M;
for (int i = 0; i < N; i++)
{
cin >> times[i];
}
sort(times, times + N);
long long low = 0, high = M * times[N - 1];
long long result = M * times[N - 1];
while (low <= high)
{
long long mid = (low + high) / 2;
long long sum = 0;
for (int i = 0; i < N; i++)
{
sum += mid / times[i];
}
if (sum >= M)
{
result = min(result, mid);
high = mid - 1;
}
else
{
low = mid + 1;
}
}
cout << result << "\n";
return 0;
}