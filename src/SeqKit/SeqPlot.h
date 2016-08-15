#ifndef SNOWTOOLS_CONTIG_PLOT_H__
#define SNOWTOOLS_CONTIG_PLOT_H__

#include "SeqKit/BamRecord.h"

namespace SeqKit {
  
  /** Object for creating ASCII alignment plots
   */

  class ReadPlot {

  public:
    
    /** Create an empty plot */
    ReadPlot() {}

  private: 

    // reads that align to the contig
    BamRecordVector m_reads;

  };

}



#endif