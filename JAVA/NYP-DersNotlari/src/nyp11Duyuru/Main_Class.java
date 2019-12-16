/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp11Duyuru;

import java.io.*;
import java.util.Scanner;

/**
 *
 * @author engin
 */
public class Main_Class {

    public static void main(String[] args) throws FileNotFoundException {

        Ogrenci ogr = new Ogrenci();
        
        try (Scanner scanner = new Scanner(new File("D:\\projeGit\\ceng-lessons\\JAVA\\NYP-DersNotlari\\src\\nyp11Duyuru\\ogr.txt"))) {
            String text = scanner.nextLine();
            String[] satirParcala = text.split("-");
            int satirSayisi = satirParcala.length;
            System.out.println("Line count is " + satirSayisi);

            for (int i = 0; i < satirSayisi; i++) {
                System.out.println(i + ". line :" + satirParcala[i]);

                String[] kelimeParcala = satirParcala[i].split("###");
                int kelimeSayisi = kelimeParcala.length;
                System.out.println("Line count is " + kelimeSayisi);
                for (int k = 0; k < kelimeSayisi; k++) {
                    System.out.println(k + ". kelime :" + kelimeParcala[k]);
                    if (i == 0) {
                        switch (k) {
                            case 0:
                                ogr.setAd(kelimeParcala[k]);
                                break;
                            case 1:
                                ogr.setSoyAd(kelimeParcala[k]);
                                break;
                            case 2:
                                ogr.setOgrenciNo(Integer.valueOf(kelimeParcala[k]));
                                break;
                            default:
                                break;
                        }
                    }
                    if (i != 0) {
                        Ders ders = new Ders();
                        switch (k) {
                            case 0:
                                ders.setAd(kelimeParcala[k]);
                                break;
                            case 1:
                                ders.setDonem(kelimeParcala[k]);
                                break;
                            case 2:
                                ders.setNot(Integer.valueOf(kelimeParcala[k]));
                                break;
                            default:
                                break;
                        }
                        
                    }
                }

            }
        }

    }
}
