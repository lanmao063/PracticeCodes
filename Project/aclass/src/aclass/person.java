package aclass;

import java.util.Scanner;

public class person {
    private int[] number = new int[7];
    private int[] rankedNumber = new int[7];
    private Scanner scanner;

    public person() {
        scanner = new Scanner(System.in);
    }

    public void input() {
        System.out.println("请输入7个1到35之间的不同数字：");
        for (int k = 0; k < number.length; k++) {
            while (true) {
                try {
                    System.out.print("请输入第" + (k + 1) + "个数字：");
                    int input = scanner.nextInt();
                    
                    // 验证输入范围
                    if (input < 1 || input > 35) {
                        System.out.println("数字必须在1到35之间，请重新输入。");
                        continue;
                    }
                    
                    // 验证是否重复
                    boolean isDuplicate = false;
                    for (int i = 0; i < k; i++) {
                        if (number[i] == input) {
                            isDuplicate = true;
                            break;
                        }
                    }
                    
                    if (isDuplicate) {
                        System.out.println("数字不能重复，请重新输入。");
                        continue;
                    }
                    
                    number[k] = input;
                    break;
                } catch (Exception e) {
                    System.out.println("请输入有效的数字。");
                    scanner.next(); // 清除无效输入
                }
            }
        }
        
        rank r = new rank(number);
        rankedNumber = r.bubbleSort(true); // 使用升序排序
    }

    public int[] getInput() {
        return rankedNumber;
    }
}
