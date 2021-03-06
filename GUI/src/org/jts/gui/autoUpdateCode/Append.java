/***********           LICENSE HEADER   *******************************
JAUS Tool Set
Copyright (c)  2010, United States Government
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

       Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

       Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.

       Neither the name of the United States Government nor the names of 
its contributors may be used to endorse or promote products derived from 
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.
*********************  END OF LICENSE ***********************************/

package org.jts.gui.autoUpdateCode;

import java.io.*;
    
class Append {
     
    static void appendToFile( String srcFile, String destFile, String str ) throws java.io.IOException {
      
      // read in src file
      File iFile = new File( srcFile );
      StringBuilder iData = new StringBuilder( (int)iFile.length() );
      BufferedReader reader = new BufferedReader(
                     new FileReader( iFile ));
      char[] buf = new char[ (int)iFile.length() ];
      int numRead=0;
      while((numRead=reader.read(buf)) != -1) {
         iData.append(buf, 0, numRead);
      }
      reader.close();
      
      // find replace
      String oData = appendToString( iData.toString(), str );
      
      // write to dest file
      File oFile = new File( destFile );
      if (oFile == null) {
        throw new IllegalArgumentException("File should not be null.");
      }
  
      //use buffering
      Writer output = new BufferedWriter(new FileWriter(oFile));
      try {
        // FileWriter always assumes default encoding is OK!
        output.write( oData );
      }
      finally {
        output.close();
      }
    }
    
    /*
    * @param inputStr string to replace
    * @param str string to append
    * @return input string concatenated with string to append
    */
    static String appendToString( String inputStr, String str ) {
      return inputStr.concat( str );
    }
    
    public static void main( String [] args ) {
      
      //System.out.println( appendToString( "a b c a b c", " xoxo" ) );
      // x b c x b c xoxo
      
      try {
         appendToFile( "test" + File.separator + "org" + File.separator + "openjaus" + File.separator + "toolset" + File.separator + "gui" + File.separator + "autoupdatecode" + File.separator + "appendTestInput1.txt", 
                                "test" + File.separator + "org" + File.separator + "openjaus" + File.separator + "toolset" + File.separator + "gui" + File.separator + "autoupdatecode" + File.separator + "appendTestOutput1.txt", " \r\nxoxo" );
      } catch( IOException ioe ) {
        ioe.printStackTrace();
      }
    }
}