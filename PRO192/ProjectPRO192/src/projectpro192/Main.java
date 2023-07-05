/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projectpro192;

/**
 *
 * @author Admin
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Manager manager = new Manager();
        Validation validation = new Validation();

        while (true) {
            manager.Menu();
            int choice = validation.getInt("Your choice: ", 0, 8);
            switch (choice) {
                case 1:
                    manager.insertStudent();
                    break;
                case 2:
                    manager.showStudent();
                    break;
                case 3:
                    manager.addStudent();
                    break;
                case 4:
                    String searchID = validation.getString("Enter ID to find: ", 
                            "Invalid ID. Required 8 characters(not space)!", "^[A-Za-z0-9]{8}$", null);
                    manager.printStudentByID(searchID);
                    break;
                case 5:
                    String deleteID = validation.getString("Enter ID to delete: ", 
                            "Invalid ID. Required 8 characters(not space)!", "^[A-Za-z0-9]{8}$", null);
                    manager.deleteStudentById(deleteID);
                    break;
                case 6:
                    manager.showGrade();
                    break;
                case 7:
                    manager.checkStudent();
                    break;
                case 8:
                    manager.writeFile();
                    break;
                case 0:
                    System.out.println("Goodbye!");
                    System.exit(0);
            }
        }
    }
}
