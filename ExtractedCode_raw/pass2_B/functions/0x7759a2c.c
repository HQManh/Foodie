// rea decompile_all
// name: _GAME.GameUI.DropItemController.<RunRequestAsync>d__59$$MoveNext
// address: 0x7759a2c
// body: available
// range: 0x7759a2c-0x7759d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7759d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759d18 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759d1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759d20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07759d18) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<RunRequestAsync>d__59__MoveNext(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  long local_50;
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522be9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27b0);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522be9 = 1;
  }
  local_44 = *param_1;
  local_50 = *(long *)(param_1 + 4);
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  auVar11 = ZEXT816(0);
  if (local_44 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = -1;
    *param_1 = -1;
LAB_07759bb8:
    uVar4 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      iVar3 = local_60._8_4_;
      auVar11 = local_60;
    }
    else {
      uVar2 = local_60._12_2_;
      lVar10 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c(lVar10);
      }
      lVar7 = *(long *)uVar4;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07759c5c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar4,lVar10,0);
LAB_07759c5c:
      iVar3 = (*(code *)*puVar6)(uVar4,uVar2,puVar6[1]);
      auVar11 = local_60;
    }
LAB_07759c6c:
    iVar9 = 0xb;
    param_1[8] = iVar3;
  }
  else {
    param_1[8] = 3;
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x78) == 0) {
      iVar3 = 2;
      goto LAB_07759c6c;
    }
    lVar10 = *(long *)(param_1 + 6);
    uVar4 = System_Threading_CancellationTokenSource__get_Token(*(long *)(local_50 + 0x78),0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar4,uVar4);
    }
    auVar11 = _GAME_GameUI_DropItemController_DropRequest__ExecuteAsync(lVar10,uVar4,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    uVar5 = FUN_0429cb44(local_60,DAT_0919a5c8);
    if ((uVar5 & 1) != 0) goto LAB_07759bb8;
    local_44 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 10) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    FUN_049b4990(param_1 + 2,local_60,param_1,DAT_091c27b0);
    iVar9 = 7;
    auVar11 = local_60;
  }
  local_60 = auVar11;
  if (-1 < local_44) {
LAB_07759cd8:
    if ((iVar9 == 0) || (iVar9 == 0xb)) {
      *param_1 = -2;
      FUN_042dada8(param_1 + 2,0);
    }
    return;
  }
  if ((*(long *)(param_1 + 6) != 0) &&
     (_GAME_GameUI_DropItemController_DropRequest__CleanupPending(*(long *)(param_1 + 6),0),
     local_50 != 0)) {
    uVar1 = *(int *)(local_50 + 0x60) - 1;
    *(uint *)(local_50 + 0x60) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    _GAME_GameUI_DropItemController__PumpScheduler(local_50,0);
    if (*(long *)(param_1 + 6) != 0) {
      _GAME_GameUI_DropItemController_DropRequest__Complete(*(long *)(param_1 + 6),param_1[8],0);
      goto LAB_07759cd8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

