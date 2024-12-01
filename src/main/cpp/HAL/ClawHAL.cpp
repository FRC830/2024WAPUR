#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>
#include <units/length.h>
#include <units/velocity.h>
#include <units/angle.h>
#include <units/acceleration.h>
#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>
#include <subsystems/ClawHAL.h>


          // Claw movements



            ClawHAL::ClawHAL()
            { 
              // Put together this component
            }


        void ManualMovePivot(double speed)
        { 
           // Set specific usar input
        }


        double GetAngle()
        { 
          // Uses the claws usar input to take action
          return 0.0;
        }


        void ProfiledMoveToAngle(double angle)
        { 
          // Uses the claws usar input take action
        }


        double GetSpeed()
        {

         return 0.0;  //m_intakeSpeed;
    }
        

        void SetPosition()
        { 
          // Return to starting position
        }


        void PublishDebugInfo()
        { 
        }


        void ResetProfiledMoveState()
        { 
           //m_profileState = 0;
        }
  

       // Push out crate from claw

/*

        ClawHAL::LauncherHAL()
        { 
           // Put together the compontent
        }


        void SetClawHALSpeed(double speed)
         { 
            // Handle any usar input to take this action compontent
         }

        double GetClawHALSpeed()
         { 
             return 0;
         }

        void RunIntake(double speed)
         { 
            // Set motors to connect to certain speed
         }

        void ResetProfiledMoveState()
        { 
           m_profileState = 0;
        }

*/
