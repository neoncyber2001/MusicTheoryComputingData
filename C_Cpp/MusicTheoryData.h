#ifndef _MusicTheoryData_h

#define _MusicTheoryData_h
//CODE

#define SHARP 	 1
#define FLAT	-1

//TODO Scales, Chords, Fix Degrees, Misc


enum MusicNotes:int{
	NOTE_C=0,
	NOTE_Csh=1,
	NOTE_Dfl=1,
	NOTE_D=2,
	NOTE_Dsh=3,
	NOTE_Efl=3,
	NOTE_E=4,
	NOTE_F=5,
	NOTE_Fsh=6,
	NOTE_Gfl=6,
	NOTE_G=7,
	NOTE_Gsh=8,
	NOTE_Afl=8,
	NOTE_A=9,
	NOTE_Ash=10,
	NOTE_Bfl=10,
	NOTE_B=11	
}

enum MajorScaleDegrees:int{
	MA_DEG_ROOT=0,
	MA_DEG_I=1,
	MA_DEG_II=2,
	MA_DEG_III=3
	MA_DEG_IV=4,
	MA_DEG_V=5,
	MA_DEG_VI=6,
	MA_DEG_VII=7
}
enum MajorScaleDegrees:int{
	MI_DEG_I=1,
	MI_DEG_II=2,
	MI_DEG_III=3
	MI_DEG_IV=4,
	MI_DEG_V=5,
	MI_DEG_VI=6,
	MI_DEG_VII=7
}

class MusicTheory{
	public:
	static int MiddleC = 60;

	static int GetOctive(int oct){return 24+(12*oct);}
	

}



#endif

