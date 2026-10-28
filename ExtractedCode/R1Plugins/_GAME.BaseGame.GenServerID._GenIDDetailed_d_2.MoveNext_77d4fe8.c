// rea decompile_all
// name: _GAME.BaseGame.GenServerID.<GenIDDetailed>d__2$$MoveNext
// address: 0x77d4fe8
// body: available
// range: 0x77d4fe8-0x77d54c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d54bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d54c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_GenServerID_<GenIDDetailed>d__2__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522fd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09180dc8);
    FUN_03f5c2a4(&DAT_091996e0);
    FUN_03f5c2a4(&DAT_09199720);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1628);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918de88);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09522fd5 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_09180dc8);
    _GAME_BaseGame_ABIServerIDCommandResult___ctor();
    plVar12 = (long *)(param_1 + 10);
    *plVar12 = lVar3;
    thunk_FUN_03f5d7b8(plVar12,lVar3);
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *plVar12;
      goto LAB_077d53c4;
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar5 = thunk_FUN_03f9944c(DAT_0918de88);
    _GAME_BaseGame_ABIServerGenIDModel_RequestModel___ctor(uVar5,uVar11);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom();
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar5,0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar6,uVar11,1,3,uVar5,0);
    piVar10 = param_1 + 0xc;
    *(undefined8 *)piVar10 = uVar6;
    thunk_FUN_03f5d7b8(piVar10,uVar6);
    auVar13 = _GAME_BaseGame_ABIServerAPI__SendWebRequest(*(undefined8 *)piVar10,0,0);
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
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_04792414(param_1 + 2,local_50,param_1,DAT_091996e0);
      return;
    }
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] != '\0') goto LAB_077d5308;
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
    lVar7 = *(long *)uVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077d52f4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(uVar5,lVar3,0);
LAB_077d52f4:
    uVar4 = (*(code *)*puVar8)(uVar5,uVar2,puVar8[1]);
    if ((uVar4 & 1) != 0) {
LAB_077d5308:
      lVar3 = *(long *)(param_1 + 0xc);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar3 + 0x30) == 200) {
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = FUN_04bd15a4(uVar5,DAT_091d1628);
        lVar3 = *(long *)(param_1 + 10);
        if (lVar7 == 0) goto LAB_077d53c4;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined1 *)(lVar3 + 0x10) = 1;
        iVar1 = *(int *)(lVar7 + 0x10);
        *(int *)(lVar3 + 0x14) = iVar1;
        if (((iVar1 != 0) || (*(long *)(lVar7 + 0x18) == 0)) ||
           (iVar1 = *(int *)(*(long *)(lVar7 + 0x18) + 0x10), iVar1 < 1)) goto LAB_077d53c4;
        local_40._0_4_ = iVar1;
        uVar5 = FUN_03f5c42c(DAT_09535420,local_40);
        uVar5 = System_String__Format(DAT_09226038,uVar5,0);
        *(undefined8 *)(lVar3 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18));
      }
    }
  }
  lVar3 = *(long *)(param_1 + 10);
LAB_077d53c4:
  *param_1 = -2;
  piVar10 = param_1 + 10;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  piVar10 = param_1 + 0xc;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar3);
  }
  else {
    lVar7 = *(long *)(DAT_09199720 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077d5498;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar12,lVar7,2);
LAB_077d5498:
    (*(code *)*puVar8)(plVar12,lVar3,puVar8[1]);
  }
  return;
}

