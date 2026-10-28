// rea decompile_all
// name: _GAME.Inbox.InboxFIconUICtrl.<RefreshNotify>d__7$$MoveNext
// address: 0x77cd730
// body: available
// range: 0x77cd730-0x77cdb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77cdaf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cdaf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cdafc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cdb00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_InboxFIconUICtrl_<RefreshNotify>d__7__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  uint local_24;
  
  if ((DAT_09522f9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c2aa0);
    FUN_03f5c2a4(&DAT_0919a620);
    FUN_03f5c2a4(&DAT_0919a628);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_091bde68);
    FUN_03f5c2a4(&DAT_091f9f30);
    DAT_09522f9f = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
  local_24 = 0;
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
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522bd9 == '\0') {
      FUN_03f5c2a4(&DAT_09189938);
      DAT_09522bd9 = '\x01';
    }
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09189938 + 0xb8) + 8) == '\0') goto LAB_077cda28;
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
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar4 & 1) != 0) goto LAB_077cda28;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar10 + 0x38) + 1;
    *(int *)(lVar10 + 0x38) = iVar1;
    param_1[0xc] = iVar1;
    auVar12 = _GAME_Inbox_InboxServer__CountNewInbox(0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde68 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar12;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar4 = FUN_043587e4(local_50,DAT_0919a628);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bbf30(param_1 + 2,local_50,param_1,DAT_091c2aa0);
      return;
    }
  }
  uVar11 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    uVar3 = local_50._8_4_;
  }
  else {
    uVar2 = local_50._12_2_;
    lVar5 = *(long *)(DAT_0919a620 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar8 = *(long *)uVar11;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_077cd9e4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar11,lVar5,0);
LAB_077cd9e4:
    uVar3 = (*(code *)*puVar6)(uVar11,uVar2,puVar6[1]);
  }
  local_24 = uVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if ((uVar4 & 1) == 0) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((param_1[0xc] == *(int *)(lVar10 + 0x38)) && (-1 < (int)uVar3)) {
      if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(*(long *)(lVar10 + 0x28),uVar3 != 0,0);
      uVar11 = *(undefined8 *)(lVar10 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if (((uint)uVar11 & (uint)(uVar3 != 0)) != 0) {
        lVar10 = *(long *)(lVar10 + 0x30);
        uVar7 = DAT_091f9f30;
        if (uVar3 < 10) {
          uVar11 = System_Int32__ToString(&local_24,0);
          uVar7 = uVar11;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar11,uVar7);
        }
        TMPro_TMP_Text__SetText(lVar10,uVar7,0);
      }
    }
  }
LAB_077cda28:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

