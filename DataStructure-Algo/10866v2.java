import java.util.LinkedList;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Deque;
import java.util.Scanner;
import java.util.StringTokenizer;

public class dequeue {
	public static void main(String[]args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		Deque<Integer> deque = new LinkedList<>();
	//	Scanner sc = new Scanner(System.in);
		int examples = Integer.parseInt(st.nextToken());
		for(int i = 0; i < examples; i++) {
			st = new StringTokenizer(br.readLine());
			String input = st.nextToken();
			
			if(input.equals("push_front")) {
				deque.offerFirst(Integer.parseInt(st.nextToken()));
				}
			
			else if(input.equals("push_back")) {
				deque.offerLast(Integer.parseInt(st.nextToken()));
			}
			
			else if(input.equals("pop_front")) {
				if(deque.isEmpty()) {
					sb.append("-1\n");
				}
				else {
					sb.append(deque.pop()+"\n");
				}
			}
			
			else if(input.equals("pop_back")) {
				if(deque.isEmpty()) {
					sb.append("-1\n");
				}
				else {
					sb.append(deque.removeLast()+"\n");
				}
			}
			else if(input.equals("size")) {
				sb.append(deque.size()+"\n");
			}
			
			else if(input.equals("empty")) {
				if(deque.isEmpty()) {
					sb.append("1\n");
				}
				else {
					sb.append("0\n");
				}
			}
			
			else if(input.equals("front")) {
				if(deque.isEmpty()) {
					sb.append("-1\n");
				}
				else {
					sb.append(deque.peekFirst()+"\n");
				}
			}
			
			else if(input.equals("back")) {
				if(deque.isEmpty()) {
					sb.append("-1\n");
				}
				else {
					sb.append(deque.peekLast()+"\n");
				}
			}
		}
		
		bw.write(sb.toString());
		bw.flush();
	}
}
