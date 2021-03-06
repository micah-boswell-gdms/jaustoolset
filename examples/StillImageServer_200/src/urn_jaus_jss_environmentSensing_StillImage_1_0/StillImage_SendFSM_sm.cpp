/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : StillImage_SendFSM_sm.sm
 */

#include "urn_jaus_jss_environmentSensing_StillImage_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_environmentSensing_StillImage_1_0/StillImage_SendFSM.h"
#include "include/urn_jaus_jss_environmentSensing_StillImage_1_0/StillImage_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_environmentSensing_StillImage_1_0
{
    // Static class declarations.
    StillImage_SendFSM_SM_Sending StillImage_SendFSM_SM::Sending("StillImage_SendFSM_SM::Sending", 0);
    StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void StillImage_SendFSMState::BroadcastGlobalTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::BroadcastLocalTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::CancelEventTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::CreateEventTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::EventErrorTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::EventOccurredTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryAuthorityTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryControlTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryEventsTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QuerySensorGeometricPropertiesTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryStillImageDataTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryStillImageSensorCapabilitiesTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryStillImageSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryTimeoutTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryVisualSensorCapabilitiesTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::QueryVisualSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::ReceiveTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::ReleaseControlTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::RequestControlTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::SendTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::SetAuthorityTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::SetStillImageSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::SetVisualSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::TimeoutTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::UpdateEventTransition(StillImage_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void StillImage_SendFSMState::Default(StillImage_SendFSMContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryControlTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryStillImageDataTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageDataTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageDataTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorCapabilitiesTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorCapabilitiesTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorCapabilitiesTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStillImageSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryVisualSensorCapabilitiesTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVisualSensorCapabilitiesTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVisualSensorCapabilitiesTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryVisualSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVisualSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVisualSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::RequestControlTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetStillImageSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetStillImageSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetStillImageSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetVisualSensorConfigurationTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetVisualSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetVisualSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void StillImage_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(StillImage_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : StillImage_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
