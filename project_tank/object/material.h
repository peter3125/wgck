#ifndef __DXPARSER_MATERIAL_H_
#define __DXPARSER_MATERIAL_H_

///==========================================================================///

#include <object/texture.h>

///==========================================================================///

class TMaterial
{
public:
	TMaterial( void );
    ~TMaterial( void );

	TMaterial( const TMaterial& material );
	const TMaterial& operator=( const TMaterial& material );

    // load & save binary routines for fast loading & saving
    bool		SaveBinary( TPersist& file ) const;
    bool		LoadBinary( TPersist& file, const TString& path, TString& errStr );

    // display info on this object
	void Print( void ) const;

	void		PauseAnimation( bool tf );

    const TString&	FileName( void ) const;
    bool		FileName( const TString& fname, const TString& path, TString& errStr );

    const TString&	MaterialName( void ) const;
    void		MaterialName( const TString& mname );

    void		GetMaterialColour( float& r, float& g, float& b, float& a ) const;
    void		SetMaterialColour( const float& r, const float& g, const float& b, const float& a );

    void		GetMaterialPower( float& pow ) const;
    void		SetMaterialPower( const float& pow );

    void		GetMaterialEmission( float& r, float& g, float& b ) const;
    void		SetMaterialEmission( const float& r, const float& g, const float& b );

    void		GetMaterialSpecularity( float& r, float& g, float& b ) const;
    void		SetMaterialSpecularity( const float& r, const float& g, const float& b );

    const float*	ColourRGBA( void ) const;
	const float*	ColourRGB( void ) const;
    const float*	Power( void ) const;
    const float*	Emission( void ) const;
    const float*	Specularity( void ) const;

    const TTexture&	Texture( void ) const;
	void			Texture( const TTexture& );

	bool		Texture( const TString& fname, const TString& path, TString& errStr );

	long		ObjectSize( void ) const;

private:
	float 		rgba[4];
	float 		rgb[3];
    float 		power[4];
    float 		emissRGB[4];
    float 		specRGB[4];

    TString		materialname;
    TString		filename;

    TTexture	texture;

	long		objectSize;
};

//==========================================================================

#endif

