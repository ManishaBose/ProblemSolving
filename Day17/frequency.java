import java.util.*;

public class frequency {
    public void frequencyOfString(String st) {
        int[] arr = new int[26]; // declare an array of size 26: A to Z
        for (int i = 0; i < st.length(); i++) {
            if (st.charAt(i) != ' ') {
                arr[st.charAt(i) - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0)
                System.out.println((char) (i + 'A') + " occurs " + arr[i] + " times");
        }
    }

    public static void main(String args[]) {
        frequency freq = new frequency(); // create object for class frequencey
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        freq.frequencyOfString(str);
        sc.close(); // close scanner to release resources [not super-important but good practice]
    }
}
