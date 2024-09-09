import java.util.*;
class HelloWorld {
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Please enter a number\n");
        int n = in.nextInt();
        int fibarray[] = new int[n];
        fibarray[0] = 0;
        fibarray[1] = 1;
        fibarray[2] = 1;
        
        //Fib Array calculations and printing
        for(int i = 2; i < fibarray.length; i++)
            fibarray[i] = fibarray[i-1] + fibarray[i-2]; 
        for(int i = 0; i < fibarray.length; i++)
            System.out.print(fibarray[i] + " \n");
        
        //Setting up and filling user array
        int userray[] = new int[5];
        for(int i = 0; i != 5; i++){
             System.out.print("Please enter a number\n");
             userray[i] = in.nextInt();
        }
        //Printing User Array
        for(int i = 0; i != 5; i++)
            System.out.print(userray[i] + " ");
        System.out.print("\n");
        
        //Setting Up PartialSumray and copying Userray to it
        int PartialSumray[] = new int[5];
        System.arraycopy(userray,0,PartialSumray,0,5);
        
        for(int i = 1; i < PartialSumray.length; i++)
            PartialSumray[i] = PartialSumray[i] + PartialSumray[i-1];
        //Printing PartialSumray
        for(int i = 0; i != 5; i++)
            System.out.print(PartialSumray[i] + " ");
    }
}
