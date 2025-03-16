#include <iostream>
#include <string>
using namespace std;

long product_calculate(string input_string)


{
    long product =1;
    int num =0;
    for(char c : input_string  )
    {
        if(isdigit(c))
        {
            num = num * 10+(c-'0');
            
            
        }
        else if (num!=0)
        {
            product*=num;
            num =0;
            
        }
    }
     
     if(num!=0){
         product*=num;
     }
       return product ;
}
    int product_test()
    {
        //test case1
        string input_string1="abcde";
        
        long R1 = product_calculate(input_string1);
        if(R1==1)
        {
            cout<<"Test Case is pass\n";
        }
        else{
            exit(1);
        }
        
        //test case2
        string input_string2="4";
        
        long R2 =product_calculate(input_string2);
        if(R2==4)
        {
            cout<<"Test Case is Pass\n";
        }
        else
        {
            exit(1);
        }
        //test case3
        string input_string3="abc8sdf9";
        
         
        long R3 =product_calculate(input_string3);
        if(R3==72)
        {
            cout<<"Test Case is Pass\n";
        }
        else
        {
            exit(1);
        }
        
        //test case4
        string input_string4="";
       
         
        long R4 =product_calculate(input_string4);
        if(R4==1)
        {
            cout<<"Test Case is Pass\n";
        }
        else
        {
            exit(1);
        }
}

    int main()
   { 
    product_test();
    
        return 0 ;
   }