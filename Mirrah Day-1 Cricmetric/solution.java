import java.io.IOException;
import java.util.Scanner;
public class solution 
{
	public static void main(String[] args)
		throws IOException
	{
		
		Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
		int[] runs = new int[100];
		int i;
		for (i = 0; i < n; i++) {
			runs[i] = sc.nextInt();
		}
		int sum=0,max=0;
		for (i = 0; i < n; i++) {
			sum+=runs[i];
            if (runs[max]<runs[i]) max=i;
		}
        System.out.println(sum);
        System.out.println(max);
	}
}
