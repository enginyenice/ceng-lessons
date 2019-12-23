import java.io.*;

class writeFile{
    public static void main(String [] args)
    {
        
        BufferedWriter bw = null;
        try {
            bw = new BufferedWriter(new FileWriter("C://Users//engin//Desktop//Command Line Java//icineYaz.txt"));
        for(int i =0; i<args.length;i++)
       {
           System.out.println(args[i]);

           bw.write(args[i]);
           bw.write("\n");

       }
        } catch (IOException e) {
            System.out.println(e);
        }
        finally{
            try {
                if(bw != null)
                    bw.close();

            } catch (IOException e) {
                //TODO: handle exception
            }

        }
        

        
       
       
    }
}