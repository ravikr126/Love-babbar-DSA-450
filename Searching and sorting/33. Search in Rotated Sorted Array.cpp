class Solution {
public:
    int findMinPos(vector<int>arr, int beg, int end)
{
int n=end+1;
if(beg==end)
return beg;

    int mid = beg + (end - beg)/2;
    int next = (mid+1)%n;
    int prev = (mid-1+n)%n;
    
    if(arr[mid]<arr[next] && arr[prev]>arr[mid])
        return mid;
    else if(arr[end]>arr[mid])
        return findMinPos(arr,beg,mid-1);
    else
        return findMinPos(arr,mid+1,end);
}

int BS(vector<int>arr, int key, int start, int end, bool isDescend){
    
    if(start > end) return -1;
    
    int mid = start + (end - start)%2;
    
    if(arr[mid] == key) return mid;
    else if(arr[mid] > key){
        if(isDescend) 
            return BS(arr, key, mid+1, end, isDescend);
        else    
            return BS(arr, key, start, end-1, isDescend);    
    } 
    else{
        if(isDescend) 
            return BS(arr, key, start, mid-1, isDescend);
        else
            return BS(arr, key, mid+1, end, isDescend);
    }
        
}

int search(vector<int>& arr, int key) {
    int n = arr.size();
    int index = findMinPos(arr, 0, n-1);
    int isDescend = false;
    
    int rightSide = BS(arr, key, index, n-1, isDescend);
    if(rightSide == -1){
        //check for left side part by doing order acounistic search
        int prevIndex = (index - 1 + n)%n;
            
        if(arr[0] < arr[prevIndex]){ //sorted in ascending order
            return BS(arr, key, 0, prevIndex, isDescend);
        }else{
            isDescend = true;
           return BS(arr, key, 0, prevIndex, isDescend);
        }
    }  
    
    return rightSide;
}
};