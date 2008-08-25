#ifndef _OUTPUTRESTART_H_
#define _OUTPUTRESTART_H_

#include "Output.h"
#include <string>
using std::string;

/*!
\file OutputRestart.h
\class OutputRestart

\brief Output routine for writing a restart file

\author Clancy Rowley
\author $LastChangedBy: $
\date 21 Aug 2008
\date $LastChangedDate: $
\version $Revision: $
*/

class OutputRestart : public Output {
public:
    /// \brief Constructor
    /// \param[in] formatString Filename in the standard printf format (e.g. "file%06d.bin")
    OutputRestart(string formatString);

    /// \brief Write the restart file
    bool doOutput(const State& x);
    
private:
    string _formatString;
};


#endif /* _OUTPUTRESTART_H_ */