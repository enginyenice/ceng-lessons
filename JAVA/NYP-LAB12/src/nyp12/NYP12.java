/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp12;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author engin
 */
public class NYP12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws InterruptedException {
        // TODO code application logic here
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
                        for (String b1 : b) {
                            if (b1.length() > 0) {
                                
                                
                                
                                kelimeSayisi++;
                                   
                                if (b1.charAt(0) == Character.toUpperCase(b1.charAt(0)) && !Character.isDigit(b1.charAt(0))) {
                                    buyukHarfleBaslayanKelimeSayisi++;
                                }
                                
                                
                                for (int l = 0; l < b1.length(); l++) {
                                    if (Character.isDigit(b1.charAt(l))) {
                                        rakamSayisi++;
                                    }
                                    
                                    char Alinankarakter = Character.toLowerCase(b1.charAt(l));
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

                    try (BufferedWriter bWriter = new BufferedWriter(new FileWriter(yazilacakTXT, true))) {
                        bWriter.write("Satir Sayisi: " + satirSayisi+ " Adet");
                        bWriter.write("\nKelime Sayisi: " + kelimeSayisi+ "Adet");
                        bWriter.write("\nBH Kelime Sayisi: " + buyukHarfleBaslayanKelimeSayisi+" Adet");
                        bWriter.write("\nBosluk Sayisi: " + boslukSayisi+" Adet");
                        bWriter.write("\nRakam Sayisi: " + rakamSayisi+" Adet");
                        for (int i = 0; i < character.length(); i++) {
                            bWriter.write("\n[" + character.charAt(i) + "]->" + frekans.get(i)+" Adet");
                        }
                    }

                } catch (IOException e) {
                    
                    System.err.println("Hata Meydana Geldi!!!\n"+e);
                    
                }
                


            }

        }
                System.out.println("4 Saniye içerisinde program kapatiliyor.");
                Thread.sleep(4000);
    }
    }
    
