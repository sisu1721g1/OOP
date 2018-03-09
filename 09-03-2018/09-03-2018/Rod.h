#pragma once
enum Material 
{
	Unspecified = 0,
	Carbon = 1,
	Wood = 2
};

class Rod
{
	int m_Length;
	bool m_IsAutomatic;
	Material m_RodMaterial;
	char* m_Name;

public:
	Rod();
	Rod(int length, bool isAutomatic, Material rodMataterial, char* name);
	~Rod();

	int getLength() const;
	void setLength(int length);

	bool isAutomatic() const;
	void setIsAutomatic(bool isAutomatic);

	Material getRodMaterial() const;
	void setRodMaterial(Material material);

	char* getName() const;
	void setName(char* name);
};

