import org.apache.commons.cli.*;
import Poly.*;
import java.util.ArrayList;

public class Main {
    Options options = new Options();

    Option poly = new Option("p", "poly", true, "Введите значение полинома");

    public static void main(String[] args) {
        Main i = new Main();
        i.init_options();

        Poly.Parser parser = new Poly.Parser();
        Poly.Calc calc = new Poly.Calc();

        ArrayList<Double> values = parser.parse(i.options, args);
        calc.calculate(values);
    }
    private void init_options(){
        poly.setRequired(true);
        options.addOption(poly);
    }
}