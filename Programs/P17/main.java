//import java.util.*;

public class Main {

  public static class Frac {

    private int num;
    private int den;

    ///////////////////////////////////////////////////////////////////
    // default constructor
    public Frac() {
      num = 1;
      den = 1;
    }

    ///////////////////////////////////////////////////////////////////
    // non default constructor
    public Frac(int n, int d) {
      num = n;
      if (d == 0)
        System.out.println("Denominator cannot be 0");
      else
        den = d;
    }

    ///////////////////////////////////////////////////////////////////
    // Setters
    public void setNum(int n) {
      num = n;
    }

    ///////////////////////////////////////////////////////////////////
    public void setDen(int d) {
      den = d;
    }

    ///////////////////////////////////////////////////////////////////
    // Getters
    public int getNumerator() {
      return num;
    }

    ///////////////////////////////////////////////////////////////////
    public int getDenominator() {
      return den;
    }

    ///////////////////////////////////////////////////////////////////
    // Math Operators
    public Frac mult(Frac f) {
      Frac temp = new Frac();
      temp.num = this.num * f.num;
      temp.den = this.den * f.den;
      return temp;
    }

    ///////////////////////////////////////////////////////////////////
    public Frac add(Frac f, Frac g) {
      Frac temp = new Frac();
      temp.num = (this.num * g.den) + (f.num * this.den);
      temp.den = this.den * g.den;
      return temp;
    }

    ///////////////////////////////////////////////////////////////////
    public Frac sub(Frac f, Frac g) {
      Frac temp = new Frac();
      temp.num = (this.num * g.den) - (f.num * this.den);
      return temp;
    }

    ///////////////////////////////////////////////////////////////////
    public Frac div(Frac f) {
      Frac temp = new Frac();
      temp.num = this.num * f.den;
      temp.den = this.den * f.num;
      return temp;
    }

    ///////////////////////////////////////////////////////////////////
    // Reciprocal method
    public Frac recip(Frac f) {
      Frac temp = new Frac();
      temp.num = f.den;
      temp.den = f.num;
      return temp;
    }
    ///////////////////////////////////////////////////////////////////
    public Frac gcd(Frac f){
      Frac temp = new Frac();
      int a = f.num;
      int b = f.den;
      int c = a % b;
      while(c != 0){
        a = b;
        b = c;
        c = a % b;
      }
      temp.num = b;
      temp.den = 1;
      return temp;
    }
    ///////////////////////////////////////////////////////////////////
    public Frac reduce(Frac f){
      Frac temp = new Frac();
      Frac gcd = new Frac();
      gcd = f.gcd(f);
      temp.num = f.num / gcd.num;
      temp.den = f.den / gcd.den;
      return temp;
    }
    ///////////////////////////////////////////////////////////////////
    // Printer
    public String toPrint() {
      String s = this.num + "/" + this.den;
      return s;
    }
    ///////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////
  }

  // Main Method
  public static void main(String[] args) {
    Frac f1 = new Frac();
    Frac f2 = new Frac(1, 2);
    Frac f3;
    Frac f4;
    Frac f5;
    Frac f6;
    String s1;
    f1.setNum(5);
    f1.setDen(9);
    s1 = f1.toPrint();
    System.out.println(s1);
    s1 = f2.toPrint();
    System.out.println(s1);
    f3 = f1.mult(f2);
    s1 = f3.toPrint();
    System.out.println(s1);
    f4 = f1.add(f2, f3);
    s1 = f4.toPrint();
    System.out.println(s1);
    f5 = f1.sub(f2, f3);
    s1 = f5.toPrint();
    System.out.println(s1);
    f6 = f1.div(f2);
    s1 = f6.toPrint();
    System.out.println(s1);
    f6 = f1.recip(f2);
    s1 = f6.toPrint();
    System.out.println(s1);
    f6 = f1.reduce(f2);
    s1 = f6.toPrint();
    System.out.println(s1);
  }

}
