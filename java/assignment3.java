import java.util.*;
public class assignment3
{
		static boolean checkpalin(String s,int l,int r)
		{
				int range=r-l+1;
				int p=0;
				range/=2;
				for(int i=l;i<l+range;i++)
				{
						if(s.charAt(i)!=s.charAt(r-p))
						{
								return false;
						}
						p++;
				}
				return true;
		}
		public static void main(String args[])
		{
				Set<String> s=new HashSet<String>();
				String sa;
				Scanner sc=new Scanner(System.in);
				sa=sc.next();
				for(int i=0;i<sa.length();i++)
				{
						for(int j=i+1;j<sa.length();j++)
						{
								if(checkpalin(sa,i,j))
								{
										s.add(sa.substring(i,j+1));
								}
						}
				}
				System.out.println(s);
		}
}
