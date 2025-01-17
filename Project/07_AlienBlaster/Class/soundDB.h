/*************************************************************************** 
  alienBlaster 
  Copyright (C) 2004 
  Paul Grathwohl, Arne Hormann, Daniel Kuehn, Soenke Schwardt

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
***************************************************************************/
#ifndef SOUND_DB_HH
#define SOUND_DB_HH

#include <SDL2/SDL.h>
#include <SDL2/SDL_mIxer.h>
#include <map>
#include <string>
#include <functional>

typedef map<string, Mix_Chunk*, greater<string> >StringSoundMap;


// TODO: freeWav mit Reference-Count

class SoundDB {
  public:
  SoundDB();
  ~SoundDB();
  
  Mix_Chunk *loadWav( string fn );
  
  private:
  StringSoundMap soundDB;
  
  Mix_Chunk *getWav( string fn );
};


#endif //#define SOUND_DB_HH
