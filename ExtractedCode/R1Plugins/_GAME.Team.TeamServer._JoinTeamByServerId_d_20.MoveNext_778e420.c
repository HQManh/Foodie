// rea decompile_all
// name: _GAME.Team.TeamServer.<JoinTeamByServerId>d__20$$MoveNext
// address: 0x778e420
// body: available
// range: 0x778e420-0x778ea5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778ea40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778ea58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<JoinTeamByServerId>d__20__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_54;
  undefined1 local_50 [16];
  
  if ((DAT_09522d96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199e50);
    FUN_03f5c2a4(&DAT_09199e98);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091cc078);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_0918df30);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_09218750);
    FUN_03f5c2a4(&DAT_0921a0d8);
    DAT_09522d96 = 1;
  }
  local_54 = 0;
  local_70._8_8_ = 0;
  local_60 = 0;
  local_78 = (long *)0x0;
  local_70._0_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((((uVar4 & 1) != 0) || (*(long *)(param_1 + 10) < 1)) ||
       (lVar14 = *(long *)(param_1 + 0xc), lVar14 == 0)) {
      lVar14 = _GAME_Team_TeamCommandResult__TransportFailure(0);
      goto LAB_0778e8dc;
    }
    lVar5 = thunk_FUN_03f9944c(DAT_09193748);
    _GAME_Profile_ProfileDbModel_PreviewModel___ctor(lVar5,lVar14,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    lVar14 = *(long *)(param_1 + 0xe);
    *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_1 + 10);
    if (lVar14 != 0) {
      uVar1 = *(undefined4 *)(lVar14 + 0x1c);
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar14 + 0x20);
      *(undefined4 *)(lVar5 + 0x48) = uVar1;
      thunk_FUN_03f5d7b8();
    }
    lVar14 = *(long *)(param_1 + 0xc);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)(param_1 + 10);
    uVar15 = *(undefined8 *)(lVar14 + 0x18);
    iVar3 = *(int *)(lVar14 + 0x78);
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_JsonConvert__SerializeObject(lVar5,0);
    uVar7 = thunk_FUN_03f9944c(DAT_0918df30);
    _GAME_Team_ABIServerTeamJoinModel_RequestModel___ctor
              (uVar7,uVar8,uVar15,uVar9,(long)iVar3,uVar6,0);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
    uVar9 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
    uVar15 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar15,uVar8,1,10,uVar9,0);
    *(undefined8 *)(param_1 + 0x12) = uVar15;
    thunk_FUN_03f5d7b8(param_1 + 0x12,uVar15);
    auVar16 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                        (*(undefined8 *)(param_1 + 0x12),(char)param_1[0x10],0,0);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar16;
    thunk_FUN_03f5d7b8(local_50,0);
    local_70 = local_50;
    uVar4 = FUN_0430cf0c(local_70,DAT_0919a588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      FUN_04793854(param_1 + 2,local_70,param_1,DAT_09199e50);
      return;
    }
  }
  uVar8 = local_70._0_8_;
  if ((long *)local_70._0_8_ == (long *)0x0) {
    if (local_70[8] != '\0') goto LAB_0778e7e0;
  }
  else {
    uVar2 = local_70._10_2_;
    lVar14 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c(lVar14);
    }
    lVar5 = *(long *)uVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0778e7cc;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(uVar8,lVar14,0);
LAB_0778e7cc:
    uVar4 = (*(code *)*puVar10)(uVar8,uVar2,puVar10[1]);
    if ((uVar4 & 1) != 0) {
LAB_0778e7e0:
      lVar14 = *(long *)(param_1 + 0x12);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar14 + 0x30) == 200) {
        uVar4 = _GAME_Team_TeamServer__TryReadWireStatus
                          (*(undefined8 *)(lVar14 + 0x40),&local_54,&local_60,0);
        if ((uVar4 & 1) == 0) {
          lVar14 = _GAME_Team_TeamCommandResult__TransportFailure(0);
        }
        else {
          uVar8 = _GAME_Team_TeamServer__ResolveLegacyDeleteStatus(local_54,local_60,0);
          lVar14 = _GAME_Team_TeamCommandResult__FromStatus(uVar8,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = _GAME_Team_TeamCommandResult__get_IsSuccess(lVar14,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = Newtonsoft_Json_Linq_JObject__Parse
                              (*(undefined8 *)(*(long *)(param_1 + 0x12) + 0x40),0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar11 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_0921a0d8,0);
            if (plVar11 != (long *)0x0) {
              iVar3 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
              if (iVar3 != 10) {
                if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8
                             + -8) != DAT_09187220)) {
                  lVar14 = _GAME_Team_TeamCommandResult__FromStatus(0xfffffffe,0);
                }
                else {
                  uVar4 = Newtonsoft_Json_Linq_JObject__TryGetValue
                                    (plVar11,DAT_09218750,&local_78,0);
                  if ((uVar4 & 1) != 0) {
                    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    iVar3 = (**(code **)(*local_78 + 0x228))
                                      (local_78,*(undefined8 *)(*local_78 + 0x230));
                    if (iVar3 == 6) {
                      lVar5 = FUN_04b28c18(local_78,DAT_091cc078);
                      if (lVar5 == *(long *)(param_1 + 10)) goto LAB_0778e8dc;
                    }
                    lVar14 = _GAME_Team_TeamCommandResult__FromStatus(0xfffffffe,0);
                  }
                }
              }
            }
          }
        }
        goto LAB_0778e8dc;
      }
    }
  }
  lVar14 = _GAME_Team_TeamCommandResult__TransportFailure(0);
LAB_0778e8dc:
  *param_1 = -2;
  piVar13 = param_1 + 0x12;
  piVar13[0] = 0;
  piVar13[1] = 0;
  thunk_FUN_03f5d7b8(piVar13,0);
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar14;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar14);
  }
  else {
    lVar5 = *(long *)(DAT_09199e98 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar12 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0778e99c;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar11,lVar5,2);
LAB_0778e99c:
    (*(code *)*puVar10)(plVar11,lVar14,puVar10[1]);
  }
  return;
}

