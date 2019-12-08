package nyp9Quiz;

public class SphereBody extends Body {

    public double density = 1.0;
    public double radius = 1.0;
    

    @Override
    double getDensity() {
         return density;
    }

    @Override
    double getVolume() {
        return (3.14 * radius * radius * radius) / 3;
    }

    @Override
    double getMass() {
       return density * (3.14 * radius * radius * radius) / 3;
    }

}
