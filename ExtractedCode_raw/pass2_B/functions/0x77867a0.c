// rea decompile_all
// name: _GAME.Team.TeamServer.<ChangeScoreByServerId>d__27$$MoveNext
// address: 0x77867a0
// body: available
// range: 0x77867a0-0x7786c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7786c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7786c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7786c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<ChangeScoreByServerId>d__27__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_34;
  
  if ((DAT_09522d6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199e40);
    FUN_03f5c2a4(&DAT_09199e98);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_0918ded0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d6e = 1;
  }
  local_34 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if (((uVar3 & 1) != 0) || (lVar9 = *(long *)(param_1 + 10), lVar9 == 0)) {
      uVar10 = _GAME_Team_TeamCommandResult__TransportFailure();
      goto LAB_07786b28;
    }
    lVar4 = thunk_FUN_03f9944c(DAT_09193748);
    _GAME_Profile_ProfileDbModel_PreviewModel___ctor(lVar4,lVar9,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    lVar9 = *(long *)(param_1 + 10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)(lVar9 + 0x18);
    iVar1 = *(int *)(lVar9 + 0x78);
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = Newtonsoft_Json_JsonConvert__SerializeObject(lVar4,0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918ded0);
    _GAME_Team_ABIServerTeamChangeScoreModel_RequestModel___ctor
              (uVar6,uVar10,uVar12,(long)iVar1,uVar5);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
    uVar12 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar6,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar5,uVar10,1,10,uVar12,0);
    *(undefined8 *)(param_1 + 0xe) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar5);
    auVar13 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                        (*(undefined8 *)(param_1 + 0xe),(char)param_1[0xc],0,0);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar13;
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    uVar3 = FUN_0430cf0c(local_60,DAT_0919a588);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_04792d14(param_1 + 2,local_60,param_1,DAT_09199e40);
      return;
    }
  }
  uVar10 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    if (local_60[8] != '\0') goto LAB_07786af0;
  }
  else {
    uVar2 = local_60._10_2_;
    lVar9 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar4 = *(long *)uVar10;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07786adc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar10,lVar9,0);
LAB_07786adc:
    uVar3 = (*(code *)*puVar7)(uVar10,uVar2,puVar7[1]);
    if ((uVar3 & 1) != 0) {
LAB_07786af0:
      lVar9 = *(long *)(param_1 + 0xe);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar9 + 0x30) == 200) {
        uVar3 = _GAME_Team_TeamServer__TryReadWireStatus
                          (*(undefined8 *)(lVar9 + 0x40),&local_34,&local_68);
        if ((uVar3 & 1) == 0) {
          uVar10 = _GAME_Team_TeamCommandResult__TransportFailure();
        }
        else {
          uVar10 = _GAME_Team_TeamCommandResult__FromStatus(local_34);
        }
        goto LAB_07786b28;
      }
    }
  }
  uVar10 = _GAME_Team_TeamCommandResult__TransportFailure();
LAB_07786b28:
  *param_1 = -2;
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar10;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar10);
  }
  else {
    lVar9 = *(long *)(DAT_09199e98 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar4 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07786bec;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar11,lVar9,2);
LAB_07786bec:
    (*(code *)*puVar7)(plVar11,uVar10,puVar7[1]);
  }
  return;
}

