import java.util.*;

public class Main {

  // Method for printing my header
  public static void Header() {
    System.out.println("Breckin Hume");
    System.out.println("CMPS-4143-102");
    System.out.println("Program 1");
    System.out.println(
        "This Program will simulate the texas lottery in that it will allow users to submit their numbers to see if they match the winning numbers. \n");
  }

  // Method for obtaining the numbers from user and loading them into their array
  public static void userput(int[] arr) {
    Scanner in = new Scanner(System.in);
    for (int i = 0; i < 6; i++) {
      System.out.print("Please enter a number from 1 to 54 :) \n");
      arr[i] = in.nextInt();
    }
    System.out.print("Your numbers have been submitted, your ticket has been processed, thank you :) \n");
  }

  // Method for generating the winning ticket and loading it into an array
  public static void TickGen(int[] arr) {
    Random rand = new Random();
    int max = 54, min = 1;
    for (int i = 0; i < 6; i++)
      arr[i] = rand.nextInt(max - min) + min;
  }

  // Printing a given Array
  public static void Printray(int[] arr) {
    for (int i = 0; i < 6; i++)
      System.out.print(arr[i] + " ");
    System.out.print("\n");
  }

  // Method that compares the user's ticket to the winning ticket and prints the
  // results
  public static int Compare(int[] arr, int[] arr2) {
    int matches = 0;
    for (int i = 0; i < 6; i++) {
      if (arr[i] == arr2[i])
        matches++;
    }
    return matches;
  }

  public static void main(String[] args) {
    // Print Header
    Header();
    // Create users ticket array
    int[] lottoTicket = new int[6];
    // Calling method to obtain users numbers and load them into the array
    userput(lottoTicket);
    // Create the winning ticket array
    int[] winningTicket = new int[6];
    // Calling method to generate the winning numbers and load them into the array
    TickGen(winningTicket);

    // Organize output and print the users ticket
    System.out.print("Your ticket is: \n");
    Printray(lottoTicket);
    // Organize output and print the winning ticket
    System.out.print("The winning ticket is: \n");
    Printray(winningTicket);
    // Calling method to compare numbers and print the results
    int matches = Compare(lottoTicket, winningTicket);
    System.out.print("You had " + matches + " matches! :) \n");
  }

}
