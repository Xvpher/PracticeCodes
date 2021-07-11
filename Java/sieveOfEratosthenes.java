import java.util.*;
import java.math.*;
import java.io.*;

public class sieveOfEratosthenes
{
  static void initiate(int[] prime, int n)
  {
    for(int i=0;i<n;i++)
    {
      prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
  }

  static void sieve(int[] prime, int n)
  {
    int i,j;
    for(i=0;i<n;i++)
    {
      if(prime[i]==1)
      {
        for(j=i*i;j<n;j=j+i)
        {
          prime[j]=0;
        }
      }
    }
  }

  static void display(int[] arr, int n)
  {
    for(int i=0;i<n;i++)
    {
      if(arr[i]==1) System.out.print(i+" ");
    }
    System.out.println();
  }

  public static void main(String[] args)
  {
    int i;
    Scanner sc = new Scanner(System.in);
    //System.out.println("Enter the number");
    int n = Integer.valueOf(args[0]);
    int[] prime = new int[n];
    System.out.println("The primes less than "+n+" are");
    sieveOfEratosthenes ob = new sieveOfEratosthenes();
    ob.initiate(prime, n);
    ob.sieve(prime, n);
    ob.display(prime, n);

  }

}
