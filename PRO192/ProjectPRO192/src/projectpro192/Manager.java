/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projectpro192;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Manager {

    private final ArrayList<Student> students = new ArrayList<>();
    private final Validation validation = new Validation();

    public void Menu() {
        System.out.println("==================> Quản Lý Sinh Viên <==================");
        System.out.println("=>   1. Nhập vào danh sách N sinh viên.                <=");
        System.out.println("=>   2. In ra danh sách sinh viên.                     <=");
        System.out.println("=>   3. Thêm mới một sinh viên vào danh sách.          <=");
        System.out.println("=>   4. Tìm kiếm (dựa vào mã sinh viên).               <=");
        System.out.println("=>   5. Xóa sinh viên (dựa vào mã sinh viên).          <=");
        System.out.println("=>   6. Tính điểm trung bình sinh viên.                <=");
        System.out.println("=>   7. Kiểm tra sinh viên (completed or incompleted). <=");
        System.out.println("=>   8. In danh sách ra file.                          <=");
        System.out.println("=>   0. Thoát.                                         <=");
        System.out.println("=========================================================");
    }

    public void insertStudent() {
        int n = validation.getInt("Enter n: ", 0, Integer.MAX_VALUE);
        int i = 0;
        while (i < n) {
            String id = "";
            System.out.println("Student " + (i + 1));
            do {
                id = validation.getString("Enter ID: ", "Invalid ID. Required 8 characters(not space)!", "^[A-Za-z0-9]{8}$", null);
            } while (checkStudentById(id));
            String fullName = validation.getString("Enter fullname: ", "Invalid student name!", "^[A-Za-z ]{0,26}$", null);
            int sex = validation.getInt("Enter sex (1 - male, 0 - female): ", 0, 1);
            double PT = validation.getGrade("Enter progress test score: ", 0, 10);
            double assignment = validation.getGrade("Enter assignment score: ", 0, 10);
            double workshop = validation.getGrade("Enter workshop score: ", 0, 10);
            double PE = validation.getGrade("Enter PE score: ", 0, 10);
            double FE = validation.getGrade("Enter FE score: ", 0, 10);
            Student student = new Student(id, fullName, sex, PT, assignment, workshop, PE, FE);
            students.add(student);
            System.out.println("==> Successful! <==");
            i++;
        }
    }

    public void showStudent() {
        if (students.size() > 0) {
            System.out.println("| ++  ID  ++ |    ++   FULLNAME   ++   | ++ SEX ++ | ++ PROGRESS TEST ++ | ++ ASSIGNMENT ++ | ++ WORKSHOP ++ | ++ PE ++ | ++ FE ++ |");
            for (int i = 0; i < students.size(); i++) {
                System.out.printf((i + 1) + "  %-14s%-26s%-17s%-20s%-20s%-14s%-11s%-12s\n",
                        students.get(i).getId().toUpperCase(), students.get(i).getFullName().toUpperCase().replaceAll("\\s+", " ").trim(),
                        students.get(i).checkGender().trim(), students.get(i).getPT(), students.get(i).getAssignment(),
                        students.get(i).getWorkshop(), students.get(i).getPE(), students.get(i).getFE());
            }
        } else {
            System.out.println("==> Student list is EMPTY! <==");
        }
    }

    public void addStudent() {
            String id = "";
            do {
                id = validation.getString("Enter ID: ", "Invalid ID. Required 8 characters(not space)!", "^[A-Za-z0-9]{8}$", null);
            } while (checkStudentById(id));
            String fullName = validation.getString("Enter fullname: ", "Invalid student name!", "^[A-Za-z ]{0,26}$", null);
            int sex = validation.getInt("Enter sex (1 - male, 0 - female): ", 0, 1);
            double PT = validation.getGrade("Enter progress test score: ", 0, 10);
            double assignment = validation.getGrade("Enter assignment score: ", 0, 10);
            double workshop = validation.getGrade("Enter workshop score: ", 0, 10);
            double PE = validation.getGrade("Enter PE score: ", 0, 10);
            double FE = validation.getGrade("Enter FE score: ", 0, 10);
            Student student = new Student(id, fullName, sex, PT, assignment, workshop, PE, FE);
            students.add(student);
            System.out.println("==> Successful! <==");
    }

    public boolean checkStudentById(String id) {
        for (Student student : students) {
            if (student.getId().equalsIgnoreCase(id)) {
                System.out.println("==> ID already exists! <==");
                return true;
            }
        }
        return false;
    }

    public Student searchID(String id) {
        for (Student student : students) {
            if (student.getId().equalsIgnoreCase(id)) {
                return student;
            }
        }
        return null;
    }

    public void printStudentByID(String id) {
        Student student = searchID(id);
        if (student != null) {
            System.out.println("==> Information of student <==");
            System.out.println(student.toString());
        } else {
            System.out.println("==> Not found! <==");
        }

    }

    public void deleteStudentById(String id) {
        Student student = searchID(id);
        if (student != null) {
            students.remove(student);
            System.out.println("==> Successful! <==");
        } else {
            System.out.println("==> ID does not exist! <==");
        }
    }

    public void showGrade() {
        System.out.println("| ++  ID  ++ |     ++   FULLNAME   ++    | ++ RESULT ++ |");
        for (int i = 0; i < students.size(); i++) {
            System.out.printf((i + 1) + "  %-15s%-29s%-20s\n",
                    students.get(i).getId().toUpperCase(),
                    students.get(i).getFullName().toUpperCase().replaceAll("\\s+", " ").trim(),
                    students.get(i).result());
        }
        System.out.println("");
    }

    public void checkStudent() {
        System.out.println("| ++  ID  ++ |     ++   FULLNAME   ++    | ++ STATUS ++ |");
        for (int i = 0; i < students.size(); i++) {
            System.out.printf((i + 1) + "  %-15s%-26s%-20s\n",
                    students.get(i).getId().toUpperCase(),
                    students.get(i).getFullName().toUpperCase().replaceAll("\\s+", " ").trim(),
                    students.get(i).check());
        }
        System.out.println("");
    }
    
   
    
    public String writeFile() {
        try {
            FileWriter myWriter = new FileWriter("Student.txt");
            for (Student student : students) {
                myWriter.write(student.writeToFile());
                myWriter.write("\n");
            }
            myWriter.close();
            System.out.println("==> Successfully! <==");
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
        return null;
    }

}
