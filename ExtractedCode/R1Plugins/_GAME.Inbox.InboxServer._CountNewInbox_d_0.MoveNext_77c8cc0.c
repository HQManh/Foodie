// rea decompile_all
// name: _GAME.Inbox.InboxServer.<CountNewInbox>d__0$$MoveNext
// address: 0x77c8cc0
// body: available
// range: 0x77c8cc0-0x77c917b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c9170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c9174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c9178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_InboxServer_<CountNewInbox>d__0__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522f7a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199bb8);
    FUN_03f5c2a4(&DAT_09199c18);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1618);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918de78);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_09219b58);
    DAT_09522f7a = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_077c8f80:
    uVar5 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      if (local_50[8] != '\0') goto LAB_077c9034;
    }
    else {
      uVar2 = local_50._10_2_;
      lVar4 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar8 = *(long *)uVar5;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_077c9020;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar5,lVar4,0);
LAB_077c9020:
      uVar3 = (*(code *)*puVar7)(uVar5,uVar2,puVar7[1]);
      if ((uVar3 & 1) != 0) {
LAB_077c9034:
        lVar4 = *(long *)(param_1 + 10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar4 + 0x30) == 200) {
          uVar5 = *(undefined8 *)(lVar4 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = FUN_04bd15a4(uVar5,DAT_091d1618);
          if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 0)) {
            if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar10 = *(int *)(*(long *)(lVar4 + 0x18) + 0x10);
            goto LAB_077c9088;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = _GAME_BaseGame_R1ServerConfig__get_Current(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x4c);
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      uVar5 = thunk_FUN_03f9944c(DAT_0918de78);
      _GAME_Inbox_ABIServerCountNewInboxModel_RequestModel___ctor(uVar5,DAT_09219b58,uVar1,uVar12);
      uVar12 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile();
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar5,0);
      uVar6 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar6,uVar12,1,3,uVar5,0);
      *(undefined8 *)(param_1 + 10) = uVar6;
      thunk_FUN_03f5d7b8(param_1 + 10,uVar6);
      auVar13 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 10),(char)param_1[8],0);
      local_40._0_8_ = 0;
      local_40._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_40 = auVar13;
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
      uVar3 = FUN_0430cf0c(local_50,DAT_0919a588);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_04790d80(param_1 + 2,local_50,param_1,DAT_09199bb8);
        return;
      }
      goto LAB_077c8f80;
    }
  }
  iVar10 = -1;
LAB_077c9088:
  *param_1 = -2;
  piVar9 = param_1 + 10;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 == (long *)0x0) {
    param_1[6] = iVar10;
  }
  else {
    lVar4 = *(long *)(DAT_09199c18 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar8 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_077c913c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar11,lVar4,2);
LAB_077c913c:
    (*(code *)*puVar7)(plVar11,iVar10,puVar7[1]);
  }
  return;
}

