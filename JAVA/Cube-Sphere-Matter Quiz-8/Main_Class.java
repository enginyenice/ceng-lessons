/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp9Quiz;

/**
 *
 * @author engin
 */
public class Main_Class {

    public static void main(String[] args) {
        
        CubeBody cube1 = new CubeBody();
        System.out.println("Cube-1");
        System.out.println("Density: " + cube1.getDensity());
        System.out.println("Mass: " + cube1.getMass());
        System.out.println("Volume: " + cube1.getVolume());
        System.out.println("-----------------------");

        CubeBody cube2 = new CubeBody();
        cube2.density = 10.0;
        cube2.edge = 10.0;
        System.out.println("Cube-2");
        System.out.println("Density: " + cube2.getDensity());
        System.out.println("Mass: " + cube2.getMass());
        System.out.println("Volume: " + cube2.getVolume());
        System.out.println("-----------------------");
        
        
        SphereBody sphere1 = new SphereBody();
        System.out.println("Sphere-1");
        System.out.println("Density: " + sphere1.getDensity());
        System.out.println("Mass: " + sphere1.getMass());
        System.out.println("Volume: " + sphere1.getVolume());
        System.out.println("-----------------------");
        
        
        
        SphereBody sphere2 = new SphereBody();
        sphere2.density = 10.0;
        sphere2.radius = 10.0;
        System.out.println("Sphere-2");
        System.out.println("Density: " + sphere2.getDensity());
        System.out.println("Mass: " + sphere2.getMass());
        System.out.println("Volume: " + sphere2.getVolume());
        System.out.println("-----------------------");
    }

}

