#include <stdio.h>

int max(int a, int b){
	return a > b ? a : b;
}

int min(int a, int b){
	return a < b ? a : b;
}

void solve() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);

  int arr[5000];
  for (int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
  }

  k = min(k , m - 1);
  int ans = 0;

  for(int i = 0; i <= k; ++i){
    int tmp = 2147483647;
  	for(int j = 0; j <= m-1-k; ++j){
      tmp = min(tmp, max(arr[i+j], arr[n-(m-(i+j))]));
    }
    ans = max(ans, tmp);
  }
  printf("%d\n", ans);
}

int main(){
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
}
