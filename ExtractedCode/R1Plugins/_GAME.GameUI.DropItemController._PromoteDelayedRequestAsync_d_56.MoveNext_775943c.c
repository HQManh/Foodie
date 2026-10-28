// rea decompile_all
// name: _GAME.GameUI.DropItemController.<PromoteDelayedRequestAsync>d__56$$MoveNext
// address: 0x775943c
// body: available
// range: 0x775943c-0x77597ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7759798 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775979c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77597a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77597a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77597a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07759798) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<PromoteDelayedRequestAsync>d__56__MoveNext(int *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  undefined1 local_70 [16];
  long local_58;
  undefined1 local_50 [16];
  int local_34;
  
  if ((DAT_09522be8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2840);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522be8 = 1;
  }
  local_34 = *param_1;
  local_58 = *(long *)(param_1 + 4);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (local_34 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_34 = -1;
    *param_1 = -1;
    goto LAB_0775961c;
  }
  param_1[10] = 0;
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(local_58 + 0x78) == 0) {
    param_1[10] = 2;
LAB_077596b0:
    iVar9 = 0xb;
    local_70 = auVar2;
  }
  else {
    iVar9 = param_1[6];
    uVar3 = System_Threading_CancellationTokenSource__get_Token(*(long *)(local_58 + 0x78),0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(iVar9,1,8,uVar3,0,0);
    thunk_FUN_03f5d7b8(local_50,0);
    local_70 = local_50;
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
    uVar3 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
LAB_0775961c:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_70._0_8_;
      auVar2 = local_70;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_70._0_8_;
        uVar8 = local_70._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_077596a0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077596a0:
        (*(code *)*puVar4)(uVar3,uVar8,puVar4[1]);
        auVar2 = local_70;
      }
      goto LAB_077596b0;
    }
    lVar5 = *(long *)local_70._0_8_;
    uVar8 = local_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07759608;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07759608:
    iVar9 = (*(code *)*puVar4)(uVar3,uVar8,puVar4[1]);
    if (iVar9 != 0) goto LAB_0775961c;
    local_34 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_70;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_049d168c(param_1 + 2,local_70,param_1,DAT_091c2840);
    iVar9 = 7;
  }
  if (local_34 < 0) {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(int *)(local_58 + 100) - 1;
    *(uint *)(local_58 + 100) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  if ((iVar9 != 0xb) && (iVar9 != 0)) {
    return;
  }
  iVar9 = param_1[10];
  if (iVar9 == 0) {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_58 + 0x70) == '\0') {
      _GAME_GameUI_DropItemController__StartOrQueueReservedRequest
                (local_58,*(undefined8 *)(param_1 + 8),0);
      goto LAB_0775971c;
    }
    iVar9 = 2;
  }
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(0,iVar9);
  }
  _GAME_GameUI_DropItemController_DropRequest__Reject(*(long *)(param_1 + 8),iVar9,0);
LAB_0775971c:
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}

