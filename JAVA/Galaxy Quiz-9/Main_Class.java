/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package NYP10Duyuru;

/**
 *
 * @author engin
 */
public class Main_Class {

    //Alfa: Bina yapar. Boyu 360 -- bina_yap
    //Beta: Agac diker. Boyu 140 -- agac_dik    
    //Gama: Bina yapar. Agac diker.  Boyu 200 default agac_dik ,, gorev_degistir ile gorev degisebilir. Calistir ile calisiyor
    public static void main(String[] args) {
        AlfaRobot alfaRobot = new AlfaRobot();
        BetaRobot betaRobot = new BetaRobot();
        GamaRobot gamaRobot = new GamaRobot();
        
        alfaRobot.bina_yap();
        gamaRobot.calis();
        betaRobot.agac_dik();
        gamaRobot.gorev_degistir();
        gamaRobot.calis();
        
        
        
    }
}
