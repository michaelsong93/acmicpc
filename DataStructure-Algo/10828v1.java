import java.util.*;

public class Stack {
	
	public static void main(String[]args) throws Exception{
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
		int[] stackArray = new int[N];
		String input;
		int top = -1;
		for(int i = 0; i < N; i++) {
			input = in.next();
			
			if(input.equals("push")) {
				top++;
				stackArray[top] = in.nextInt();
			}
			
			else if(input.equals("pop")) {
				if(top == -1) {
					System.out.println("-1");
				}
				else {
					System.out.println(stackArray[top]);
					top--;
				}
			}
			
			else if(input.equals("size")) {
				System.out.println(top+1);
			}
			
			else if(input.equals("empty")) {
				if(top == -1) {
					System.out.println("1");
				}
				else {
					System.out.println("0");
				}
			}
			
			else if(input.equals("top")) {
				if(top == -1) {
					System.out.println("-1");
				}
				else {
					System.out.println(stackArray[top]);
				}
			}
		}
	}
}