import java.util.LinkedList;
import java.util.Scanner;
import java.util.Queue;

public class QueueExample {

	public static void main(String[]args) throws Exception{
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		Queue<Integer> queueArray = new LinkedList<>();
		String input;
		int last = 0;
		for(int i = 0; i < N; i++) {
			input = in.next();
			if(input.equals("push")) {
				int num = in.nextInt();
				last = num;
				queueArray.offer(num);
			}

			else if(input.equals("pop")) {
				if(queueArray.isEmpty()) {
					System.out.println("-1");
				}
				else {
					System.out.println(queueArray.remove());
				}
			}
			
			else if(input.equals("size")) {
				System.out.println(queueArray.size());
			}
			else if(input.equals("empty")) {
				if(queueArray.isEmpty()) {
					System.out.println("1");
				}
				else {
					System.out.println("0");
				}
			}
			else if(input.equals("front")) {
				if(queueArray.isEmpty()) {
					System.out.println("-1");
				}
				else {
					System.out.println(queueArray.peek());
				}
			}
			else if(input.equals("back")) {
				if(queueArray.isEmpty()) {
					System.out.println("-1");
				}
				else {
					System.out.println(last);
				}
			}
			
		}


	}
}