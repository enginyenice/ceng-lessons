/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp9;

/**
 *
 * @author engin
 */
public class Main_Class {

    public static void main(String[] args) {
        CubeMatter cube1 = new CubeMatter();
        cube1.density = 2.0;
        cube1.edge = 2.0;
        System.out.println("Cube-1");
        System.out.println("Density: " + cube1.getDensity());
        System.out.println("Mass: " + cube1.getMass());
        System.out.println("Volume: " + cube1.getVolume());
        System.out.println("-----------------------");

        CubeMatter cube2 = new CubeMatter();
        System.out.println("Cube-2");
        System.out.println("Density: " + cube2.getDensity());
        System.out.println("Mass: " + cube2.getMass());
        System.out.println("Volume: " + cube2.getVolume());
        System.out.println("-----------------------");
        SphereMatter sphere1 = new SphereMatter();
        sphere1.density = 2.0;
        sphere1.radius = 2.0;
        System.out.println("Sphere-1");
        System.out.println("Density: " + sphere1.getDensity());
        System.out.println("Mass: " + sphere1.getMass());
        System.out.println("Volume: " + sphere1.getVolume());
        System.out.println("-----------------------");
        SphereMatter sphere2 = new SphereMatter();
        System.out.println("Sphere-2");
        System.out.println("Density: " + sphere2.getDensity());
        System.out.println("Mass: " + sphere2.getMass());
        System.out.println("Volume: " + sphere2.getVolume());
        System.out.println("-----------------------");
    }

}
