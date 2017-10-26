import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args){
      Scanner stdin = new Scanner(System.in);
      int a = stdin.nextInt();
      int b = stdin.nextInt();
      int c = stdin.nextInt();
      int d = stdin.nextInt();
      
      int[] burger = {0,461,431,420,0};
      int[] drinks = {0,130,160,118,0};
      int[] sides = {0,100,57,70,0};
      int[] dessert = {0,167,266,75,0};
      
      int total = burger[a] + sides[b] + drinks[c] + dessert[d];
      System.out.print("Your total Calorie count is " + total + ".");
  }
}