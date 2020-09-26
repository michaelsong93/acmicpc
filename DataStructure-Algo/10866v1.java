import java.util.LinkedList;
import java.util.Deque;
import java.util.Scanner;

public class dequeue {
	public static void main(String[]args) throws Exception {
		Deque<Integer> deque = new LinkedList<>();
		Scanner sc = new Scanner(System.in);
		int examples = sc.nextInt();
		int count = 0;
		for(int i = 0; i < examples; i++) {
			String input = sc.next();
			
			if(input.equals("push_front")) {
				int num = sc.nextInt();
				deque.addFirst(num);
				count++;
			}
			
			else if(input.equals("push_back")) {
				int num = sc.nextInt();
				deque.addLast(num);
				count++;
			}
			
			else if(input.equals("pop_front")) {
				if(count==0) {
					System.out.println("-1");
				}
				else {
					count--;
					System.out.println(deque.pollFirst());
				}
			}
			
			else if(input.equals("pop_back")) {
				if(count==0) {
					System.out.println("-1");
				}
				else {
					count--;
					System.out.println(deque.pollLast());
				}
			}
			else if(input.equals("size")) {
				System.out.println(count);
			}
			
			else if(input.equals("empty")) {
				if(count==0) {
					System.out.println("1");
				}
				else {
					System.out.println("0");
				}
			}
			
			else if(input.equals("front")) {
				if(count==0) {
					System.out.println("-1");
				}
				else {
					System.out.println(deque.peekFirst());
				}
			}
			
			else if(input.equals("back")) {
				if(count==0) {
					System.out.println("-1");
				}
				else {
					System.out.println(deque.peekLast());
				}
			}
		}
		sc.close();
	}
}
