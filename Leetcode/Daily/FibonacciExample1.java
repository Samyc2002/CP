package Leetcode.Daily;

class FibonacciExample1{  
    public static void main(String args[])  
    {    
       int pos=5;
       int ans=fibo(pos);
       System.out.println(ans);
      
    }

    static int fibo(int pos){
        if(pos<=1){
            return pos;

        }

        else{
            return fibo(pos-1)+fibo(pos-2);
        }

     }
}
  