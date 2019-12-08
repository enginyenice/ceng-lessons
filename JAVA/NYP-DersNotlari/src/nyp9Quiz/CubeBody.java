package nyp9Quiz;

public class CubeBody extends Body {

    public double density = 1.0;
    public double edge= 1.0;
    
    @Override
    double getDensity() {
        return density;
    }

    @Override
    double getVolume() {
        return edge*edge*edge;
    }

    @Override
    double getMass() {
        return density*edge*edge*edge;
    }
    
}
