package oops;

public class imaginary {
    private int x;
    private int y;
    /**
     * Parameterized Constructor of Complex class
     *
     * @param real Real Part
     * @param imaginary Imaginary Part
     */
    public Complex(int real, int imaginary) {
        this.x = real;
        this.y = imaginary;
    }
    /**
     * Add two Complex Objects
     *
     * @param o Complex Object
     * @return Complex Object
     */
    public Complex add(Complex o) {
        return new Complex(
                this.x + o.x,
                this.y + o.y
        );

    }
