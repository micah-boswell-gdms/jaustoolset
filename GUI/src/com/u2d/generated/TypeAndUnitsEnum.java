/*
 * TypeAndUnitsEnum.java
 *
 * This code has been auto-updated by JTS after it has been auto-generated by umlc
 * Created on Wed Oct 05 10:31:03 EDT 2011
 */

package com.u2d.generated;


import com.u2d.model.*;
import com.u2d.app.PersistenceMechanism;
import com.u2d.type.*;
import com.u2d.type.atom.*;
import com.u2d.type.composite.*;
import com.u2d.list.RelationalList;
import com.u2d.reflection.Fld;
import javax.persistence.Entity;
/** place holder for more imports **/


@Entity
public  class TypeAndUnitsEnum extends AbstractComplexEObject_JTS{

    
    /** Creates a new instance of TypeAndUnitsEnum */
    public TypeAndUnitsEnum() {
    }
    public Title title() { 
        StringBuffer text = new StringBuffer();
        text.append(name.title() + " [TypeAndUnitsEnum]");
        return new Title(text.toString());
    }    
    


    // ******    name   ******
    private final StringEO name = new StringEO();
    public StringEO getName() { return name;}

    // ******    index   ******
    private final IntEO index = new IntEO();
    public IntEO getIndex() { return index;}

    // ******    type   ******
    private final PrimitiveType type = new PrimitiveType();
    public PrimitiveType getType() { return type;}

    // ******    units   ******
    private final SIUnit units = new SIUnit();
    public SIUnit getUnits() { return units;}

    // ******    scaleRange   ******
    private final ScaleRange scaleRange = new ScaleRange();
    public ScaleRange getScaleRange() { return scaleRange;}

   


 
    // ********  valueSet ********
    private ValueSet valueSet;
    public ValueSet getValueSet() {
        return valueSet;
    }
    public void setValueSet(ValueSet valueSet) {
        ValueSet old = this.valueSet;
        this.valueSet = valueSet;
        firePropertyChange("valueSet", old, this.valueSet );
    }


 
/************** Uncomment the following as needed *****************************/
      public static String[] fieldOrder  = {"name", "index", "type", "units", "scaleRange", "valueSet", "referencingVariableField"};
//    public static String[] fieldOrder        = {"fieldname1", "fieldname2"};

      ;
//    public static String[] tabViews          = {"fieldname1", "fieldname2"};

      ;
//    public static String[] flattenIntoParent = {"fieldname1", "fieldname2"};

      ;
//    public static String[] identities = {"fieldname1", "fieldname2"};

//    public static String pluralName() { return "TypeAndUnitsEnums"; }
      /* Specify a color to represnt this class */
//    public static Color colorCode = new Color(0x2332);

      /* Use a different Icon for each instance. Change photoFieldName. */
//    private transient PhotoIconAssistant assistant = 
//                        new PhotoIconAssistant(this, photoFieldname);
//    public Icon iconLg() { return assistant.iconLg(); }
//    public Icon iconSm() { return assistant.iconSm(); }


      /* Specify the default search field for this class */
//    public static String defaultSearchPath = "";


      /* Specify a custom view for this class. 
//    public EView getMainView()
//    {
//       return new CustomTypeAndUnitsEnumView(this);
//    }
/**********************/
/**@Cmd place holder**/        
}