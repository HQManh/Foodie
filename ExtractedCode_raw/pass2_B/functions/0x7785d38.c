// rea decompile_all
// name: _GAME.Team.TeamServer.<AssignLeaderByServerId>d__25$$MoveNext
// address: 0x7785d38
// body: available
// range: 0x7785d38-0x7786173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778616c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7786170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<AssignLeaderByServerId>d__25__MoveNext(int *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_09522d6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199e38);
    FUN_03f5c2a4(&DAT_09199e98);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918dec8);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d6a = 1;
  }
  local_24 = 0;
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 != 0) {
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 10),0),
       (uVar2 & 1) == 0)) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = System_String__Equals(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar7 = *(undefined8 *)(param_1 + 10);
        uVar6 = thunk_FUN_03f9944c(DAT_0918dec8);
        _GAME_Team_ABIServerTeamAssignLeaderModel_RequestModel___ctor(uVar6,uVar3,uVar7);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar6,0);
        uVar6 = thunk_FUN_03f9944c(DAT_0918cfb8);
        _GAME_BaseGame_WebRequestModel___ctor(uVar6,uVar3,1,10,uVar7,0);
        *(undefined8 *)(param_1 + 0xe) = uVar6;
        thunk_FUN_03f5d7b8(param_1 + 0xe,uVar6);
        auVar11 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                            (*(undefined8 *)(param_1 + 0xe),(char)param_1[0xc],0,0);
        local_40._0_8_ = 0;
        local_40._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_40 = auVar11;
        thunk_FUN_03f5d7b8(local_40,0);
        local_60 = local_40;
        uVar2 = FUN_0430cf0c(local_60,DAT_0919a588);
        if ((uVar2 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_04792bf4(param_1 + 2,local_60,param_1,DAT_09199e38);
          return;
        }
        goto LAB_07785e38;
      }
    }
    uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
    goto LAB_07785f2c;
  }
  local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = -1;
LAB_07785e38:
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    if (local_60[8] != '\0') goto LAB_07785eec;
  }
  else {
    uVar1 = local_60._10_2_;
    lVar4 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar8 = *(long *)uVar3;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07785ed8;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar3,lVar4,0);
LAB_07785ed8:
    uVar2 = (*(code *)*puVar5)(uVar3,uVar1,puVar5[1]);
    if ((uVar2 & 1) != 0) {
LAB_07785eec:
      lVar4 = *(long *)(param_1 + 0xe);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar4 + 0x30) == 200) {
        uVar2 = _GAME_Team_TeamServer__TryReadWireStatus
                          (*(undefined8 *)(lVar4 + 0x40),&local_24,&local_48);
        if ((uVar2 & 1) == 0) {
          uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
        }
        else {
          _GAME_Team_TeamServer__ResolveLegacyDeleteStatus(local_24,local_48);
          uVar3 = _GAME_Team_TeamCommandResult__FromStatus();
        }
        goto LAB_07785f2c;
      }
    }
  }
  uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
LAB_07785f2c:
  *param_1 = -2;
  piVar9 = param_1 + 0xe;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar3);
  }
  else {
    lVar4 = *(long *)(DAT_09199e98 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar8 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07785ff0;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar4,2);
LAB_07785ff0:
    (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
  }
  return;
}

