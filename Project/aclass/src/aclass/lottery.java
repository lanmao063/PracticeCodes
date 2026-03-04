package aclass;

import java.util.Scanner;

public class lottery {
    private person pr;
    private machine ma;
    private Scanner scanner;

    public lottery() {
        pr = new person();
        ma = new machine();
        scanner = new Scanner(System.in);
    }

    public void play() {
        while (true) {
            System.out.println("请输入彩票号码（1~35）：");
            pr.input();
            
            System.out.println("\n您选择的号码是：");
            printNumbers(pr.getInput());
            
            System.out.println("\n正在生成中奖号码……");
            ma.chooseNum();
            
            System.out.println("\n彩票机生成的中奖号码是：");
            ma.printNum();
            
            if (compare.result(pr.getInput(), ma.getMachine())) {
                System.out.println("\n恭喜您中奖了！");
            } else {
                System.out.println("\n很抱歉您没中奖");
            }

            System.out.print("\n是否再玩一次？(y/n): ");
            String choice = scanner.next().toLowerCase();
            if (!choice.equals("y")) {
                System.out.println("感谢参与，再见！");
                break;
            }
            System.out.println();
        }
    }

    private void printNumbers(int[] numbers) {
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        lottery game = new lottery();
        game.play();
    }
}
