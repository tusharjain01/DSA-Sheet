int Solution::MaximumSumSquareSubMatrix(vector<vector<int> > &A, int B) {
    int n=A.size(),ans=-1;
    int m=A[0].size();
    int curr_sum[n-B+1];
    memset(curr_sum,0,sizeof(curr_sum));
    for(int k=0;k<n-B+1;k++)
    {
        
    for(int i=0;i<B;i++)
    {
        for(int j=0;j<B;j++)
        {
            curr_sum[k]+=A[k+i][j];
        }
    }
    }
    int max_sum=INT_MIN;
    for(int i=0;i<n-B+1;i++)
    {
        
        max_sum=max(curr_sum[i],max_sum);
    }
    for(int i=0;i<n-B+1;i++)
    {
        for(int j=B;j<m;j++)
        {
            for(int k=i;k<B+i;k++)
            {
                curr_sum[i]+=A[k][j]-A[k][j-B];
            }
            
            if(curr_sum[i]>max_sum)
            {
                max_sum=curr_sum[i];
            }
        }
        
    }
    return max_sum;
}
