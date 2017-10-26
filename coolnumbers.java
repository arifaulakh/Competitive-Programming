import java.io.*;
import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException{
      BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
      int a = Integer.parseInt(stdin.readLine());
      int b = Integer.parseInt(stdin.readLine());
      
      int count = 0;
      for (int i = 1; (i*i*i*i*i*i) <= b; i++) {
        int total = i*i*i*i*i*i;
        if(total >=a && total <= b){
          count = count + 1;
        }
        
      } 
      
      System.out.print(count);
      
      
    }
}