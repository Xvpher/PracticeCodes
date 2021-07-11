import java.util.*;
import java.io.*;
import java.math.*;

public class rotateArray
{

  static void reverse(int[] arr, int start, int end)
  {
    int temp;
    while(start<end)
    {
      temp=arr[start];arr[start]=arr[end];arr[end]=temp;
      start+=1;
      end-=1;
    }
  }

  static void rotate (int[] arr, int n, int d)
  {
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
  }

  static void display(int[] arr, int n)
  {
    for(int i=0;i<n;i++) System.out.print(arr[i]+" ");
    System.out.println();
  }

  public static void main(String[] args)
  {
    int i=0;
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int d = sc.nextInt();
    sc.nextLine();
    int[] arr = new int [n];
    StringTokenizer str = new StringTokenizer(sc.nextLine(), " ");
    while(str.hasMoreTokens())
    {
      arr[i]=Integer.parseInt(str.nextToken());
      i++;
    }
    rotateArray obj = new rotateArray();
    System.out.println("Original Array is");
    obj.display(arr, n);
    obj.rotate(arr, n, d);
    System.out.println("Rotated Array is");
    obj.display(arr, n);
  }
}
