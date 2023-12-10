import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
public class solution{
    public static void main(String[] args){
        int[] prod_id=new int[10];
        int count;
        Scanner sc= new Scanner(System.in);
        for(int i=0;i< 10;i++){
            prod_id[i]=sc.nextInt();
        }
        Map<Integer, Integer> frequencyMap=new HashMap<>();
        for(Integer prod:prod_id){
            if(frequencyMap.get(prod) == null) {
                count=0;
                frequencyMap.put(prod,count);

            }

            if(frequencyMap.get(prod) != null) 
            {
                count=frequencyMap.get(prod);
                count++;
                frequencyMap.put(prod,count);
            }
        }
        for (Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    
    }
}