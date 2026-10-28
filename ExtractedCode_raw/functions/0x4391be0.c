// rea decompile_all
// name: CakeOrder.InGame.LevelBaseCakeOrderAbstract.<SetUpLevel>d__75$$MoveNext
// address: 0x4391be0
// body: available
// range: 0x4391be0-0x43921df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43921c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43921dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelBaseCakeOrderAbstract_<SetUpLevel>d__75__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09517a3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2030);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09206ce8);
    DAT_09517a3c = 1;
  }
  plVar8 = *(long **)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar10 = ZEXT816(0);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_04391c94:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_60._0_8_;
      uVar9 = local_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_04391e94;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_04391e94:
      (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_04391ea8:
    auVar10 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = auVar10;
    thunk_FUN_03f5d7b8(local_50,0);
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
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_60._0_8_;
      uVar9 = local_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04391fa0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_04391fa0:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_0439f55c(param_1 + 2,local_60,param_1,DAT_091c2030);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < (int)plVar8[10]) goto LAB_04392080;
      CakeOrder_InGame_LevelBaseCakeOrderAbstract__PreSetUp(plVar8);
      plVar8[7] = *(long *)(param_1 + 8);
      thunk_FUN_03f5d7b8();
      plVar8[8] = *(long *)(param_1 + 10);
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar8[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(plVar8[9] + 0x10) = *(undefined8 *)(*(long *)(param_1 + 8) + 0xc0);
      thunk_FUN_03f5d7b8();
      lVar5 = plVar8[6];
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar5,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x28);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (plVar8[6] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_50 = CakeOrder_InGame_InGameBackgroundsControl__SetUp
                             (plVar8[6],*(undefined4 *)(lVar5 + 0x10),0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        thunk_FUN_03f5d7b8(local_50,0);
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
        uVar2 = local_60._0_8_;
        if ((long *)local_60._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_60._0_8_;
          uVar9 = local_60._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04392174;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_04392174:
          iVar3 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
          if (iVar3 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0xc,0);
            FUN_0439f55c(param_1 + 2,local_60,param_1,DAT_091c2030);
            return;
          }
        }
        goto LAB_04391c94;
      }
      goto LAB_04391ea8;
    }
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04392034;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_04392034:
    (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(DAT_09206ce8,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_InGame_LevelBaseCakeOrderAbstract__SetPlayState(plVar8,1);
  auVar10 = local_60;
LAB_04392080:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  local_60 = auVar10;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04392108;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_04392108:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

