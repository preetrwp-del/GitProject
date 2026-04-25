package extra;
import java.util.Scanner;
public class calPercentage {
    public static void main(String[] args) {
        Scanner marks = new Scanner(System.in);

        // Input marks for 4 subjects
        System.out.print("Enter marks of Subject 1 (out of 60): ");
        int subject1 = marks.nextInt();

        System.out.print("Enter marks of Subject 2 (out of 60): ");
        int subject2 = marks.nextInt();

        System.out.print("Enter marks of Subject 3 (out of 60): ");
        int subject3 = marks.nextInt();

        System.out.print("Enter marks of Subject 4 (out of 60): ");
        int subject4 = marks.nextInt();

        // Calculate total and percentage
        int totalMarksObtained = subject1 + subject2 + subject3 + subject4;
        int totalMaxMarks = 60 * 4;

        double percentage = (totalMarksObtained * 100.0) / totalMaxMarks;

        // Display result
        System.out.println("Total Marks Obtained: " + totalMarksObtained + " out of " + totalMaxMarks);
        System.out.println("Percentage: " + percentage + "%");

        marks.close();
    }
}