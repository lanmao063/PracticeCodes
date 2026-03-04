package com.neusoft.neu.fy25g01.n92.util;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.Charset;

public class FileTools {
    private  static final String PATH="data";
    public static int writeStringToFile(String filename,String content) throws IOException {
        int  i =-1;
        File targetFile =new File(PATH, filename);
        if (targetFile.exists())
            targetFile.delete();
        targetFile.createNewFile();
        try (FileOutputStream fos = new FileOutputStream(targetFile)){
            byte[] bs = content.getBytes(Charset.forName("utf8"));
            fos.write(bs);
            i =  content.length();
            fos.flush();
            fos.close();

        } catch (IOException e) {
            System.out.println("文件写入失败: " + e.getMessage());
        }

        return   i;
    }

    public static String readFile(String filename) {
        File targetFile =new File(PATH, filename);
        String content = null;
        try (FileInputStream  fis = new FileInputStream(targetFile)){
            byte[] bs = new byte[fis.available()];
            fis.read(bs);
            content = new String(bs, Charset.forName("utf8"));
            fis.close();

        } catch (Exception e) {
            System.out.println("文件读取失败: " + e.getMessage());
        }

        return   content;
    }
}
