class CfgAmmo {
	class SmokeShell;
	class SmokeShellBlue;
	class SmokeShellGreen;
	class SmokeShellOrange;
	class SmokeShellPurple;
	class SmokeShellRed;
	class SmokeShellYellow;
	class FIR_AWS_AerobaticSmoke_White;
    
	// Vanilla 40mm smoke nades
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.25;
	};

	class FIR_AWS_SmokeShell: FIR_AWS_AerobaticSmoke_White {
        effectsSmoke = "UK3CB_SmokeShellBlueEffect";
        timeToLive = 120;
	}
	// RHS American smoke grenades
    class rhs_40mm_m713_red: SmokeShellRed {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.25;
	};

    class rhs_40mm_m713_white: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.25;
	};

	class rhs_40mm_m715_green: SmokeShellGreen {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.25;
	};

    class rhs_40mm_m716_yellow: SmokeShellYellow {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.25;
	};

	class MissileBase;
	class Missile_AGM_02_F;

	class FIR_APKWS_Rocket: Missile_AGM_02_F {
		class ace_missileguidance {
            enabled = 0;

            minDeflection = 0.0005;
            maxDeflection = 0.01;
            incDeflection = 0.0005;

            canVanillaLock = 0;

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;
            seekerAngle = 70;
            seekerAccuracy = 1;

            seekerMinRange = 1;
            seekerMaxRange = 5000;

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};

	class FIR_APKWS_M247_Rocket: FIR_APKWS_Rocket {
		class ace_missileguidance: ace_missileguidance {
            enabled = 1;
        };
	}

	class FIR_APKWS_M282_Rocket: FIR_APKWS_Rocket {
		class ace_missileguidance: ace_missileguidance {
            enabled = 1;
        };
	}

    class rhs_ammo_Hellfire_AT: Missile_AGM_02_F { // AGM-114L
        class ace_missileguidance {
            enabled = 0;

            minDeflection = 0.0005;
            maxDeflection = 0.01;
            incDeflection = 0.0005;

            canVanillaLock = 0;

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;
            seekerAngle = 70;
            seekerAccuracy = 1;

            seekerMinRange = 1;
            seekerMaxRange = 5000;

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
    };
    class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT { // AGM-114K
        class ace_missileguidance: ace_missileguidance {
            enabled = 1;
        };
    };
    class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K { // AGM-114M
        class ace_missileguidance: ace_missileguidance {
            enabled = 1;
        };
    };
    class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M { // AGM-114N
        class ace_missileguidance: ace_missileguidance {
            enabled = 1;
        };
    };

    class RHS_Ammo_DAGR: MissileBase { // DAGR
        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;
            maxDeflection = 0.01;
            incDeflection = 0.0005;

            canVanillaLock = 0;

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;
            seekerAngle = 70;
            seekerAccuracy = 1;

            seekerMinRange = 1;
            seekerMaxRange = 5000;

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
    };
    /*class RHS_DAGR_Ammo_MELB: RHS_Ammo_DAGR {
        class ace_missileguidance : ace_missileguidance {
            enabled = 1;
        };
    };*/
};