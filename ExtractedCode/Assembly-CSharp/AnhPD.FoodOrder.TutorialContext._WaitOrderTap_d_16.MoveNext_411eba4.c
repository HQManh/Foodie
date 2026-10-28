// rea decompile_all
// name: AnhPD.FoodOrder.TutorialContext.<WaitOrderTap>d__16$$MoveNext
// address: 0x411eba4
// body: available
// range: 0x411eba4-0x411f097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411f090 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411f094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0411f08c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_TutorialContext_<WaitOrderTap>d__16__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 local_70 [16];
  int local_5c;
  int *local_58;
  undefined1 local_50 [16];
  
  local_58 = param_1;
  if ((DAT_0951627a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174878);
    FUN_03f5c2a4(&DAT_091c2158);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cd558);
    FUN_03f5c2a4(&DAT_091cd598);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_091f0f38);
    FUN_03f5c2a4(&DAT_091f0f40);
    FUN_03f5c2a4(&DAT_09195268);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951627a = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_5c = *param_1;
  if (local_5c == 0) {
LAB_0411ee40:
    local_5c = -1;
    local_70 = *(undefined1 (*) [16])(local_58 + 8);
    local_58[8] = 0;
    local_58[9] = 0;
    local_58[10] = 0;
    local_58[0xb] = 0;
    *local_58 = -1;
  }
  else {
    uVar2 = thunk_FUN_03f9944c(DAT_09195268);
    System_Object___ctor(uVar2,0);
    *(undefined8 *)(local_58 + 6) = uVar2;
    thunk_FUN_03f5d7b8(local_58 + 6,uVar2);
    uVar2 = DAT_09174878;
    lVar7 = *(long *)(local_58 + 6);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar7 + 0x10) = 0;
    uVar2 = thunk_FUN_03f9944c(uVar2);
    FUN_070a9328(uVar2,lVar7,DAT_091f0f40,0);
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b7a6ec(uVar2,DAT_091cd558);
    if (local_5c == 0) goto LAB_0411ee40;
    uVar8 = *(undefined8 *)(local_58 + 6);
    uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
    FUN_053007d8(uVar2,uVar8,DAT_091f0f38,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WaitUntil(uVar2,8,0,0,0);
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
    uVar2 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)local_70._0_8_;
      uVar9 = local_70._8_8_ & 0xffff;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0411ee6c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_0411ee6c:
      iVar1 = (*(code *)*puVar3)(uVar2,uVar9,puVar3[1]);
      if (iVar1 == 0) {
        local_5c = 0;
        *local_58 = 0;
        *(undefined1 (*) [16])(local_58 + 8) = local_70;
        thunk_FUN_03f5d7b8(local_58 + 8,0);
        FUN_04126810(local_58 + 2,local_70,local_58,DAT_091c2158);
        iVar1 = 5;
        goto LAB_0411ef1c;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_70._0_8_;
    uVar9 = local_70._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0411ef04;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_0411ef04:
    (*(code *)*puVar3)(uVar2,uVar9,puVar3[1]);
  }
  iVar1 = 6;
LAB_0411ef1c:
  if (local_5c < 0) {
    uVar8 = *(undefined8 *)(local_58 + 6);
    uVar2 = thunk_FUN_03f9944c(DAT_09174878);
    FUN_070a9328(uVar2,uVar8,DAT_091f0f40,0);
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b7bba4(uVar2,DAT_091cd598);
  }
  if ((iVar1 == 0) || (iVar1 == 6)) {
    *local_58 = -2;
    piVar5 = local_58 + 6;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_03f5d7b8(piVar5,0);
    piVar5 = local_58;
    if (DAT_095162d8 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar6 = *(long **)(piVar5 + 2);
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091866a8) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0411f020;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_0411f020:
      (*(code *)*puVar3)(plVar6,puVar3[1]);
    }
  }
  return;
}

