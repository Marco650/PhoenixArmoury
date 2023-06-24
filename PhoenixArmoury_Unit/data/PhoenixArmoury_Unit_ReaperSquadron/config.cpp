class CfgPatches
{
	class PhoenixArmoury_Unit_ReaperSquadron
	{
		author="Marco";
		name="Phoenix Armoury Reaper Squadron";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_ReaperSquadron_Trooper",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_ReaperSquadron_Trooper_Helmet",
			"PhoenixArmoury_Unit_ReaperSquadron_Trooper_Uniform",
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
	class JLTS_CloneVestRecon;


	class PhoenixArmoury_Unit_ReaperSquadron_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Cosmos";
		displayName="Clone Trooper Helmet [Reaper Squadron]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_ReaperSquadron\PhoenixArmoury_Unit_ReaperSquadron_Trooper_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_ReaperSquadron_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Cosmos";
		displayName="Clone Trooper Uniform [Reaper Squadron]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_ReaperSquadron_Trooper";
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



	class PhoenixArmoury_Unit_ReaperSquadron_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Cosmos";
		displayName="Reaper Squadron Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_ReaperSquadron_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_ReaperSquadron_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_ReaperSquadron\PhoenixArmoury_Unit_ReaperSquadron_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_ReaperSquadron\PhoenixArmoury_Unit_ReaperSquadron_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_ReaperSquadron_Trooper_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_ReaperSquadron_Trooper_Helmet",
		};
	};
};