// rea decompile_all
// name: _GAME.GameUI.DropItemController.<HideBagAsync>d__119$$MoveNext
// address: 0x7757ff4
// body: available
// range: 0x7757ff4-0x775838b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7758380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7758384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7758388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController_<HideBagAsync>d__119__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522be4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2830);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522be4 = 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x40000000,1,8,uVar7,0,0);
    thunk_FUN_03f5d7b8(local_50,0);
    uVar1 = local_50._8_8_;
    uVar7 = local_50._0_8_;
    local_60 = local_50;
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
    if ((long *)uVar7 != (long *)0x0) {
      lVar4 = *(long *)uVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0775817c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(uVar7,DAT_091868c0,0);
LAB_0775817c:
      iVar2 = (*(code *)*puVar3)(uVar7,uVar1 & 0xffffffff,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049b5c70(param_1 + 2,local_60,param_1,DAT_091c2830);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar7 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07758214;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07758214:
    (*(code *)*puVar3)(uVar7,uVar9,puVar3[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (param_1[6] == *(int *)(lVar10 + 0xf0)) {
    uVar7 = *(undefined8 *)(lVar10 + 0xc0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      uVar7 = *(undefined8 *)(lVar10 + 0xd8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(lVar10 + 0xe0) != 0) {
          DG_Tweening_TweenExtensions__Kill(*(long *)(lVar10 + 0xe0),0,0);
        }
        plVar8 = (long *)(lVar10 + 0xe8);
        if (*plVar8 != 0) {
          DG_Tweening_TweenExtensions__Kill(*plVar8,0,0);
        }
        if (*(long *)(lVar10 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar10 + 0xc0),0);
        if (*(long *)(lVar10 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Transform__get_position(*(long *)(lVar10 + 0xd8),0);
        uVar7 = DG_Tweening_ShortcutExtensions__DOMove(uVar7,0,0);
        lVar10 = FUN_04d9656c(uVar7,1,DAT_091dc028);
        *plVar8 = lVar10;
        thunk_FUN_03f5d7b8(plVar8);
      }
    }
  }
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}

