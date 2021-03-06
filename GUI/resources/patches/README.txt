The following files have been updated from the original.  
Both the original and modified files have been included for reference in case they change in newer versions of libraries.
The patch is also included for convenience.


To modify the source jmatter, download the 20090430 release and place the folder in the patch directory.  
-patchSource script uses the *.patch files and the *.original files to create patched files which are placed in the jmatter directory
(the *.original files are stored in case jmatter comes out with a new version)
-makePatches uses the *.original files and the *.modified files to create the *.patch files
-storeModified script looks in the jmatter source directory and saves the files listed below as the *.modified files
-jarCopy script copies all the jmatter jar files we have built into the JTS lib directories
****NOTE: if running the scripts from cygwin, you may need to run the d2u command ('d2u makePatches' etc) on the script files to change the line endings

build steps: 
1. go to jmatter directory 
2. run 'ant compile-standalone-modules'
3. run 'ant compile-dependent-modules'
4. run 'ant jar'
5. goto patches directory
6. run './jarCopy'



To patch a file, use the following syntax in linux consule
'$patch <original file> -i <patch file> -o <output file>'

an example would be
'$patch Smc.java.original -i Smc.java.patch -o Smc.java.modified


=========
SMC
=========
../SmcSrc_6_0_1/smc/net/sf/smc/Smc.java
Smc.java
--Modified so that '/' is always used no matter the platform so that generated code can be compiled on any machine

../SmcSrc_6_0_1/smc/lib/C++
statemap.h
--peak/etc functions added to allow proper function of push/pop in nested states


=========
JMatter
=========
------------------------------------------------------------------------------------------------------------------
======Jmatter package============

../jmatter-20090430/jmatter/src/com/u2d/model
AbstractComplexEObject.java
--menu items were removed that couldn't be removed with GUI permissions
AbstractListEO.java
--removed JSON from list menu options
--removed duplicate check when adding items to the list
--added remove by index function to allow for removal when multiple of the same item exist in the list

../jmatter-20090430/jmatter/src/com/u2d/list
CriteriaListEO.java
--removed export JSON from menu options
RelationalList.java
--added option to dissociate by index instead of by object

../jmatter-20090430/jmatter/src/com/u2d/field
Association.java
--added option for dissociate by index instead of by object
AssociationStrategy.java
--added option for dissociate by index instead of by object
DynaAssociationStrategy.java
--added option for dissociate by index instead of by object
BasicAssociationStrategy.java
--added option for dissociate by index instead of by object

../jmatter-20090430/jmatter/src/com/u2d/element
Command.java
--removed default 'Execute' command for every jmatter button right click

------------------------------------------------------------------------------------------------------------------
======SwingVM package============

../jmatter-20090430/modules/swingvm/src/com/u2d/view/swing
AppFrame.java
--database delete option added
--top pane admin menu was removed
--description area word wrapped
--splash help screen added for first use of jts
--set pageSize for application view to very high number so that items are not paginated in browse views
--removed skin menu for Substance theme choices
EntryPoint.java
--set default theme to nimbus if avaliable, else set to a default Substance skin


../jmatter-20090430/modules/swingvm/src/com/u2d/view/swing/list
ReorderListView.java
--Fixed an error in jmatter that cause exceptions for reordering a list that was not saved
--modified removal from list to index instead of item
--fixed criteria for getting the initial index of a dragged item
EditableListView.java
--added option for dissociation of item by index instead of object

------------------------------------------------------------------------------------------------------------------
======ds-swing package============

../jmatter-20090430/modules/ds-swing/src/com/u2d/ui
GradientPanel.java
--changed gradient paint to horizonal and changed color to static for all panes
SeeThruTree.java
--added styles.css option as ".trees"
SeeThruList.java
--added styles.css option as ".lists"
SeeThruTable.java
--added styles.css option as ".table"
GridList.java
--added styles.css option as ".grid-list"

