class CfgPatches
{
	class PhoenixArmoury_Unit_19th
	{
		author="Marco";
		name="Phoenix Armoury 19th";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_19th_Cadet",
			"PhoenixArmoury_Unit_19th_Trooper",
			"PhoenixArmoury_Unit_19th_Medic_Unit",
			"PhoenixArmoury_Unit_19th_Senior_Unit",
			"PhoenixArmoury_Unit_19th_SeniorMedic_Unit",
			"PhoenixArmoury_Unit_19th_Specialist_Unit",
			"PhoenixArmoury_Unit_19th_SpecialistMedic_Unit",
			"PhoenixArmoury_Unit_19th_LanceCorporal_Unit",
			"PhoenixArmoury_Unit_19th_Corporal_Unit",
			"PhoenixArmoury_Unit_19th_Sergeant_Unit",
			"PhoenixArmoury_Unit_19th_Warrant_Unit",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_19th_Trooper_Helmet",
			"PhoenixArmoury_Unit_19th_Cadet_Helmet",
			"PhoenixArmoury_Unit_19th_Senior_Helmet",
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
			"PhoenixArmoury_Unit_19th_Sergeant_Helmet",
			"PhoenixArmoury_Unit_19th_Warrant_Helmet",
			"PhoenixArmoury_Unit_19th_Trooper_Uniform",
			"PhoenixArmoury_Unit_19th_Cadet_Uniform",
			"PhoenixArmoury_Unit_19th_Medic_Uniform",
			"PhoenixArmoury_Unit_19th_Senior_Uniform",
			"PhoenixArmoury_Unit_19th_SeniorMedic_Uniform",
			"PhoenixArmoury_Unit_19th_Specialist_Uniform",
			"PhoenixArmoury_Unit_19th_SpecialistMedic_Uniform",
			"PhoenixArmoury_Unit_19th_LanceCorporal_Uniform",
			"PhoenixArmoury_Unit_19th_Corporal_Uniform",
			"PhoenixArmoury_Unit_19th_Sergeant_Uniform",
			"PhoenixArmoury_Unit_19th_Warrant_Uniform",
		};
	};
};	
class CfgWeapons
{
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_CloneNVGRange;
	class JLTS_CloneArmor;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestSuspender;


	class PhoenixArmoury_Unit_19th_Cadet_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Cadet Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Cadet_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Trooper Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Trooper_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Senior_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Senior Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Senior_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Specialist_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Specialist Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Specialist_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Sergeant_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Sergeant Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Sergeant_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Warrant_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Clone Warrant Helmet [19th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Warrant_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_19th_Cadet_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Cadet Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Cadet";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Trooper Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Medic_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Medic Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Medic";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Senior_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Senior Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Senior";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_SeniorMedic_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Senior Medic Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_SeniorMedic";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Specialist_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Specialist Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Specialist";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_SpecialistMedic_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Specialist Medic Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_SpecialistMedic";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_LanceCorporal_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Lance Corporal Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_LanceCorporal";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Corporal_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Corporal Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Corporal";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Sergeant_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Sergeant Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Sergeant";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_19th_Warrant_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Warrant Uniform [19th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_19th_Warrant";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
};
class CfgVehicles
{
    class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_rto;
	class JLTS_Clone_P2_DC15A;


	class PhoenixArmoury_Unit_19th_Cadet: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Cadet";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Cadet_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Cadet_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Cadet_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Cadet_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Cadet_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Trooper_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Trooper_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Medic_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Medic";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Medic_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Medic_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Trooper_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Trooper_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Senior_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Senior";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Senior_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Senior_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Senior_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Senior_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Senior_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_SeniorMedic_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Senior Medic";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_MedicSenior_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_MedicSenior_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_MedicSenior_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Senior_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Senior_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Specialist_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Specialist";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Specialist_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Specialist_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Specialist_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_SpecialistMedic_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Specialist Medic";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_SpecialistMedic_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_SpecialistMedic_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_SpecialistMedic_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_LanceCorporal_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Lance Corporal";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_LanceCorporal_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_LanceCorporal_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_LanceCorporal_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Corporal_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Corporal";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Corporal_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Corporal_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Corporal_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Specialist_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Sergeant_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Sergeant";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Sergeant_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Sergeant_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Sergeant_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Sergeant_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Sergeant_Helmet",
		};
	};
	class PhoenixArmoury_Unit_19th_Warrant_Unit: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Warrant Officer";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_19th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_19th_Sergeant_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Warrant_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_19th\PhoenixArmoury_Unit_19th_Warrant_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Warrant_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_19th_Warrant_Helmet",
		};
	};
};