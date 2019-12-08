package nyp9;

public class CubeMatter implements Matter{

    public double density = 1.0;
    public double edge= 1.0;
    
    
    @Override
    public double getDensity() {
        return density;
    }

    @Override
    public double getVolume() {
        return edge*edge*edge;
    }

    @Override
    public double getMass() {
        return density*edge*edge*edge;
    }
    
}
