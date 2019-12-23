import java.io.*;


class readFile{
    public static void main(String args[])
    {
        String satir;
        File f1 = new File(args[0]);

        BufferedReader br  = null;
            try {
                br = new BufferedReader(new FileReader(f1));
                while((satir = br.readLine())!=null)
                {
                    System.out.println(satir);
                }
                
            } catch (IOException e) {
                e.printStackTrace();
            }
            finally{
                try {
                    if(br!=null)
                        br.close();
                } catch (IOException ex) {
                    ex.printStackTrace();
                }

            }
    }
}