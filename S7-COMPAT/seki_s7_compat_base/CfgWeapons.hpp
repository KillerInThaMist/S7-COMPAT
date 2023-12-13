class CfgWeapons {
	class Missile_AGM_02_Plane_CAS_01_F;

	class FIR_RKT_Base : Missile_AGM_02_Plane_CAS_01_F {};

	class FIR_APKWS_Launcher: FIR_RKT_Base {
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
        canLock = 0;
		weaponLockSystem = 0;
	};

    class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F {};
	class RHS_weap_AGM114K_base_Launcher: rhs_weap_HellfireLauncher {};

    class RHS_weap_AGM114K_Launcher: RHS_weap_AGM114K_base_Launcher{
        weaponLockSystem = 0;
        canLock = 0;
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
		modes[] = {"this"};
		muzzles[] = {"this"};
    };

	class RHS_weap_AGM114N_base_Launcher: rhs_weap_HellfireLauncher {}; 
    class RHS_weap_AGM114N_Launcher: RHS_weap_AGM114N_base_Launcher {
        weaponLockSystem = 0;
        canLock = 0;
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
		modes[] = {"this"};
		muzzles[] = {"this"};
    };

	class RHS_weap_AGM114M_base_Launcher: rhs_weap_HellfireLauncher {}; 
    class RHS_weap_AGM114M_Launcher: RHS_weap_AGM114M_base_Launcher {
        weaponLockSystem = 0;
        canLock = 0;
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
		modes[] = {"this"};
		muzzles[] = {"this"};
    };
    class RHS_MELB_Hellfire: rhs_weap_HellfireLauncher {
        weaponLockSystem = 0;
        canLock = 0;
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
		modes[] = {"this"};
		muzzles[] = {"this"};
    };
    class RHS_MELB_DAGR: rhs_weap_HellfireLauncher {
        weaponLockSystem = 0;
        canLock = 0;
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
		ace_laser_showHud = 1;
		modes[] = {"this"};
		muzzles[] = {"this"};
    };

    class RocketPods;
    class rhs_weap_FFARLauncher: RocketPods {
        modes[] = {"Single", "Burst"};
    };
    class rhs_weap_FFARLauncher_M229: rhs_weap_FFARLauncher {
        modes[] = {"Single", "Burst"};
    };

    class rhs_weap_m197;
    class rhs_weap_M230: rhs_weap_m197 {
        modes[] = {"burst_all"};
    };
};