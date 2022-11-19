//simple use of max heap and the top element will be the answer.
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int> pq;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          pq.push(mat[i][j]);
          while(pq.size() > k){
              pq.pop();
          }
      }
  }
  return pq.top();
}