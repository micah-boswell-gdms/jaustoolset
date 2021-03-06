/** 
 *  This Promela file was auto-generated using JTS on Wed Apr 13 15:58:21 EDT 2011.
 *  ID=MAIN  vsersion=1.1
 *  DO NOT MODIFY
 *  This file contains type definitions found in the JSIDL that was used to generate it.
 */ 

/** 
 *  This is the main model file and will contain instances of all message channels and state machines.
 */ 

#include "userEditableConfig.pml"
#include "urn_jts_EnumTest_static.pml"

// Create channels for all the messages and events.
#include "channels.pml"


// These includes should come after message and event channels are declared.
#include "userEditableEvents.pml"
#include "userEditableGuardsAndActions.pml"
#include "userEditableClients.pml"


// starting state machine definition : EnumTest
active proctype EnumTest(){
	pid incoming_pid = 0;
	pid current_client_pid = 0;
	urn_jts_EnumTest_EnumTestMessage urn_jts_EnumTest_EnumTestMessage_inst;
goto EnumTest_State3;
	// Start Entry Actions
	EnumTest_State3:
	do
		:: true ->
		goto EnumTest_State3_IMPL;
	od;
	// End Entry Actions
	EnumTest_State3_IMPL:
	do
		:: EnumTestMessage ? incoming_pid, urn_jts_EnumTest_EnumTestMessage_inst ->
			if
			// unguarded transition 
			:: true ->
				Action_printEnumResults();
			fi
			
	od;
}
// ending state machine definition : EnumTest
