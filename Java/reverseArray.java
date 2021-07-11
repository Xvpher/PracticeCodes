import java.util.*;
import java.io.*;

public class reverseArray
{
  static void display(int[] arr, int n)
  {
    for(int i=0;i<n;i++) System.out.print(arr[i]+" ");
    System.out.println();
  }

  static void reverseRec(int[] arr, int start, int end)
  {
    if(start>=end) return;
    int temp;
    temp=arr[start];arr[start]=arr[end];arr[end]=temp;
    reverseRec(arr, start+1, end-1);
  }

  static int[] reverse(int[] arr, int start, int end)
  {
    reverseRec(arr, start, end);
    return arr;
  }

  static int[] reverse (int[] arr, int n)
  {
    int start =0, end=n-1, temp;
    while(start<end)
    {
      temp=arr[start];arr[start]=arr[end];arr[end]=temp;
      start+=1;
      end-=1;
    }
    return arr;
  }
  public static void main(String[] args) throws Exception
  {
    Scanner sc = new Scanner(System.in);
    int n = Integer.parseInt(sc.nextLine()), i=0;
    StringTokenizer str = new StringTokenizer(sc.nextLine());
    int[] arr = new int[n];
    while(str.hasMoreTokens())
    {
      arr[i] = Integer.parseInt(str.nextToken());
      i++;
    }
    // catch (ArrayIndexOutOfBoundsException e)
    // {
    //   System.out.println("Enter valid number of elements");
    //   System.exit(1);
    // }
    System.out.println("The original array is");
    display(arr, n);
    reverse(arr, 0, n-1);
    System.out.println("The reversed array is");
    display(arr, n);
    // BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    // bw.write("Success\n");
    // bw.flush();
    // bw.close();
  }
}
