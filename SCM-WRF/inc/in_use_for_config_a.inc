!STARTOFREGISTRYGENERATEDINCLUDE 'inc/in_use_for_config_a.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
IF(TRIM(vname).EQ.'acphys_tot')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphysc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphyse')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphysd')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphyss')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphysm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acphysf')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%mp_physics(id).EQ.7
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%mp_physics(id).EQ.7
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'abstot')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'absnxt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_lw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_lw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'abstot')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'absnxt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.14
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.14
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuptc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdntc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswupbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnbc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ra_sw_physics(id).EQ.24
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ra_sw_physics(id).EQ.24
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_u_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_v_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_t_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_q_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_e_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_u_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_v_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_t_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_q_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_e_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_u_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_v_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_t_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_q_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'a_e_bep')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_urban_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_urban_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrunoff')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.3
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.3
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albedosubgrid')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.5
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.5
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'alboldxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aparxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'areaxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrech')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acqspring')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acints')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acintr')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acdripr')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acthror')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acevac')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acdewc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrainlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrunsb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrunsf')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acecan')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acetran')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acedir')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acqlat')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acqrf')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acetlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsnowlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsubc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acfroc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acfrzc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acmeltc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsnbot')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acponding')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsnsub')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsnfro')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acrainsnow')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acdrips')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acthros')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsagb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acirb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acshb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acevb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acghb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acpahb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsagv')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acirg')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acshg')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acevg')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acghv')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acpahg')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsav')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acirc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acshc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acevc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'actr')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acpahv')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswdnlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acswuplsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwdnlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclwuplsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acshflsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aclhflsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acghflsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acpahlsm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'accanhs')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_ssoil')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_qinsur')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_qseva')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_etrani')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aceflxb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_dwaterxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_prcpxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_ecanxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_etranxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acc_edirxy')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'acsnmelt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_physics(id).EQ.4
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_physics(id).EQ.4
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albedo_mosaic')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_mosaic.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_mosaic.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albbck_mosaic')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%sf_surface_mosaic.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%sf_surface_mosaic.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aquad_cu')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%shcu_physics(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%shcu_physics(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'ainckfsa')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%shcu_physics(id).EQ.5
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%shcu_physics(id).EQ.5
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aerodm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%aer_opt.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%aer_opt.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aod5503d')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%aer_opt.EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%aer_opt.EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aeromcu')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%aercu_used.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%aercu_used.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aerovar')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%aercu_used.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%aercu_used.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albsi')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%seaice_albedo_opt.EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%seaice_albedo_opt.EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athmpten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aqvmpten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athcuten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aqvcuten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aucuten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avcuten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athshten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aqvshten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aushten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avshten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athblten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aqvblten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'aublten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avblten')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athratenlw')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'athratensw')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%acc_phy_tend(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%acc_phy_tend(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avg_fuel_frac')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%ifire(id).EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%ifire(id).EQ.2
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_rum')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_em(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_em(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_rvm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_em(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_em(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_wwm')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_em(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_em(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_cfu1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_cfd1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_dfu1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_efu1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_dfd1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'avgflx_efd1')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%do_avgflx_cugd(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%do_avgflx_cugd(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_mslp')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_diag_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_diag_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_pwat')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_diag_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_diag_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_precip')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_diag_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_diag_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_totprecip')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_diag_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_diag_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_rain')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_ptype_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_ptype_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_snow')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_ptype_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_ptype_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_ice')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_ptype_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_ptype_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_fzra')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_ptype_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_ptype_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_snowfall')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_ptype_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_ptype_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_hail')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cape')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_zlfc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_plfc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_lidx')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cin')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_tornado')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_llws')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_severe_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_severe_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cloud')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_cloud_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_cloud_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cloud_ceil')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_cloud_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_cloud_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_vis')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_vis_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_vis_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_vis_dust')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_vis_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_vis_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_vis_alpha')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_vis_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_vis_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_heatidx')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_therm_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_therm_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_wchill')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_therm_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_therm_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_fits')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_therm_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_therm_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_turb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_llturb')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_llturblgt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_llturbmdt')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_llturbsvr')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_tlyrbot')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_tlyrtop')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_turb_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_turb_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cape')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_zlfc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_plfc')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_lidx')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cape_mu')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cin')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'afwa_cin_mu')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%afwa_buoy_opt(id).EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%afwa_buoy_opt(id).EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albedo12m')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%use_wps_input.EQ.1
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%use_wps_input.EQ.1
  ENDIF
ENDIF
IF(TRIM(vname).EQ.'albedo12m')THEN
  IF(uses.EQ.0)THEN
    in_use = model_config_rec%use_wps_input.EQ.2
    uses = 1
  ELSE
    in_use = in_use.OR.model_config_rec%use_wps_input.EQ.2
  ENDIF
ENDIF
!ENDOFREGISTRYGENERATEDINCLUDE
