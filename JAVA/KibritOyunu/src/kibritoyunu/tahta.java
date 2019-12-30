/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kibritoyunu;

import java.util.ArrayList;
/**
 *
 * @author engin
 */
public class tahta {
    int satirNo;
    int toplamCubukSayisi;
    ArrayList<satir> satirlar= new ArrayList<>();

    public tahta(int sS) {
        satirNo = sS;
        for(int i = 1; i<= satirNo;i++)
        {
            satir s = new satir(i);
            toplamCubukSayisi += s.getCubukSayisi();
            satirlar.add(s);
        }
    }
    void ciz(){
        for(int i = 0; i< satirNo; i++)
        {
            satirlar.get(i).ciz();
        }
    }
    boolean cubukAl(int sS,int cS)
    {
        boolean x = false;
        if(sS > 0 && sS <= satirlar.size())
        {
            x = satirlar.get(sS-1).cubukAl(cS);
            if(x)
            {
                System.out.println("Cubuk Cekildi");
                toplamCubukSayisi = toplamCubukSayisi - cS;
            }
            else
                System.out.println("Kural hatası");
            
        } else
        {
            System.out.println("Satir uygun degil");
        }
            
            return x;
    }

    public int getToplamCubukSayisi() {
        return toplamCubukSayisi;
    }
    
    
    
}
