package nyp9;

public class SphereMatter implements Matter {

    public double density = 1.0;
    public double radius = 1.0;

    @Override
    public double getDensity() {
        return density;
    }

    @Override
    public double getVolume() {
        return (3.14 * radius * radius * radius) / 3;
    }

    @Override
    public double getMass() {
        return density * (3.14 * radius * radius * radius) / 3;
    }

}
