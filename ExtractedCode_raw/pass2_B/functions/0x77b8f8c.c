// rea decompile_all
// name: _GAME.Profile.ProfileServer.<ReadProfileDetailed>d__6$$MoveNext
// address: 0x77b8f8c
// body: available
// range: 0x77b8f8c-0x77b962f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b95f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b95f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b95fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9600 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b960c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b961c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b9620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileServer_<ReadProfileDetailed>d__6__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_48;
  undefined1 local_40 [16];
  
  if ((DAT_09522ec8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199ce8);
    FUN_03f5c2a4(&DAT_09199d08);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1658);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091896d8);
    FUN_03f5c2a4(&DAT_0918deb8);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_0920b638);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_0920b630);
    DAT_09522ec8 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_091896d8);
    _GAME_Profile_ProfileQueryResult___ctor();
    *(undefined8 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0xc,uVar4);
    uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar5 & 1) != 0) goto LAB_077b9354;
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_BaseGame_ABIServerAPI__get_ProjectProfileId(0);
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar4 = thunk_FUN_03f9944c(DAT_0918deb8);
    _GAME_Profile_ABIServerReadProfileModel_RequestModel___ctor(uVar4,uVar3,uVar14);
    uVar14 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile(0);
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar4,0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar6,uVar14,1,10,uVar4,0);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar6);
    auVar15 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                        (*(undefined8 *)(param_1 + 0xe),(char)param_1[10],0,0);
    local_80._0_8_ = 0;
    local_80._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_80 = auVar15;
    thunk_FUN_03f5d7b8(local_80,0);
    local_40 = local_80;
    uVar5 = FUN_0430cf0c(local_40,DAT_0919a588);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_047929b4(param_1 + 2,local_40,param_1,DAT_09199ce8);
      return;
    }
  }
  uVar4 = local_40._0_8_;
  if ((long *)local_40._0_8_ == (long *)0x0) {
    if (local_40[8] == '\0') goto LAB_077b9354;
  }
  else {
    uVar2 = local_40._10_2_;
    lVar7 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *(long *)uVar4;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_077b92c0;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(uVar4,lVar7,0);
LAB_077b92c0:
    uVar5 = (*(code *)*puVar8)(uVar4,uVar2,puVar8[1]);
    if ((uVar5 & 1) == 0) goto LAB_077b9354;
  }
  plVar13 = (long *)(param_1 + 0xe);
  lVar7 = *plVar13;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar7 + 0x30) != 200) goto LAB_077b9354;
  uVar5 = _GAME_Profile_ProfileServer__HasWireStatus(*(undefined8 *)(lVar7 + 0x40));
  if ((uVar5 & 1) == 0) goto LAB_077b9354;
  if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(undefined8 *)(*plVar13 + 0x40);
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = FUN_04bd15a4(uVar4,DAT_091d1658);
  if (lVar7 == 0) goto LAB_077b9354;
  lVar9 = *(long *)(param_1 + 0xc);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar9 + 0x10) = 1;
  iVar1 = *(int *)(lVar7 + 0x10);
  *(int *)(lVar9 + 0x14) = iVar1;
  if ((iVar1 != 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_077b9354;
  lVar10 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10);
  lVar11 = DAT_091f5700;
  if (lVar10 != 0) {
    lVar11 = lVar10;
  }
  *(long *)(lVar9 + 0x20) = lVar11;
  thunk_FUN_03f5d7b8();
  if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_1 + 0xc) == 0) {
LAB_077b9600:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar11 = *(long *)(*(long *)(lVar7 + 0x18) + 0x18);
  lVar9 = DAT_091f5700;
  if (lVar11 != 0) {
    lVar9 = lVar11;
  }
  *(long *)(*(long *)(param_1 + 0xc) + 0x28) = lVar9;
  thunk_FUN_03f5d7b8();
  if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_1 + 0xc) == 0) goto LAB_077b9600;
  lVar11 = *(long *)(*(long *)(lVar7 + 0x18) + 0x20);
  lVar9 = DAT_091f5700;
  if (lVar11 != 0) {
    lVar9 = lVar11;
  }
  *(long *)(*(long *)(param_1 + 0xc) + 0x30) = lVar9;
  thunk_FUN_03f5d7b8();
  lVar9 = *(long *)(lVar7 + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x38) = *(undefined8 *)(lVar9 + 0x28);
  uVar5 = System_String__Equals(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(param_1 + 8),4,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(*(long *)(param_1 + 0xc) + 0x14) = 0xfffffffe;
    goto LAB_077b9354;
  }
  uVar4 = System_String__Format(DAT_0920b638,*(undefined8 *)(lVar7 + 0x18),0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar4,0);
  if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar9 = *(long *)(param_1 + 0xc);
  _GAME_Profile_ABIServerReadProfileModel_ResponseDataModel__GetPreviewEnvelope
            (&local_a0,*(long *)(lVar7 + 0x18),DAT_0920b630);
  local_80._8_8_ = uStack_98;
  local_80._0_8_ = local_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar9 + 0x48) = uStack_98;
  *(long **)(lVar9 + 0x40) = local_a0;
  *(undefined8 *)(lVar9 + 0x58) = uStack_88;
  *(undefined8 *)(lVar9 + 0x50) = uStack_90;
  thunk_FUN_03f5d7b8(lVar9 + 0x40,0);
  lVar7 = *(long *)(param_1 + 0xc);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar7 + 0x40);
  thunk_FUN_03f5d7b8();
  lVar7 = *(long *)(param_1 + 0xc);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar7 + 0x18) == 0) {
LAB_077b95a8:
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x14) = 0xfffffffe;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),0);
    lVar7 = *(long *)(param_1 + 0xc);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
  }
  else {
    uVar5 = System_String__Equals
                      (*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10),*(undefined8 *)(param_1 + 8),
                       4,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0xc);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_077b95a8;
    }
  }
  *plVar13 = 0;
  thunk_FUN_03f5d7b8(plVar13,0);
LAB_077b9354:
  *param_1 = -2;
  piVar12 = param_1 + 0xc;
  uVar4 = *(undefined8 *)piVar12;
  piVar12[0] = 0;
  piVar12[1] = 0;
  thunk_FUN_03f5d7b8(piVar12,0);
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar4);
  }
  else {
    lVar7 = *(long *)(DAT_09199d08 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_077b9418;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar13,lVar7,2);
LAB_077b9418:
    (*(code *)*puVar8)(plVar13,uVar4,puVar8[1]);
  }
  return;
}

