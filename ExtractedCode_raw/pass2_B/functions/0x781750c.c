// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassCtrl.<OnOpened>d__7$$MoveNext
// address: 0x781750c
// body: available
// range: 0x781750c-0x7817a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78179f4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78179f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78179fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7817a00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7817a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x078179f4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_DreamyPass_PopupDreamyPassCtrl_<OnOpened>d__7__MoveNext(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 local_70 [16];
  long local_60;
  uint local_54;
  undefined1 local_50 [16];
  
  if ((DAT_09523296 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d20);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523296 = 1;
  }
  uVar1 = *param_1;
  local_60 = *(long *)(param_1 + 10);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (uVar1 < 2) {
    auVar9 = *(undefined1 (*) [16])(param_1 + 0xc);
    local_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_54 = 0xffffffff;
    *param_1 = 0xffffffff;
    if (uVar1 == 0) goto LAB_078176d4;
  }
  else {
    local_54 = uVar1;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_60 + 0xd8) = 1;
    local_50 = _GAME_DreamyPass_DreamyPassManager__CheckShowTutFirstOpen();
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
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
      lVar5 = *(long *)local_70._0_8_;
      uVar8 = local_70._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_078176c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_078176c0:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
      if (iVar3 != 0) goto LAB_078176d4;
      local_54 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c83c8(param_1 + 2,local_70,param_1,DAT_091c2d20);
LAB_07817994:
      iVar3 = 6;
      goto LAB_07817998;
    }
LAB_078176d4:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_70._0_8_;
      uVar8 = local_70._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_07817790;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07817790:
      (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
    }
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_60 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar9 = _GAME_DreamyPass_PopupDreamyPassListLevel__MoveListToCurLevel();
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = auVar9;
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
    auVar9 = local_70;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_70._0_8_;
      uVar8 = local_70._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0781788c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_0781788c:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
      auVar9 = local_70;
      if (iVar3 == 0) {
        local_54 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c83c8(param_1 + 2,local_70,param_1,DAT_091c2d20);
        goto LAB_07817994;
      }
    }
  }
  local_70 = auVar9;
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar5 = *(long *)local_70._0_8_;
    uVar8 = local_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07817920;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07817920:
    (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_Profile_ProfileManager__CheckFrameNameFxForEvent(0);
  iVar3 = 10;
LAB_07817998:
  if ((int)local_54 < 0) {
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_60 + 0xd8) = 0;
  }
  if ((iVar3 == 0) || (iVar3 == 10)) {
    *param_1 = 0xfffffffe;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}

