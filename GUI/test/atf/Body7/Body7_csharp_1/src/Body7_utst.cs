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

using System;
using NUnit.Framework;
using urn_org_jts_test_VariableLengthField1_1_0;

[TestFixture]
public class Body7_utst
{
    private MsgIn m_MsgIn1;
    private MsgIn m_MsgIn2;

    public Body7_utst()
    {
    }

    [SetUp]
    public void setUp()
    {
        m_MsgIn1 = new MsgIn();
        m_MsgIn2 = new MsgIn();
    }

    [Test]
    public void testConstructionDefaults()
    {
        Console.WriteLine("[executing test (testConstructionDefaults)]");

        // verifying MsgIn constructs with correct default MessageID"
        Assert.AreEqual(1, m_MsgIn1.getHeader().getHeaderRec().getMessageID());
        Assert.AreEqual(1, m_MsgIn2.getHeader().getHeaderRec().getMessageID());

    }

    [Test]
    public void testSetGetOperations()
    {
        byte[] buff1 = new byte[4096];
        byte[] buff2 = new byte[4096];
        byte t = 0;

        int i = 0;

        Console.WriteLine("[executing test (testSetGetOperations)(TP_3.3.5.1)]");

        // verifying setMessageID/getMessageID reciprocity"
        m_MsgIn1.getHeader().getHeaderRec().setMessageID(5);
        Assert.AreEqual(5, m_MsgIn1.getHeader().getHeaderRec().getMessageID());
        m_MsgIn1.getHeader().getHeaderRec().setMessageID(1);
        Assert.AreEqual(1, m_MsgIn1.getHeader().getHeaderRec().getMessageID());

        // verifying setField/getField reciprocity"    
        m_MsgIn1.getBody7().getRecord7().setField1(126);
        m_MsgIn2.getBody7().getRecord7().setField1(-127);
        m_MsgIn1.getBody7().getRecord7().setField2(-40000);
        m_MsgIn2.getBody7().getRecord7().setField2(43210);
        m_MsgIn1.getBody7().getRecord7().setField3(0.5f);
        m_MsgIn2.getBody7().getRecord7().setField3(-32.125f);
        m_MsgIn1.getBody7().getRecord7().setField4(255);
        m_MsgIn2.getBody7().getRecord7().setField4(0);
        m_MsgIn1.getBody7().getRecord7().setStrFld("Hello");
        m_MsgIn2.getBody7().getRecord7().setStrFld("World!");

        Assert.AreEqual("Hello", m_MsgIn1.getBody7().getRecord7().getStrFld());
        Assert.AreEqual("World!", m_MsgIn2.getBody7().getRecord7().getStrFld());

        Assert.AreEqual(126, m_MsgIn1.getBody7().getRecord7().getField1());
        Assert.AreEqual(-127, m_MsgIn2.getBody7().getRecord7().getField1());
        Assert.AreEqual(-40000, m_MsgIn1.getBody7().getRecord7().getField2());
        Assert.AreEqual(43210, m_MsgIn2.getBody7().getRecord7().getField2());
        Assert.AreEqual(0.5, m_MsgIn1.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(-32.125, m_MsgIn2.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(255, m_MsgIn1.getBody7().getRecord7().getField4());
        Assert.AreEqual(0, m_MsgIn2.getBody7().getRecord7().getField4());


        // verifying set/getData reciprocity and getLength consistency"   
        for (i = 0, t = 51; i < 4000; i++)
        {
            buff1[i] = t;
            t = (byte)((t * 71) + 13);
            buff2[i] = t;
            t = (byte)((t * 71) + 13);
        }
        m_MsgIn1.getBody7().getRecord7().getVariableLengthField1().set(4000, buff1);
        m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().set(4000, buff2);

        Assert.AreEqual(4000, m_MsgIn1.getBody7().getRecord7().getVariableLengthField1().getLength());
        Assert.AreEqual(4000, m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getLength());

        Assert.AreEqual(126, m_MsgIn1.getBody7().getRecord7().getField1());
        Assert.AreEqual(-127, m_MsgIn2.getBody7().getRecord7().getField1());
        Assert.AreEqual(-40000, m_MsgIn1.getBody7().getRecord7().getField2());
        Assert.AreEqual(43210, m_MsgIn2.getBody7().getRecord7().getField2());
        Assert.AreEqual(0.5, m_MsgIn1.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(-32.125, m_MsgIn2.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(255, m_MsgIn1.getBody7().getRecord7().getField4());
        Assert.AreEqual(0, m_MsgIn2.getBody7().getRecord7().getField4());

        Assert.AreEqual("Hello", m_MsgIn1.getBody7().getRecord7().getStrFld());
        Assert.AreEqual("World!", m_MsgIn2.getBody7().getRecord7().getStrFld());


        for (i = 0; i < 4000; i++)
        {
            Assert.AreEqual(buff1[i], m_MsgIn1.getBody7().getRecord7().getVariableLengthField1().getData()[i]);
            Assert.AreEqual(buff2[i], m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getData()[i]);
        }
    }

    [Test]
    public void testEncodeToSpec()
    {
        byte[] buff = new byte[600];
        int i;

        for (i = 0; i < 512; i++)
            buff[i] = (byte)((i + 16) % 256);

        m_MsgIn1.getHeader().getHeaderRec().setMessageID(256);
        m_MsgIn1.getBody7().getRecord7().setField1(2);
        m_MsgIn1.getBody7().getRecord7().setField2(100992003);  //6.597819835e-33
        m_MsgIn1.getBody7().getRecord7().setField3(.0000000000000000000000000000000065978198350831201722347717993434f);
        m_MsgIn1.getBody7().getRecord7().setField4(11);
        m_MsgIn1.getBody7().getRecord7().getVariableLengthField1().set(288, buff);
        m_MsgIn1.getBody7().getRecord7().setStrFld("0123456789");


        // verifying message level encode is AS-5684 compliant"
        m_MsgIn1.encode(buff, 0);

        for (i = 0; i < m_MsgIn1.getSize() - 70; i++)
        { //20 01 00 00
            if (i == 12) Assert.AreEqual(32, buff[i]);
            else if (i == 13) Assert.AreEqual(1, buff[i]);
            else if (i == 14) Assert.AreEqual(0, buff[i]);
            else if (i == 15) Assert.AreEqual(0, buff[i]);
            else
                Assert.AreEqual((i % 256), buff[i]);
        }
        for (i = m_MsgIn1.getSize() - 70; i < m_MsgIn1.getSize(); i++)
        {
            Assert.AreEqual(0, buff[(int)i]);
        }
    }

    [Test]
    public void testEncodeDecodeOperations()
    {
        byte[] buff = new byte[4096];
        byte[] data = new byte[1000];

        int i = 0;

        for (i = 0; i < 1024; i++)
            buff[i] = (byte)(((4101 * i) + 65543) % 256);

        for (i = 0; i < 1000; i++)
            data[i] = (byte)(255 - i);

        Console.WriteLine("[executing test (testEncodeDecodeOperations)(TP_3.3.5.3)]");

        // verifying message level encode/decode reciprocity"


        m_MsgIn1.getHeader().getHeaderRec().setMessageID(41);
        m_MsgIn1.getBody7().getRecord7().getVariableLengthField1().set(1000, data);

        m_MsgIn2.getHeader().getHeaderRec().setMessageID(127);
        m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().set(1011, buff);

        m_MsgIn1.getBody7().getRecord7().setField1(24);
        m_MsgIn1.getBody7().getRecord7().setField2(25);
        m_MsgIn1.getBody7().getRecord7().setField3(-16.75f);
        m_MsgIn1.getBody7().getRecord7().setField4(27);

        m_MsgIn1.getBody7().getRecord7().setStrFld("12345678901234567890123456789012345678901234567890123456789012345678901234567890");

        m_MsgIn2.getBody7().getRecord7().setField1(127);
        m_MsgIn2.getBody7().getRecord7().setField2(127);
        m_MsgIn2.getBody7().getRecord7().setField3(127.0f);
        m_MsgIn2.getBody7().getRecord7().setField4(127);
        m_MsgIn2.getBody7().getRecord7().setStrFld(":)");

        m_MsgIn1.encode(buff, 0);
        m_MsgIn2.decode(buff, 0);


        Assert.AreEqual(41, m_MsgIn2.getHeader().getHeaderRec().getMessageID());
        Assert.AreEqual(1000, m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getLength());


        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getData()[i]);


        Assert.AreEqual(24, m_MsgIn2.getBody7().getRecord7().getField1());
        Assert.AreEqual(25, m_MsgIn2.getBody7().getRecord7().getField2());
        Assert.AreEqual(-16.75, m_MsgIn2.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(27, m_MsgIn2.getBody7().getRecord7().getField4());


        Assert.AreEqual("12345678901234567890123456789012345678901234567890123456789012345678901234567890", m_MsgIn2.getBody7().getRecord7().getStrFld());

        // verifying header level encode/decode reciprocity"

        m_MsgIn2.getHeader().getHeaderRec().setMessageID(0);
        m_MsgIn1.getHeader().encode(buff, 0);
        m_MsgIn2.getHeader().decode(buff, 0);
        Assert.AreEqual(41, m_MsgIn2.getHeader().getHeaderRec().getMessageID());

        m_MsgIn2.getHeader().getHeaderRec().setMessageID(0);
        m_MsgIn1.getHeader().getHeaderRec().encode(buff, 0);
        m_MsgIn2.getHeader().getHeaderRec().decode(buff, 0);
        Assert.AreEqual(41, m_MsgIn2.getHeader().getHeaderRec().getMessageID());

        // verifying record level encode/decode reciprocity"

        for (i = 0; i < 1011; i++) buff[i] = 0;
        m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().set(1011, buff);

        m_MsgIn2.getBody7().getRecord7().setField1(0);
        m_MsgIn2.getBody7().getRecord7().setField2(0);
        m_MsgIn2.getBody7().getRecord7().setField3(0.0f);
        m_MsgIn2.getBody7().getRecord7().setField4(0);
        m_MsgIn2.getBody7().getRecord7().setStrFld("");


        m_MsgIn1.getBody7().encode(buff, 0);
        m_MsgIn2.getBody7().decode(buff, 0);

        Assert.AreEqual(1000, m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getLength());
        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getData()[i]);
        Assert.AreEqual(24, m_MsgIn2.getBody7().getRecord7().getField1());
        Assert.AreEqual(25, m_MsgIn2.getBody7().getRecord7().getField2());
        Assert.AreEqual(-16.75, m_MsgIn2.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(27, m_MsgIn2.getBody7().getRecord7().getField4());
        Assert.AreEqual("12345678901234567890123456789012345678901234567890123456789012345678901234567890", m_MsgIn2.getBody7().getRecord7().getStrFld());


        for (i = 0; i < 1011; i++) buff[i] = 0;
        m_MsgIn2.getHeader().getHeaderRec().setMessageID(127);
        m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().set(1011, buff);
        m_MsgIn2.getBody7().getRecord7().setField1(0);
        m_MsgIn2.getBody7().getRecord7().setField2(0);
        m_MsgIn2.getBody7().getRecord7().setField3(0.0f);
        m_MsgIn2.getBody7().getRecord7().setField4(0);
        m_MsgIn2.getBody7().getRecord7().setStrFld("");

        m_MsgIn1.getBody7().getRecord7().encode(buff, 0);
        m_MsgIn2.getBody7().getRecord7().decode(buff, 0);

        Assert.AreEqual(1000, m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getLength());
        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getBody7().getRecord7().getVariableLengthField1().getData()[i]);

        Assert.AreEqual(24, m_MsgIn2.getBody7().getRecord7().getField1());
        Assert.AreEqual(25, m_MsgIn2.getBody7().getRecord7().getField2());
        Assert.AreEqual(-16.75, m_MsgIn2.getBody7().getRecord7().getField3(), 0.0001);
        Assert.AreEqual(27, m_MsgIn2.getBody7().getRecord7().getField4());
        Assert.AreEqual("12345678901234567890123456789012345678901234567890123456789012345678901234567890", m_MsgIn2.getBody7().getRecord7().getStrFld());
    }

    [Test]
    public void testEquality()
    {
        Console.WriteLine("[executing test (testEquality)]");
        // verifying message equality operator"    
        Assert.IsTrue(m_MsgIn1.isEqual(m_MsgIn1));
        Assert.IsTrue(m_MsgIn2.isEqual(m_MsgIn1));
        Assert.IsTrue(m_MsgIn1.isEqual(m_MsgIn2));
    }

    [Test]
    public void testInequality()
    {
        Console.WriteLine("[executing test (testInequality)]");
        // verifying message inequality operator"    
        Assert.IsFalse(m_MsgIn1.notEquals(m_MsgIn2));
        Assert.IsFalse(m_MsgIn2.notEquals(m_MsgIn1));
    }

    public static void Main()
    {
    }
}
