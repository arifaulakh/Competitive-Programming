import java.io.*;
import java.util.*;
import java.lang.Math.*;

public class Main {
    public static void main(String[] args) {
    Scanner stdin = new Scanner(System.in);
    int r = stdin.nextInt();
    int h = stdin.nextInt();
    double V = (Math.PI*r*r*h)/3;
    System.out.println(V);
    }
}