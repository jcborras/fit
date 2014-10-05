////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2014 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 12.20Release
// Tag = $Name$
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_HRM_PROFILE_MESG_HPP)
#define FIT_HRM_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class HrmProfileMesg : public Mesg
{
   public:
      HrmProfileMesg(void) : Mesg(Profile::MESG_HRM_PROFILE)
      {
      }

      HrmProfileMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_index field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetMessageIndex(void) const
      {
         return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_index field
      ///////////////////////////////////////////////////////////////////////
      void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
      {
         SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns enabled field
      ///////////////////////////////////////////////////////////////////////
      FIT_BOOL GetEnabled(void) const
      {
         return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set enabled field
      ///////////////////////////////////////////////////////////////////////
      void SetEnabled(FIT_BOOL enabled)
      {
         SetFieldENUMValue(0, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns hrm_ant_id field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16Z GetHrmAntId(void) const
      {
         return GetFieldUINT16ZValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set hrm_ant_id field
      ///////////////////////////////////////////////////////////////////////
      void SetHrmAntId(FIT_UINT16Z hrmAntId)
      {
         SetFieldUINT16ZValue(1, hrmAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns log_hrv field
      ///////////////////////////////////////////////////////////////////////
      FIT_BOOL GetLogHrv(void) const
      {
         return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set log_hrv field
      ///////////////////////////////////////////////////////////////////////
      void SetLogHrv(FIT_BOOL logHrv)
      {
         SetFieldENUMValue(2, logHrv, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns hrm_ant_id_trans_type field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8Z GetHrmAntIdTransType(void) const
      {
         return GetFieldUINT8ZValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set hrm_ant_id_trans_type field
      ///////////////////////////////////////////////////////////////////////
      void SetHrmAntIdTransType(FIT_UINT8Z hrmAntIdTransType)
      {
         SetFieldUINT8ZValue(3, hrmAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_HRM_PROFILE_MESG_HPP)
