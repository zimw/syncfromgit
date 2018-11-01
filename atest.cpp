int solution3(vector<int>& A, int X) {
 int N = A.size();
 if (N == 0) {
  return -1;
 }
 int l = 0;
 int r = N - 1;
 while (l < r && A[l]!=X) {
  int m = (l + r + 1) / 2;
  if (A[m] > X) {
   r = m - 1;
  }
  else {
   l = m;
  }
 }
 if (A[l] == X) {
  return l;
 }
 return -1;
}