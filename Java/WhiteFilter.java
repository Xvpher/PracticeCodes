import java.util.*;
import java.io.*;

public class WhiteFilter
{
  public static int search(String key, String[] a, int n) throws NullPointerException
  {
    // Searching Algorithm
    for(int i=0;i<n;i++)
    {
      if(key.compareTo(a[i])==0) return 1;
    }
    return 0;
  }
  public static void main(String[] args) throws Exception
  {
    int i=0,j=0,n;
    String[] white_list = new String [50];
    String[] check_list = new String [50];
    File filePath = new File("/home/xvpher/Practice/Java/white_list.txt");
    Scanner scan = new Scanner(filePath);
    while(scan.hasNextLine())
    {
      StringTokenizer str = new StringTokenizer(scan.nextLine()," ");
      white_list[i]=str.nextToken();
      i++;
    }
    scan.close();




    File filePath_1 = new File("/home/xvpher/Practice/Java/check_list.txt");
    Scanner scan_1 = new Scanner(filePath_1);
    while(scan_1.hasNextLine())
    {
      StringTokenizer str = new StringTokenizer(scan_1.nextLine()," ");
      check_list[j]=str.nextToken();
      j++;
    }
    scan_1.close();
    for(n=0;n<i;n++)
    {
      if(search(check_list[n], white_list, j)==1)
      {
        System.out.println("Found one : "+n+" - "+check_list[n]);
      }
    }
  }
}
