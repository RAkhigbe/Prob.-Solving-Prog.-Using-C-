//
//  libjpeg.cpp
//  
//
//  Created by Bex A on 10/2/19.
//

#include "jpeg.hpp"
#include <stdio.h>
#include <jpeglib.h>
#include <stdlib.h>



int write_jpeg_file( const char *filename, int width, int height, unsigned char* raw_image)
{
    int bytes_per_pixel = 3;
    
    
    
    struct jpeg_compress_struct cinfo;
    struct jpeg_error_mgr jerr;
    
    JSAMPROW row_pointer[1];
    FILE *outfile = fopen( filename, "wb" );
    
    if ( !outfile )
    {
        printf("Error opening output jpeg file %s\n!", filename );
        return -1;
    }
    cinfo.err = jpeg_std_error( &jerr );
    jpeg_create_compress(&cinfo);
    jpeg_stdio_dest(&cinfo, outfile);
    
    
    cinfo.image_width = width;
    cinfo.image_height = height;
    cinfo.input_components = bytes_per_pixel;
    cinfo.in_color_space = JCS_RGB;
    
    jpeg_set_defaults( &cinfo );
    
    jpeg_start_compress( &cinfo, TRUE );
    
    while( cinfo.next_scanline < cinfo.image_height )
    {
        row_pointer[0] = &raw_image[ cinfo.next_scanline * cinfo.image_width *  cinfo.input_components];
        jpeg_write_scanlines( &cinfo, row_pointer, 1 );
    }
    
    jpeg_finish_compress( &cinfo );
    jpeg_destroy_compress( &cinfo );
    fclose( outfile );
    
    return 1;

    
    
    }
