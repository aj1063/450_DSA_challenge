public:string reverseWord(string str)  {
      // Your code goes here
      int n=str.length()-1;
      for(int i=0, j=n;i<=j;i++,j--)
      {
       char tmp= str[i];
       str[i]=str[j];
       str[j]=tmp;
       
       
      }
      
      return str;
      
  }
