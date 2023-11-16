import java.util.*;

public class CF_1883_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        String keypad = "1234567890";
        Map<Character, Integer> mp = new HashMap<>();
        for(int i = 0; i < keypad.length(); i++) {
            mp.put(keypad.charAt(i), i);
        }
        while(tc != 0) {
            String password = sc.next();
            int answer = 0;
            answer += Math.abs(mp.get('1') - mp.get(password.charAt(0)));
            answer++;
            answer += Math.abs(mp.get(password.charAt(0)) - mp.get(password.charAt(1)));
            answer++;
            answer += Math.abs(mp.get(password.charAt(1)) - mp.get(password.charAt(2)));
            answer++;
            answer += Math.abs(mp.get(password.charAt(2)) - mp.get(password.charAt(3)));
            answer++;
            System.out.println(answer);
            tc--;
        }
        sc.close();
    }
}