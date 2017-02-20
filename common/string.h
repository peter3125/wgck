//==========================================================================
//
//	Written by Peter de Vocht
//
//
//==========================================================================

#ifndef __COMMON_STRING_H__
#define __COMMON_STRING_H__

//==========================================================================

class _EXPORT TString
{
public:
	TString( void );
	TString( const TString& str );
	TString( const char* str );
	TString( char str );
	TString( long num );
	TString( double num );
	~TString( void );

	const TString&	operator = ( const TString& );
	const TString&	operator = ( const char* );

	char&			operator [] ( size_t index );
	const char&		operator [] ( size_t index ) const;

	const char*		c_str( void ) const;
	size_t			length( void ) const;
	TString			substr( size_t index, size_t len=0 ) const;

	TString			lcase( void ) const;
	TString			ucase( void ) const;

	bool			contains( const TString& str ) const;

	size_t			NumItems( const char& seperator ) const;
	TString			GetItem( const char& seperator, size_t index ) const;

private:
	char*	str;
	char	nullStr[1];
	size_t	len;
};

TString	_EXPORT operator + ( const TString& str1, const TString& str2 );
TString	_EXPORT operator + ( const TString& str1, const char* str2 );
bool _EXPORT operator == ( const TString& str1, const TString& str2 );
bool _EXPORT operator == ( const TString& str1, const char* str2 );
bool _EXPORT operator != ( const TString& str1, const TString& str2 );
bool _EXPORT operator != ( const TString& str1, const char* str2 );
TString _EXPORT FormatString( const char* format, ... );
TString	_EXPORT IntToString( long num );
TString	_EXPORT Int2Str( long num );
long	_EXPORT StringToInt( const TString& str );

TString _EXPORT FloatToString( size_t p1, size_t p2, const double& num );

//==========================================================================

#endif
