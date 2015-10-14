class fp_static_tow_base: StaticATWeapon {
  mapSize = 2.5;
  picture = "\FP_Static_Weapons\tow\icon\tow_static_CA.paa";
  icon = "\FP_Static_Weapons\tow\icon\icomap_tow_static_CA.paa";
  displayname = "BGM-71 TOW";

  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
      minElev = -10;
      minturn = -180;
      maxturn = 180;
      weapons[] = {"fp_static_weap_tow"};
      magazines[] = {"5Rnd_GAT_missiles", "5Rnd_GAT_missiles", "5Rnd_GAT_missiles"};
      gunnerAction = "TOW_Gunner";
      memoryPointsGetInGunner = "pos_gunner_dir";
      memoryPointsGetInGunnerDir = "pos_gunner";
      class ViewGunner {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.7;
        minFov = 0.25;
        maxFov = 1.1;
      };
      class ViewOptics {
        initAngleX = 0;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.2;
        minFov = 0.025;
        maxFov = 0.2;
        visionMode[] = {"Normal","Ti"};
        thermalMode[] = {0,1};
      };
      gunnerOpticsModel = "\FP_Static_Weapons\tow\TOW_TI";
    };
  };
  model = "\FP_Static_Weapons\tow\TOW_static";
};

class fp_static_tow_b : fp_static_tow_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};