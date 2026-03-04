package aclass;

import java.util.HashSet;
import java.util.Random;
import java.util.Set;

public class machine {
    private int[] number = new int[7];
    private int[] rankedNumber = new int[7];

    public void chooseNum() {
        Random random = new Random();
        Set<Integer> set = new HashSet<>();
        int i = 0;
        while (i < 7) {
            int index = random.nextInt(1, 36);
            if (!set.contains(index)) {
                set.add(index);
                number[i] = index;
                i++;
            }
        }
        // Validate generated numbers
        if (set.size() != 7) {
            throw new IllegalStateException("Failed to generate unique numbers");
        }
        
        rank r = new rank(number);
        rankedNumber = r.bubbleSort(true); // 使用升序排序
    }

    public int[] getMachine() {
        return rankedNumber;
    }

    public void printNum() {
        for (int i : rankedNumber) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
