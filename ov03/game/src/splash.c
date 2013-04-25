#include "splash.h"

void showSplashScreen( Canvas *canvas ) {

	int timeout = 100000; // 0.1 second

	Image *splash0 = ImageNew( "./data/splash_0.bmp", 0, 0 );
	CanvasAdd( canvas, splash0 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash0 );
	Image *splash1 = ImageNew( "./data/splash_1.bmp", 0, 0 );
	CanvasAdd( canvas, splash1 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash1 );
	Image *splash2 = ImageNew( "./data/splash_2.bmp", 0, 0 );
	CanvasAdd( canvas, splash2 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash2 );
	Image *splash3 = ImageNew( "./data/splash_3.bmp", 0, 0 );
	CanvasAdd( canvas, splash3 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash3 );
	Image *splash4 = ImageNew( "./data/splash_4.bmp", 0, 0 );
	CanvasAdd( canvas, splash4 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash4 );
	Image *splash5 = ImageNew( "./data/splash_5.bmp", 0, 0 );
	CanvasAdd( canvas, splash5 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash5 );
	Image *splash6 = ImageNew( "./data/splash_6.bmp", 0, 0 );
	CanvasAdd( canvas, splash6 );
	CanvasPaint( canvas );
	usleep( timeout );
	CanvasRemove( canvas, splash6 );

}
