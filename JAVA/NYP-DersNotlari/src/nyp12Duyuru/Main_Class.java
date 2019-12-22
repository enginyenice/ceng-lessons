/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp12Duyuru;

import java.util.Scanner;
import java.io.*;
import java.util.ArrayList;

/**
 *
 * @author engin
 */
public class Main_Class {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner scan = new Scanner(System.in);
        System.out.print("Okunacak dosyayi giriniz: ");
        String okunacakTXT = scan.nextLine();
        System.out.print("Yazilacak dosyayi giriniz: ");
        String yazilacakTXT = scan.nextLine();
        System.out.println("Okunacak: " + okunacakTXT + " Yazilacak: " + yazilacakTXT);
        if (okunacakTXT.length() < 3 || yazilacakTXT.length() < 3) {
            System.out.println("TXT Degiller");
        } else {
            String okunacakUzanti = okunacakTXT.substring(okunacakTXT.length() - 3);
            String yazilacakUzanti = yazilacakTXT.substring(yazilacakTXT.length() - 3);
            if (!"txt".equals(okunacakUzanti) || !"txt".equals(yazilacakUzanti)) {
                System.out.println("TXT Degiller");
            } else {
                BufferedReader inputStream = null;
                PrintWriter outputStream = null;
                try {
                    inputStream = new BufferedReader(new FileReader(okunacakTXT));
                    String satir;
                    int satirSayisi = 0;
                    int kelimeSayisi = 0;
                    int boslukSayisi = 0;
                    int rakamSayisi = 0;
                    String character = "";
                    ArrayList<Integer> frekans = new ArrayList<>();
                    int buyukHarfleBaslayanKelimeSayisi = 0;
                    while ((satir = inputStream.readLine()) != null) {
                        satirSayisi++;
                        String b[] = satir.split(" ");
                        boslukSayisi += b.length - 1;
                        for (int k = 0; k < b.length; k++) {
                            if (b[k].length() > 0) {
                                kelimeSayisi++;
                                if (b[k].charAt(0) == Character.toUpperCase(b[k].charAt(0)) && !Character.isDigit(b[k].charAt(0))) {
                                    buyukHarfleBaslayanKelimeSayisi++;
                                }
                                for (int l = 0; l < b[k].length(); l++) {
                                    if (Character.isDigit(b[k].charAt(l))) {
                                        rakamSayisi++;
                                    }

                                    char Alinankarakter = Character.toLowerCase(b[k].charAt(l));
                                    if (!character.contains(Character.toString(Alinankarakter))) {
                                        character += Alinankarakter;
                                        frekans.add(character.indexOf(Alinankarakter), 1);

                                    } else {
                                        int index = character.indexOf(Alinankarakter);
                                        frekans.set(index, frekans.get(index) + 1);
                                    }

                                }
                            }
                        }

                    }

                    System.out.println("Satir Sayisi: " + satirSayisi);
                    System.out.println("Kelime Sayisi: " + kelimeSayisi);
                    System.out.println("BH Kelime Sayisi: " + buyukHarfleBaslayanKelimeSayisi);
                    System.out.println("Bosluk Sayisi: " + boslukSayisi);
                    System.out.println("Rakam Sayisi: " + rakamSayisi);
                    for (int i = 0; i < character.length(); i++) {
                        System.out.println("[" + character.charAt(i) + "]->" + frekans.get(i));
                    }

                    BufferedWriter bWriter = new BufferedWriter(new FileWriter(yazilacakTXT, true));
                    bWriter.write("Satir Sayisi: " + satirSayisi+ " Adet");
                     bWriter.write("\nKelime Sayisi: " + kelimeSayisi);
                     bWriter.write("\nBH Kelime Sayisi: " + buyukHarfleBaslayanKelimeSayisi+" Adet");
                     bWriter.write("\nBosluk Sayisi: " + boslukSayisi+" Adet");
                     bWriter.write("\nRakam Sayisi: " + rakamSayisi+" Adet");
                    for (int i = 0; i < character.length(); i++) {
                         bWriter.write("\n[" + character.charAt(i) + "]->" + frekans.get(i)+" Adet");
                    }
                    bWriter.close();

                } catch (Exception e) {
                    System.out.println(e);
                }

            }

        }

    }

}
