package p1;

public class A extends Thread
{
	public void run()
	{
			int arr1[]= {1,3,5,7,9};
			for (int i=0;i<=5;i++)
				
			{
						System.out.println(arr1[i]);
		                try
			 {
				 sleep(1000);
			 }
			 catch(Exception e)
				 {
				 System.out.println(e);}
			}
			}
		}

package p2;

public class B extends Thread{
	public void run()
	{
			int arr2[]= {2,4,6,8,10};
		
			for (int i=0;i<=9;i++)
			
	{
				System.out.println(arr2[i]);
                try
	 {
		 sleep(1000);
	 }
	 catch(Exception e)
		 {
		 System.out.println(e);}
	}
	}
}

package MAIN;
import p1.A;
import p2.B;
public class M{
	public static void main(String args[]) { 
		A a1=new A();
		a1.start();
		B b1= new B();
		b1.start();
	}
}




