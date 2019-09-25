import java.util.*;
public class assignment4
{	
		static HashMap<String,Integer> m=new HashMap<>();
		static void print(char []p,char []result,int k,int r,int n)
		{
				if(k==r)
				{
						String string =new String(result);
						m.put(string,0);
						return;
				}
				for(int i=0;i<n;i++)
				{	
						result[k]=p[i];
						print(p,result,k+1,r,n);
				}
		}
		public static void main(String args[])
		{
				char []p={'A','C','G','T'};
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter the String to find k mer");
				String s=sc.next();
				System.out.println("Enter the value of k");
				int r=sc.nextInt();
				char []k=new char[r];
				print(p,k,0,2,4);
				String key;
				for(int i=0;i<=s.length()-r;i++)
				{
						for(int j=i+1;j<i+r;j++)
						{
								key=s.substring(i,j+1);
								m.put(key,m.get(key)+1);
						}
				}
				for(String t:m.keySet())
				{
						System.out.println(t+"->"+m.get(t));
				}
		}
}
