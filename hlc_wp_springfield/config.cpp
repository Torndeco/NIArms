#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
 class hlcweapons_Springfield1903
 {
	 requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Sounds_F_Mark","asdg_jointrails", "hlcweapons_core" };
	units[] = {"HLC_LRR_ammobox","Weapon_hlc_rifle_awcovert","Weapon_hlc_rifle_awcovert_BL","Weapon_hlc_rifle_awcovert_FDE","Weapon_hlc_rifle_awmagnum","Weapon_hlc_rifle_awmagnum_BL","Weapon_hlc_rifle_awmagnum_FDE","Weapon_hlc_rifle_awMagnum_OD_ghillie","Weapon_hlc_rifle_awMagnum_FDE_ghillie","Weapon_hlc_rifle_awMagnum_BL_ghillie"};
	weapons[] = {};
	magazines[] = {};
	version="1.2";
	author="toadie";
 };
};
class cfgMods
{
	class Mod_Base;
	class Niarms_M1903 :Mod_Base
	{
		name = "NIArsenal: M1903 Rifles";
		picture = "hlc_wp_springfield\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_springfield\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_springfield\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_springfield\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class CfgSounds
{
	class hlc_bolt_1903
	{
		name = "hlc_bolt_1903a1";
		Sound[] = { "\hlc_wp_springfield\snd\1903A1_rechamber", 1, 1, 15 };
		titles[] = {};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadM1903A1_UN = "HLC_GestureReloadM1903A1_UN"; // Would reccommend changing the naming convention, just so nothing overlaps
		HLC_GestureRechamberM1903A1_UN = "HLC_GestureRechamberM1903A1_UN";
		HLC_GestureReloadM1903A1 = "HLC_GestureReloadM1903A1"; // Would reccommend changing the naming convention, just so nothing overlaps

	};

	class Actions {
		class NoActions : ManActions {
			HLC_GestureReloadM1903A1_UN[] = { "HLC_GestureReloadM1903A1_UN", "Gesture" };
			HLC_GestureRechamberM1903A1_UN[] = { "HLC_GestureRechamberM1903A1_UN", "Gesture" };
			HLC_GestureReloadM1903A1[] = { "HLC_GestureReloadM1903A1", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions
		{
			HLC_GestureReloadM1903A1_UN[] = { "HLC_GestureReloadM1903A1_UN_Prone", "Gesture" };
			HLC_GestureRechamberM1903A1_UN[] = { "HLC_GestureRechamberM1903A1_UN_Prone", "Gesture" };
			HLC_GestureReloadM1903A1[] = { "HLC_GestureReloadM1903A1_Prone", "Gesture" };
		};
		/*
		class RifleKneelActions : RifleBaseStandActions
		{
			HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
		};*/
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReloadM1903A1_UN[] = { "HLC_GestureReloadM1903A1_UN_Context", "Gesture" };
			HLC_GestureRechamberM1903A1_UN[] = { "HLC_GestureRechamberM1903A1_UN_Context", "Gesture" };
			HLC_GestureReloadM1903A1[] = { "HLC_GestureReloadM1903A1_Prone", "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReloadM1903A1_UN[] = { "HLC_GestureReloadM1903A1_UN_Context", "Gesture" };
			HLC_GestureRechamberM1903A1_UN[] = { "HLC_GestureRechamberM1903A1_UN_Context", "Gesture" };
			HLC_GestureReloadM1903A1[] = { "HLC_GestureReloadM1903A1_Context", "Gesture" };
		};
			class RifleAdjustFProneActions : RifleAdjustProneBaseActions
			{
				HLC_GestureReloadM1903A1_UN[] = { "HLC_GestureReloadM1903A1_UN_Context", "Gesture" };
				HLC_GestureRechamberM1903A1_UN[] = { "HLC_GestureRechamberM1903A1_UN_Context", "Gesture" };
				HLC_GestureReloadM1903A1[] = { "HLC_GestureReloadM1903A1_Context", "Gesture" };
			};




		};
	};

	class CfgGesturesMale
	{
		class Default;
		class States
		{

			class HLC_GestureReloadM1903A1_UN :Default
			{
				file = "hlc_wp_springfield\anim\reload\reload_1903_standing.rtm";
				speed = 0.13333333333333333333333333333333;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.3;
				headBobMode = 2;
				rightHandIKBeg = true;
				rightHandIKCurve[] = { 0, 1, 0.026667,1, 0.04, 0, 0.88, 0, 0.9022, 1 };
				rightHandIKEnd = true;
				leftHandIKBeg = true;
				leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
				leftHandIKEnd = true;
			};
			class HLC_GestureReloadM1903A1_UN_Prone :Default
			{
				file = "hlc_wp_springfield\anim\reload\reload_1903_prone.rtm";
				speed = 0.13333333333333333333333333333333;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.1;
				headBobMode = 2;
				rightHandIKBeg = true;
				rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
				rightHandIKEnd = true;
				leftHandIKBeg = true;
				leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
				leftHandIKEnd = true;
			};
			class HLC_GestureReloadM1903A1_UN_Context : HLC_GestureReloadM1903A1_UN
			{
				mask = "handsWeapon_context";
			};
			class HLC_GestureRechamberM1903A1_UN :Default
			{
				file = "hlc_wp_springfield\anim\reload\rechamber_1903a1_standing.rtm";
				speed = 0.59998;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.1;
				headBobMode = 2;
				rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
				leftHandIKBeg = true;
				leftHandIKEnd = true;
				leftHandIKCurve[] = { 0, 1, 1, 1 };
			};
			class HLC_GestureRechamberM1903A1_UN_Prone :Default
			{
				file = "hlc_wp_springfield\anim\reload\rechamber_1903a1_prone.rtm";
				speed = 0.59998;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.01;
				headBobMode = 2;
				rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
				leftHandIKBeg = true;
				leftHandIKEnd = true;
				leftHandIKCurve[] = { 0, 1,1, 1 };
			};
			class HLC_GestureRechamberM1903A1_UN_Context : HLC_GestureRechamberM1903A1_UN
			{
				mask = "handsWeapon_context";
			};
			class HLC_GestureReloadM1903A1 :Default
			{
				file = "hlc_wp_springfield\anim\reload\reload_1903a1_standing.rtm";
				speed = 0.1875000000117188;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.3;
				headBobMode = 2;
				rightHandIKBeg = true;
				rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
				rightHandIKEnd = true;
				leftHandIKBeg = true;
				leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
				leftHandIKEnd = true;
			};
			class HLC_GestureReloadM1903A1_Prone :Default
			{
				file = "hlc_wp_springfield\anim\reload\reload_1903a1_prone.rtm";
				speed = 0.1875000000117188;
				looped = false;
				mask = "handsWeapon";
				headBobStrength = 0.1;
				headBobMode = 2;
				rightHandIKBeg = true;
				rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
				rightHandIKEnd = true;
				leftHandIKBeg = true;
				leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
				leftHandIKEnd = true;
			};
			class HLC_GestureReloadM1903A1_Context : HLC_GestureReloadM1903A1
			{
				mask = "handsWeapon_context";
			};
		};
	};


	class CfgAmmo {
		/*external*/ class B_556x45_Ball;
		// Load Data - US Army .30-06 M1 Ball
		// Provided by ACE3/Ruthberg
		class HLC_3006_FMJ	 :B_556x45_Ball {
			hit = 11.4;
			airFriction = -0.00096;			//-0.00080900;
			typicalSpeed = 810;
			//caliber = 0.922;
			caliber = 2;
			deflecting = 21;
			visibleFire = 22;
			audibleFire = 18;
			visibleFireTime = 3;
			cost = 1;
			indirecthit = 0;
			indirecthitrange = 0;
			nvgonly = 1;
			tracerendtime = 1;
			tracerscale = 1;
			tracerstarttime = 0.05;
			ACE_caliber = 7.823;
			ACE_bulletLength = 37.821;
			ACE_bulletMass = 13.0;
			ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
			ACE_ballisticCoefficients[] = { 0.250 };
			ACE_velocityBoundaries[] = {};
			ACE_standardAtmosphere = "ICAO";
			ACE_dragModel = 7;
			ACE_muzzleVelocities[] = { 690, 990 };
			ACE_barrelLengths[] = { 305 , 660.4 };
			class CamShakeExplode
			{
				power = "(10^0.5)";
				duration = "((round (10^0.5))*0.2 max 0.2)";
				frequency = 20;
				distance = "((10^0.5)*3)";
			};
			class CamShakeHit
			{
				power = 10;
				duration = "((round (10^0.25))*0.2 max 0.2)";
				frequency = 20;
				distance = 1;
			};
		};
	};
class CfgVehicles
{
	class NATO_Box_Base;
	class HLC_LRR_ammobox: NATO_Box_Base
	{	
		dlc = "Niarms_M1903";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC LRR Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class ___hlc_5rnd_3006_1903
			{
				magazine = "hlc_5rnd_3006_1903";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_M1903A1_unertl
			{
				weapon = "hlc_rifle_M1903A1_unertl";
				count = 10;
			};
			class _xxhlc_rifle_M1903A1
			{
				weapon = "hlc_rifle_M1903A1";
				count = 10;
			};
		};
	};
	class Weapon_Base_F;
	class Weapon_hlc_rifle_1903A1Unertl : Weapon_Base_F
	{
		dlc = "Niarms_M1903";
		scope = 2;
		scopeCurator = 2;
		displayName = "M1903A1 Sniper";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_M1903A1_unertl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_5rnd_3006_1903";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_1903A1 : Weapon_Base_F
	{
		dlc = "Niarms_M1903";
		scope = 2;
		scopeCurator = 2;
		displayName = "M1903A1";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_M1903A1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_5rnd_3006_1903";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M1903A1OMR : Weapon_Base_F
	{
		dlc = "Niarms_M1903";
		scope = 2;
		scopeCurator = 2;
		displayName = "M1903A1 ";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_M1903A1OMR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_5rnd_3006_1903";
				count = 1;
			};
		};
	};
	};
class CfgMagazines{
		class 30Rnd_556x45_Stanag;
		class hlc_5rnd_3006_1903 : 30Rnd_556x45_Stanag
		{	
			dlc = "Niarms_M1903";
			ammo = "HLC_3006_FMJ";
			count = 5;
			descriptionshort = "Caliber: .30-06 M1 Ball <br />Rounds: 5<br />Used in: M1903A1,M1903A4";
			displayname = "5rnd .30-06 (Ball)";
			initspeed = 854;
			lastroundstracer = 0;
			picture = "\hlc_wp_springfield\tex\ui\m_M1903A1_ca";
			scope = 2;
			tracersevery = 0;
			mass = 8;
			displaynameshort = ".30-06";
			author = "toadie";
		};

};
class CfgRecoils
{
	class recoil_default;
	class recoil_1903a1 : recoil_default
	{
		muzzleOuter[] = { 0.2, 0.6, 0.5, 0.2 };
		kickBack[] = { 0.02, 0.02 };
		temporary = 0.01;
	};
};
class CfgWeapons {
	class Rifle;
	class WeaponSlotsInfo;
	class optic_Hamr;
	class LMG_Zafir_F;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_Springfield_base : Rifle_Base_F
	{
		dlc = "Niarms_M1903";
		author = "Toadie";
		scope = protected;
		magazines[] = {};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 165;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot{
				compatibleItems[] =
				{
				};
			};


		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";


		dexterity = 1.8;
		bullet1[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15 };
		bullet2[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15 };
		bullet3[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15 };
		bullet4[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15 };
		bullet5[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15 };
		bullet6[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15 };
		bullet7[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15 };
		bullet8[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15 };
		bullet9[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15 };
		bullet10[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15 };
		bullet11[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15 };
		bullet12[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15 };
		soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
		modes[] = { "Single", "far_optic1", "medium_optic2", "far_optic2" };
		inertia = 0.8;
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				closure2[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "M1903a1_Shot_SoundSet", "M1903a1_Tail_SoundSet" };
				begin1[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin2[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin3[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "hlc_wp_springfield\snd\1903A1_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};
			begin1[] = { "\hlc_wp_fhawc\snd\AWC_Fire", 1, 1, 200 };
			begin2[] = { "\hlc_wp_fhawc\snd\AWC_Fire", 1, 1, 200 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			closure1[] = { "\hlc_wp_fhawc\snd\AWC_first", 0.7, 1, 10 };
			closure2[] = { "\hlc_wp_fhawc\snd\AWC_first", 0.7, 1, 10 };
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 1.637;
			dispersion = 0.00035;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
			airateoffire = 4;
		};
		class far_optic1 : Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			requiredOpticType = 1;
		};
		class medium_optic2 : Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2 : far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2100;
			maxRangeProbab = 0.3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};

		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;

		drysound[] = { "\hlc_core\sound\empty_machineguns", 1, 1, 10 };
		reloadmagazinesound[] = { "\hlc_core\sound\empty_machineguns", 0.5, 1 };
	};


	class hlc_rifle_M1903A1_unertl : hlc_Springfield_base
	{
		author = "Toadie";
		scope = public;
		AB_barrelTwist = 10;
		AB_barrelLength = 24;
		agm_bipod = 1;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 610;
		AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
		AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
		AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
		agm_overheating_allowbarrelswap = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		recoil = "recoil_1903a1";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
		hasBipod = false;          /// a weapon with bipod obviously has a bipod
		magazineReloadSwitchPhase = 0.35;
		magazines[] = { "hlc_5rnd_3006_1903" };
		class bg_weaponparameters
		{

			class onFired_Action
			{
				HandAction = "HLC_GestureRechamberM1903A1_UN";
				Actiondelay = 0.02;
				Sound = "hlc_bolt_1903";
				Sound_Location = "RightHandMiddle1";
				hasOptic = true;
			};



		};
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "\hlc_wp_springfield\mesh\1903A1fUnertl\1903A1.p3d";
		reloadaction = "HLC_GestureReloadM1903A1_UN";
		descriptionShort = "Springfield M1903A1 <br/>Sniper Rifle<br/>Caliber: .30-06";
		drysound[] = { "\hlc_wp_springfield\snd\1903A1_dryfire", 1, 1, 10 };
		reloadmagazinesound[] = { "\hlc_wp_springfield\snd\1903A1Unertl_reload", 0.8, 1, 20 };
		modeloptics[] = { "\hlc_wp_springfield\mesh\1903A1Unertl\fine_reticle" };
		inertia = 0.75;
		picture = "\hlc_wp_springfield\tex\ui\gear_M1903A1_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M1903A1 (Sniper)";
		discretedistance[] = { 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990, 1010, 1180, 1280, 1370, 1460, 1550, 1640, 1740, 1810 };
		discretedistanceinitindex = 2;
		bg_bipod = 1;
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_springfield\anim\awmhands.rtm" };
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		class OpticsModes {

			class Snip
			{
				//cameradir = "look";
				discretedistance[] = { 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990, 1010, 1180, 1280, 1370, 1460, 1550, 1640, 1740, 1810 };
				discretedistanceinitindex = 2;
				distancezoommax = 1810;
				distancezoommin = 90;
				memorypointcamera = "scope_eye";
				modeloptics[] = { "\hlc_wp_springfield\mesh\1903A1Unertl\fine_reticle" };
				opticsdisableperipherialvision = 1;
				opticsflare = 1;
				opticsid = 1;
				opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
				opticszoominit = 0.039385;
				opticszoommax = 0.039385;
				opticszoommin = 0.039385;
				usemodeloptics = 1;
				visionmode[] = { "Normal" };
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 121;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class asdg_FrontSideRail_1903 : asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot : CowsSlot{
				compatibleItems[] = {};
			};
			//class asdg_OpticRail_AWM : asdg_OpticRail1913 {};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				closure2[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "M1903a1_Shot_SoundSet", "M1903a1_Tail_SoundSet" };
				begin1[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin2[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin3[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "hlc_wp_springfield\snd\1903A1_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};


			reloadTime = 1.6666666666666666666666666666667;
			dispersion = 0.000436332;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class Library
		{
			libTextDesc = "Accuracy International Arctic Warfare Magnum";
		};



	};

	class hlc_rifle_M1903A1 : hlc_Springfield_base
	{
		author = "Toadie";
		scope = public;
		AB_barrelTwist = 10;
		AB_barrelLength = 24;
		agm_bipod = 1;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 610;
		AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
		AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
		AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
		agm_overheating_allowbarrelswap = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		recoil = "recoil_1903a1";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
		hasBipod = false;          /// a weapon with bipod obviously has a bipod
		magazineReloadSwitchPhase = 0.5625;
		magazines[] = { "hlc_5rnd_3006_1903" };
		class bg_weaponparameters
		{

			class onFired_Action
			{
				HandAction = "HLC_GestureRechamberM1903A1_UN";
				Actiondelay = 0.02;
				Sound = "hlc_bolt_1903";
				Sound_Location = "RightHandMiddle1";
				hasOptic = false;
			};

		};
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "\hlc_wp_springfield\mesh\1903A1\1903A1.p3d";
		reloadaction = "HLC_GestureReloadM1903A1";
		descriptionShort = "Springfield M1903A1<br/>Infantry Rifle<br/>Caliber: .30-06";
		drysound[] = { "\hlc_wp_springfield\snd\1903A1_dryfire", 1, 1, 10 };
		reloadmagazinesound[] = { "\hlc_wp_springfield\snd\1903A1_reload_noscope", 0.8, 1, 20 };
		inertia = 0.75;
		picture = "\hlc_wp_springfield\tex\ui\gear_M1903_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M1903A1";
		discretedistance[] = { 180, 90, 180, 270, 360, 450/*500 Yards*/, 540, 630, 720, 810, 900/*1000 Yards*/, 990, 1010, 1180, 1280, 1370/*1500 Yards*/, 1460, 1550, 1640, 1740, 1830/*2000 Yards*/, 1920, 2010, 2100, 2190, 2280, 2370, 2460 };
		discretedistanceinitindex = 0;
		cameradir = "look";
		discreteDistanceCameraPoint[] = { "eye2", "eye", "eye2", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11", "eye12", "eye13", "eye14", "eye15", "eye16", "eye17", "eye18", "eye19", "eye20", "eye21", "eye22", "eye23", "eye24", "eye25", "eye26", "eye27" }; /// the angle of gun changes with zeroing
		bg_bipod = 1;
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_springfield\anim\awmhands.rtm" };
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.25;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 90;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {/* "hlc_acc_Ghilliewrap" */ };
			};
			class CowsSlot : CowsSlot{
				compatibleItems[] = {};
			};
			//class asdg_OpticRail_AWM : asdg_OpticRail1913 {};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				closure2[] = { "\hlc_wp_springfield\snd\1903A1_first", 0.7, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "M1903a1_Shot_SoundSet", "M1903a1_Tail_SoundSet" };
				begin1[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin2[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				begin3[] = { "\hlc_wp_springfield\snd\1903A1_Fire", 1, 1, 1200 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "hlc_wp_springfield\snd\1903A1_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};


			reloadTime = 1.6666666666666666666666666666667;
			dispersion = 0.000436332;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class Library
		{
			libTextDesc = "Accuracy International Arctic Warfare Magnum";
		};

	};
	class hlc_rifle_M1903A1OMR : hlc_rifle_M1903A1
	{
		author = "Toadie";
		displayName = "M1903A1 'Guthrie'";
		model = "\hlc_wp_springfield\mesh\1903A1\1903A1_TMKB.p3d";
		descriptionShort = "Seize the time,and storm the tower<br/>and come correct with maximum firepower";
		class bg_weaponparameters
		{

			class onFired_Action
			{
				HandAction = "HLC_GestureRechamberM1903A1_UN";
				Actiondelay = 0.02;
				Sound = "hlc_bolt_1903";
				Sound_Location = "RightHandMiddle1";
				hasOptic = false;
			};

		};
	};
};
