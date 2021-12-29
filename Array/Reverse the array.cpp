
string reverseWord(string str){
    
  //Your code here
  //Brute force
  int n=str.size();
    for(int i=0;i<str.size()/2;i++)
    {
        swap(str[i],str[n-1-i]);
    }
   return str;
  
  //2nd method
  //using stl
  reverse(str.begin(),str.end());
  return str;
}
