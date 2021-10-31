#include<vector>
#include"Pixel.h"
class Image {
	private:
		int width, height;
		vector <Pixel>  pixels;
	public:
		Image():width(0),height(0){}
		Image(int width, int height, vector <Pixel> pixels){
			this->height = height;
			this->width = width;
			this->pixels = pixels;
		}
		void decode(const char* filename) {
			std::vector<unsigned char> image; //the raw pixels
			//decode
			unsigned error = lodepng::decode(image, width, height, filename);
			//if there's an error, display it
			if(error){
				std::cout << "decoder error " << error << ": " << lodepng_error_text(error) << std::endl;
				assert(false);
			}
			//the pixels are now in the vector "image", 4 bytes per pixel, ordered RGBARGBA..., use it as texture, draw it, ...
			for( )
			}
		Image(const Image& i): wide(i.wide),height(i.height), pixels(i.pixels){}
		int getWidth(){
			return width;
		}
		int getHeight(){
			return height;
		}
		Pixel getPixels(){
			return pixels;
		}
		void setWidth(int w){
			width=w;
		}
		void setHeight(int w){
			height=w;
		}
		void setWidth(vector <Pixel> w){
			pixels=w;
		}
};
