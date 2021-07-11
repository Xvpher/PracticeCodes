import java.util.*;
import java.io.*;

public class ScannerTest
{
  static void display(int[] arr, int i)
  {
    int j;
    for(j=0;j<i;j++)
    {
      System.out.println(arr[j]);
    }
  }

  public static void main(String[] args)
  {
    int i=0,j;
    int[] arr = new int[50];
    Scanner scan = new Scanner (System.in);
    while(scan.hasNextLine())
    {
      // Scanner lineScan = new Scanner (scan.nextLine());
      // while(lineScan.hasNextInt())
      // {
      //   arr[i] = lineScan.nextInt();
      //   i++;
      // }
      StringTokenizer st = new StringTokenizer(scan.nextLine(), " ");
      while(st.hasMoreTokens())
      {
        arr[i]=Integer.valueOf(st.nextToken());
        i++;
      }
    }
    System.out.println("The array");
    display(arr, i);
    System.out.println("end----"+i);
  }
}
