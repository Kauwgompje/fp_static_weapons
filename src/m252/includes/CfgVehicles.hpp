class fp_static_m252_base : B_Mortar_01_F {
  displayName = "M252"; //81mm M252 Mortar
  model = "\FP_Static_Weapons\m252\81Mortar";
  picture = "\FP_Static_Weapons\m252\icon\mortar_m251_ca.paa";
  icon = "\FP_Static_Weapons\m252\icon\icomap_mortar_m251_ca.paa";
};

class fp_static_m252_b : fp_static_m252_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
};
