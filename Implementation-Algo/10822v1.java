import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        String file;
        Scanner in = new Scanner(System.in);
        file = in.nextLine();
        String[] values = file.split(",");
        int size = values.length;
        int sum=0;
        for(int i = 0; i < size; i++){
            sum += Integer.parseInt(values[i]);
        }
        System.out.println(sum);
    }
}