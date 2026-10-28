// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureManager.<<CheckResetEvent>g__ReOpenPopupEventDelay|19_0>d$$MoveNext
// address: 0x77eec30
// body: available
// range: 0x77eec30-0x77eeef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77eeef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureManager_<<CheckResetEvent>g__ReOpenPopupEventDelay_19_0>d__MoveNext
               (int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095230dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2dc0);
    FUN_03f5c2a4(&DAT_091d6018);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095230dc = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3dcccccd,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_40,0);
    uVar2 = local_40._8_8_;
    uVar1 = local_40._0_8_;
    local_50 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    if ((long *)uVar1 != (long *)0x0) {
      lVar6 = *(long *)uVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077eedb0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar1,DAT_091868c0,0);
LAB_077eedb0:
      iVar3 = (*(code *)*puVar4)(uVar1,uVar2 & 0xffffffff,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049cb468(param_1 + 2,local_50,param_1,DAT_091c2dc0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar1 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_50._0_8_;
    uVar9 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077eee48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_077eee48:
    (*(code *)*puVar4)(uVar1,uVar9,puVar4[1]);
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar5 = (long *)FUN_04ca5cb8(DAT_091d6018);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

