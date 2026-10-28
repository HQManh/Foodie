// rea decompile_all
// name: _GAME.Inbox.InboxServer.<ActionInbox>d__5$$MoveNext
// address: 0x77c829c
// body: available
// range: 0x77c829c-0x77c8763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c8758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c875c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c8760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_InboxServer_<ActionInbox>d__5__MoveNext(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522f76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091997b0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1610);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918de70);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522f76 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_077c856c:
    uVar11 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_077c8620;
    }
    else {
      uVar3 = local_60._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar9 = *(long *)uVar11;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077c860c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(uVar11,lVar6,0);
LAB_077c860c:
      uVar5 = (*(code *)*puVar8)(uVar11,uVar3,puVar8[1]);
      if ((uVar5 & 1) != 0) {
LAB_077c8620:
        lVar6 = *(long *)(param_1 + 0xe);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar6 + 0x30) == 200) {
          uVar11 = *(undefined8 *)(lVar6 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = FUN_04bd15a4(uVar11,DAT_091d1610);
          if (lVar6 != 0) {
            bVar4 = *(int *)(lVar6 + 0x10) == 0;
            goto LAB_077c867c;
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
    uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar5 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = _GAME_BaseGame_R1ServerConfig__get_Current(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x4c);
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(param_1 + 10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = *(undefined8 *)(lVar6 + 0x10);
      cVar2 = *(char *)(lVar6 + 0x62);
      uVar13 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      uVar7 = thunk_FUN_03f9944c(DAT_0918de70);
      _GAME_Inbox_ABIServerActionInboxModel_RequestModel___ctor
                (uVar7,uVar11,uVar1,uVar13,uVar14,cVar2 != '\0');
      uVar11 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile();
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
      uVar13 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar13,uVar11,1,3,uVar7,0);
      *(undefined8 *)(param_1 + 0xe) = uVar13;
      thunk_FUN_03f5d7b8(param_1 + 0xe,uVar13);
      auVar15 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0xe),(char)param_1[0xc],0);
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_50 = auVar15;
      thunk_FUN_03f5d7b8(local_50,0);
      local_60 = local_50;
      uVar5 = FUN_0430cf0c(local_60,DAT_0919a588);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_0478e2ac(param_1 + 2,local_60,param_1,DAT_091997b0);
        return;
      }
      goto LAB_077c856c;
    }
  }
  bVar4 = false;
LAB_077c867c:
  *param_1 = -2;
  piVar10 = param_1 + 0xe;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar4;
  }
  else {
    lVar6 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar9 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077c8730;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar12,lVar6,2);
LAB_077c8730:
    (*(code *)*puVar8)(plVar12,bVar4,puVar8[1]);
  }
  return;
}

