// rea decompile_all
// name: _GAME.Team.TeamServer.<DeleteTeamByServerId>d__15$$MoveNext
// address: 0x77881bc
// body: available
// range: 0x77881bc-0x77885cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77885c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<DeleteTeamByServerId>d__15__MoveNext(int *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_09522d76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199e48);
    FUN_03f5c2a4(&DAT_09199e98);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918dee8);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d76 = 1;
  }
  local_24 = 0;
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar2 & 1) != 0) {
      uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
      goto LAB_077884d8;
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar3 = thunk_FUN_03f9944c(DAT_0918dee8);
    _GAME_Team_ABIServerTeamDeleteModel_RequestModel___ctor(uVar3,uVar9);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar3,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar4,uVar9,1,10,uVar3,0);
    *(undefined8 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0xc,uVar4);
    auVar11 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                        (*(undefined8 *)(param_1 + 0xc),(char)param_1[10],0,0);
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
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_04792f54(param_1 + 2,local_60,param_1,DAT_09199e48);
      return;
    }
  }
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    if (local_60[8] != '\0') goto LAB_07788498;
  }
  else {
    uVar1 = local_60._10_2_;
    lVar5 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *(long *)uVar3;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07788484;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar3,lVar5,0);
LAB_07788484:
    uVar2 = (*(code *)*puVar6)(uVar3,uVar1,puVar6[1]);
    if ((uVar2 & 1) != 0) {
LAB_07788498:
      lVar5 = *(long *)(param_1 + 0xc);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar5 + 0x30) == 200) {
        uVar2 = _GAME_Team_TeamServer__TryReadWireStatus
                          (*(undefined8 *)(lVar5 + 0x40),&local_24,&local_48);
        if ((uVar2 & 1) == 0) {
          uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
        }
        else {
          _GAME_Team_TeamServer__ResolveLegacyDeleteStatus(local_24,local_48);
          uVar3 = _GAME_Team_TeamCommandResult__FromStatus();
        }
        goto LAB_077884d8;
      }
    }
  }
  uVar3 = _GAME_Team_TeamCommandResult__TransportFailure();
LAB_077884d8:
  *param_1 = -2;
  piVar8 = param_1 + 0xc;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar3);
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
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0778859c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,2);
LAB_0778859c:
    (*(code *)*puVar6)(plVar10,uVar3,puVar6[1]);
  }
  return;
}

