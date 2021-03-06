/***********           LICENSE HEADER   *******************************
JAUS Tool Set
Copyright (c)  2011, United States Government
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

package org.jts.eclipse.conversion.cjsidl;

import java.util.logging.Level;
import java.util.logging.Logger;

public class Assumptions {

	/**
	 * Converts a string into a JSIDL assumption
	 * @param assumpt - input assumption string
	 * @return - resulting JSIDL assumption 
	 * @throws ConversionException 
	 */
	public static org.jts.jsidl.binding.Assumptions convert(String assumpt) throws ConversionException {
		org.jts.jsidl.binding.Assumptions newassumpt = new org.jts.jsidl.binding.Assumptions();
		String tmparr[] = assumpt.split("[\"]");
		String result = "";
		if(tmparr.length != 3){
			Logger.getLogger("CJSIDL").log(Level.SEVERE,
    	            "Unexpected double quotes found in assumption string.");
			throw new ConversionException("Unexpected double quotes found in assumption string.");
		} else{
			result = tmparr[1];
		}
		
		newassumpt.setContent(result);
		newassumpt.setSpace("preserve");
		
		return newassumpt;
	}

	/**
	 * Converts a JSIDL assumption into a String
	 * @param assumptions - input assumption
	 * @return - resulting string
	 */
	public static String convert(org.jts.jsidl.binding.Assumptions assumptions) {
		
		return "assumptions \"" + assumptions.getContent() + "\";";
	}

}
