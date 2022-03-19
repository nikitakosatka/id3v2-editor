# id3v2-editor

ID3 is the metadata format most commonly used in audio files in the format MP3. ID3 contains data about the title of the track, album, artist name, etc., which are used by media players and other programs, as well as hardware players to display information about the file and automatically organize the audio collection.

ID3v2 tags have variable length and can be placed at the beginning or at the end of the file. The tag consists of several "frames". Each frame contains some metadata. The text is stored in UTF-16 or UTF-8 encodings. The program allows you to output all the meta-information of a given file, change or add the meta-information field of the file. During development, only the functions of the standard C library were used. Both encoding types are supported: UTF-8 and UTF-16. 

Example:

![Example](https://github.com/nikitakosatka/id3v2-editor/blob/main/example.png)


The source code is divided into 3 files. main.c is the main file in which
command-line arguments are processed and the main functions of the program are called. utils.h –
the header file containing the function prototypes. utils.c is a file with
the implementation of functions from utils.h.
