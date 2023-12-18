import java.util.Scanner;
public class solution {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int count,maximum;
        int N=sc.nextInt();
        int H[]=new int[100];
        int i;
        for(i=1;i<N;i++){
            H[i]=sc.nextInt();
        }
        if (H.length==0) count=0;
        else{
            count=1;
            maximum=H[0];
            for(i=1;i<N;i++){
                if(H[i]>maximum){
                    maximum=H[i];
                    count+=1;
                }
            }
        }
        System.out.println(count);
    }
}
