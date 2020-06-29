
//Given an array of integers A of size N and an integer B.

//College library has N bags,the ith book has A[i] number of pages.

//You have to allocate books to B number of students so that maximum number of pages alloted to a student is minimum.

//My solution::

int Solution::books(vector<int> &A, int B) {
    long long int l = 0, h = 0, mid, ans, num_studs, _sum;
    if(B > A.size())
        return -1;
    for(auto i : A)
        h += i;
    ans = INT_MAX;
    while(l <= h){
        mid = (l + h) / 2;
        num_studs = 1;
        _sum = 0;
        bool poss = true;
        for(auto i : A)
            if(i > mid){
                poss = false;
                break;
            }
            else if(_sum + i <= mid)
                _sum += i;
            else{
                _sum = i;
                num_studs++;
                if(num_studs > B){
                    poss = false;
                    break;
                }
            }
        if(poss){
            ans = min(ans, mid);
            h = mid - 1;
        }else
            l = mid + 1;
    }
    return ans;
}
