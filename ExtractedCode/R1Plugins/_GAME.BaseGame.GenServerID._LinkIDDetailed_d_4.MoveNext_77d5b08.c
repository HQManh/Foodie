// rea decompile_all
// name: _GAME.BaseGame.GenServerID.<LinkIDDetailed>d__4$$MoveNext
// address: 0x77d5b08
// body: available
// range: 0x77d5b08-0x77d5ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d5fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d5ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_GenServerID_<LinkIDDetailed>d__4__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522fd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09180dc8);
    FUN_03f5c2a4(&DAT_091996e8);
    FUN_03f5c2a4(&DAT_09199720);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1630);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918de90);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09522fd9 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_09180dc8);
    _GAME_BaseGame_ABIServerIDCommandResult___ctor();
    plVar12 = (long *)(param_1 + 0xc);
    *plVar12 = lVar3;
    thunk_FUN_03f5d7b8(plVar12,lVar3);
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 10),0),
       (uVar4 & 1) != 0)) {
      lVar3 = *plVar12;
      goto LAB_077d5ef4;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 10);
    uVar5 = thunk_FUN_03f9944c(DAT_0918de90);
    _GAME_BaseGame_ABIServerLinkIDModel_RequestModel___ctor(uVar5,uVar6,uVar7);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom();
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar5,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar5,uVar6,1,3,uVar7,0);
    piVar11 = param_1 + 0xe;
    *(undefined8 *)piVar11 = uVar5;
    thunk_FUN_03f5d7b8(piVar11,uVar5);
    auVar13 = _GAME_BaseGame_ABIServerAPI__SendWebRequest(*(undefined8 *)piVar11,0,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar13;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar4 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_04792534(param_1 + 2,local_50,param_1,DAT_091996e8);
      return;
    }
  }
  uVar6 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] != '\0') goto LAB_077d5e38;
  }
  else {
    uVar2 = local_50._10_2_;
    lVar3 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar8 = *(long *)uVar6;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar3) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_077d5e24;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(uVar6,lVar3,0);
LAB_077d5e24:
    uVar4 = (*(code *)*puVar9)(uVar6,uVar2,puVar9[1]);
    if ((uVar4 & 1) != 0) {
LAB_077d5e38:
      lVar3 = *(long *)(param_1 + 0xe);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar3 + 0x30) == 200) {
        uVar6 = *(undefined8 *)(lVar3 + 0x40);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = FUN_04bd15a4(uVar6,DAT_091d1630);
        lVar3 = *(long *)(param_1 + 0xc);
        if (lVar8 == 0) goto LAB_077d5ef4;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined1 *)(lVar3 + 0x10) = 1;
        iVar1 = *(int *)(lVar8 + 0x10);
        *(int *)(lVar3 + 0x14) = iVar1;
        if (((iVar1 != 0) || (*(long *)(lVar8 + 0x18) == 0)) ||
           (iVar1 = *(int *)(*(long *)(lVar8 + 0x18) + 0x10), iVar1 < 1)) goto LAB_077d5ef4;
        local_40._0_4_ = iVar1;
        uVar6 = FUN_03f5c42c(DAT_09535420,local_40);
        uVar6 = System_String__Format(DAT_09226038,uVar6,0);
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18));
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0xc);
LAB_077d5ef4:
  *param_1 = -2;
  piVar11 = param_1 + 0xc;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  piVar11 = param_1 + 0xe;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar3);
  }
  else {
    lVar8 = *(long *)(DAT_09199720 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar10 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_077d5fc8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar12,lVar8,2);
LAB_077d5fc8:
    (*(code *)*puVar9)(plVar12,lVar3,puVar9[1]);
  }
  return;
}

