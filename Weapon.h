#pragma once



	//Weapon Class type
	enum WeaponType  { NO_WEAPON, PISTOLS , ASSAULT, SNIPER      , LMG };
	//Weapon sub class type
	enum pistolType  { NO_PISTOL, MAGNUM  , M9     , DESERT_EAGLE      };
	enum assaultType {NO_ASSAULT, SCAR_L  , SCAR_H					   };
	enum sniperType  {NO_SNIPER , BARRET  , INTERVENTION			   };
	enum lmgType     {NO_LMG    , LONG_GUN, BELT_GUN			       };

	struct subWeaponType
	{
		pistolType   pistol;
		assaultType assault;
		sniperType   sniper;
		lmgType         lmg;
		enum test {NO_TEST};
	};



class Weapon
{

private:
	char response;
	bool hasDecided = false;

protected:
	int   m_damage;
	int   m_clipSize;
	int   m_ammoCount;
	int   m_clipCount;
	float m_reloadSpeed;
	float m_range;
	bool  m_isReloading;
	
	WeaponType    m_currWeaponType;
	subWeaponType m_subWeaponType;
	//string m_currWeaponName;
	

public:


	//string getWeaponName();
	//takes in the weapon class type, and index for which sub class type
	//void   switchWeapons(WeaponType, subWeaponType);

	void PistolMenu();
	void AssaultMenu();
	void SniperMenu();
	void LmgMenu();
	void   switchWeapons(pistolType);
	void   switchWeapons(assaultType);
	void   switchWeapons(sniperType);
	void   switchWeapons(lmgType);
	//fires the weapon
	void   fire();
	void reload();

	 Weapon();
	~Weapon();
};

