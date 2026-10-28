// rea decompile_all
// name: _GAME.Team.TeamServer.<GetTeamInfoDetailedByServerId>d__8$$MoveNext
// address: 0x778ba70
// body: available
// range: 0x778ba70-0x778bdb7 inclusive
// range: 0x778be68-0x778bf53 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778bdb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<GetTeamInfoDetailedByServerId>d__8__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522d86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199f98);
    FUN_03f5c2a4(&DAT_09199fd8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918df10);
    FUN_03f5c2a4(&DAT_0918b988);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d86 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0778bcd0:
    uVar3 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      if (local_50[8] != '\0') goto LAB_0778bd84;
    }
    else {
      uVar2 = local_50._10_2_;
      lVar9 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar7 = *(long *)uVar3;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0778bd70;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar3,lVar9,0);
LAB_0778bd70:
      uVar4 = (*(code *)*puVar6)(uVar3,uVar2,puVar6[1]);
      if ((uVar4 & 1) != 0) {
LAB_0778bd84:
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar9 + 0x30) == 200) {
          uVar3 = _GAME_Team_TeamServer__ParseTeamInfoResponse
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(param_1 + 10),
                             *(undefined1 *)((long)param_1 + 0x31),0);
          goto LAB_0778be70;
        }
      }
    }
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_0918b988);
    _GAME_Team_TeamQueryResult___ctor(uVar3,0);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar3);
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    auVar1._8_8_ = local_50._8_8_;
    auVar1._0_8_ = local_50._0_8_;
    auVar12._8_8_ = local_40._8_8_;
    auVar12._0_8_ = local_40._0_8_;
    if (((uVar4 & 1) == 0) &&
       (lVar9 = *(long *)(param_1 + 10), local_40 = auVar12, local_50 = auVar1, -1 < lVar9)) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar3 = thunk_FUN_03f9944c(DAT_0918df10);
      _GAME_Team_ABIServerTeamGetInfoModel_RequestModel___ctor(uVar3,uVar11,lVar9,0);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar3,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar5,uVar11,1,10,uVar3,0);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x10,uVar5);
      auVar12 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0x10),(char)param_1[0xc],0,0);
      local_40._0_8_ = 0;
      local_40._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_40 = auVar12;
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
      uVar4 = FUN_0430cf0c(local_50,DAT_0919a588);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        FUN_047934f4(param_1 + 2,local_50,param_1,DAT_09199f98);
        return;
      }
      goto LAB_0778bcd0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe);
LAB_0778be70:
  *param_1 = -2;
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar3);
  }
  else {
    lVar9 = *(long *)(DAT_09199fd8 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar7 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0778bf30;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,lVar9,2);
LAB_0778bf30:
    (*(code *)*puVar6)(plVar10,uVar3,puVar6[1]);
  }
  return;
}

