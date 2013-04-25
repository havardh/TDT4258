#include "splash.h"

void showSplashScreen( Canvas *canvas ) {

	Image *splash0 = ImageNew( "./data/splash_0.bmp", 0, 0 );
	CanvasAdd( canvas, splash0 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash0 );
	Image *splash1 = ImageNew( "./data/splash_1.bmp", 0, 0 );
	CanvasAdd( canvas, splash1 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash1 );
	Image *splash2 = ImageNew( "./data/splash_2.bmp", 0, 0 );
	CanvasAdd( canvas, splash2 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash2 );
	Image *splash3 = ImageNew( "./data/splash_3.bmp", 0, 0 );
	CanvasAdd( canvas, splash3 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash3 );
	Image *splash4 = ImageNew( "./data/splash_4.bmp", 0, 0 );
	CanvasAdd( canvas, splash4 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash4 );
	Image *splash5 = ImageNew( "./data/splash_5.bmp", 0, 0 );
	CanvasAdd( canvas, splash5 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash5 );
	Image *splash6 = ImageNew( "./data/splash_6.bmp", 0, 0 );
	CanvasAdd( canvas, splash6 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash6 );

}
