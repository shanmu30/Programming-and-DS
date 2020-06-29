
//Given an array of integers A of size N and an integer B.

//College library has N bags,the ith book has A[i] number of pages.

//You have to allocate books to B number of students so that maximum number of pages alloted to a student is minimum.

//My solution::

int Solution::books(vector<int> &A, int B) {
    int N=A.size();
    int books=N-B+1;
    int ways=N-books+1;
    int minp=10000000,temp;
    for(int i=0;i<ways;i++)
    {
        temp=0;
        for(int j=i;j<i+books; j++)
        {
            temp=temp+A[j];
        }
        minp=min(minp,temp);
    }
    return minp;
}
