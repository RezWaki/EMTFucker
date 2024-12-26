#include "emtfucka.h"
#include <Windows.h>
#include <stdio.h>

int main( int argc, char** argv ) {
	printf( "EMTFucker-CMD\n-------------\n" );
	if( argc < 3 ) {
		printf( "Expected: inputfile outputfile\n" );
		return 1;
	}

	if( !stricmp(&argv[1][strlen(argv[1])-3], "ogg") ) {
		printf( "Converting %s to EMT (%s)...\n", argv[1], argv[2] );
		ConvertOGGFile( argv[1], argv[2] );
	}
	else if( !stricmp(&argv[1][strlen(argv[1])-3], "emt") ) {
		printf( "Converting %s to OGG (%s)...\n", argv[1], argv[2] );
		ConvertEMTFile( argv[1], argv[2] );
	}
	else {
		printf( "Unrecognized file format %s\n", &argv[1][strlen(argv[1])-3] );
		return -1;
	}

	return 1;
}