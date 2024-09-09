import java.util.*;

class HelloWorld



{
    public static void main(String[] args)
    {
        //Establishing my scanner
        Scanner in = new Scanner(System.in);
        
        //Requesting and reading in a number from user
        System.out.print("Please Enter A Number\n");
        int UserNum = in.nextInt();
        int Sum = 0;
        
        //Printing the number back
        System.out.print(UserNum);
        System.out.print("\n");
        
        //Checking if odd or even and printing results
        //If even
        if(UserNum % 2 == 0)
            System.out.print("Your Number is Even\n");
            
        //If odd        
            else if(UserNum % 2 != 0)
                System.out.print("Your Number is Odd\n");
                
        //Running a check for if the number is zero        
        if(UserNum == 0)
            System.out.print("Your Number is 0\n");
        
        //Checking if the number is negative and printing results of Sum
        if(UserNum < 0)
        {
            //If negative
            System.out.print("Your Number is Negative\n");
                 for(int i = 0; UserNum!= i;)
                 {
                    Sum += i;
                    i++;
                 }
            System.out.print("The sum from 1 to your number is ");
            System.out.print(Sum);
            System.out.print("\n");
        }
        //Checking if number is positive and printing results of Sum 
            else if(UserNum > 0)
            {
                //If positive
                System.out.print("Your Number is Positive\n");
                for(int i = 0; UserNum!= i;)
                 {
                    Sum += i;
                    i++;
                 }
            System.out.print("The sum from 1 to your number is ");
            System.out.print(Sum);
            System.out.print("\n");
            }  
        String space = in.nextLine();
        
        //Requesting and establishing users first and last name
        System.out.print("What is your first name?\n");
        String Fname = in.nextLine();
        System.out.print("What is your last name?\n");
        String Lname = in.nextLine();
        
            if(Lname.equals(Fname))
                System.out.print("Interesting, your names are the same\n");
        
        System.out.print("How many people will attend the pizza party?\n");
        int party = in.nextInt();
        System.out.print("How many pizzas will you order?\n");
        int pizzas = in.nextInt();
        int slices = pizzas * 8;
        int share = slices / party;
        System.out.print("Everyone will recieve " + share + " slices each\n");
        
        
            
        
       
    }
}

