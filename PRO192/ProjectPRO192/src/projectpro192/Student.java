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
public class Student {

    private String Id;
    private String fullName;
    private int sex;
    private double PT;
    private double assignment;
    private double workshop;
    private double PE;
    private double FE;

    public Student() {
    }

    public Student(String Id, String fullName, int sex, double PT, double assignment, double workshop, double PE, double FE) {
        this.Id = Id;
        this.fullName = fullName;
        this.sex = sex;
        this.PT = PT;
        this.assignment = assignment;
        this.workshop = workshop;
        this.PE = PE;
        this.FE = FE;
    }

    public String getId() {
        return Id;
    }

    public void setId(String Id) {
        this.Id = Id;
    }

    public String getFullName() {
        return fullName;
    }

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public int getSex() {
        return sex;
    }

    public void setSex(int sex) {
        this.sex = sex;
    }

    public double getPT() {
        return PT;
    }

    public void setPT(double PT) {
        this.PT = PT;
    }

    public double getAssignment() {
        return assignment;
    }

    public void setAssignment(double assignment) {
        this.assignment = assignment;
    }

    public double getWorkshop() {
        return workshop;
    }

    public void setWorkshop(double workshop) {
        this.workshop = workshop;
    }

    public double getPE() {
        return PE;
    }

    public void setPE(double PE) {
        this.PE = PE;
    }

    public double getFE() {
        return FE;
    }

    public void setFE(double FE) {
        this.FE = FE;
    }

    public String checkGender() {
        if (this.sex == 1) {
            return "MALE";
        } else {
            return "FEMALE";
        }
    }

    @Override
    public String toString() {
        return "ID: " + Id.toUpperCase() 
                + "\nFullname: " + fullName.toUpperCase().replaceAll("\\s+", " ").trim()
                + "\nSex: " + checkGender().trim() + "\nProgress test: " + PT 
                + "\nAssignment: " + assignment + "\nWorkshop: " + workshop
                + "\nPE: " + PE + "\nFE: " + FE;
    }

    public double result() {
        return Math.round(this.PT * 0.1 + this.assignment * 0.1 + this.workshop * 0.1 + this.PE * 0.4 + this.FE * 0.3);
    }

    public String check() {
        if (this.PT > 0 && this.assignment > 0 && this.workshop > 0 && this.PE > 0 && this.FE >= 4 && result() >= 5) {
            return "COMPLETED";
        } else {
            return "INCOMPLETED";
        }
    }

    public String writeToFile() {
        return "ID: " + Id.toUpperCase() + "; " + "Fullname: " + fullName.toUpperCase().replaceAll("\\s+", " ").trim()
                + "; " + "Sex: " + checkGender().trim() + "; " + "Progress Test: " + PT + "; "
                + "Assignment: " + assignment + "; " + "Workshop: " + workshop + "; " + "PE: "
                + PE + "; " + "FE: " + FE + "; " + "Result: " + result() + "; " + "Status: " + check();
    }
}
