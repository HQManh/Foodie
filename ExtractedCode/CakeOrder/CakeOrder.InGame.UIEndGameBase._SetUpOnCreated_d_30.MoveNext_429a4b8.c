// rea decompile_all
// name: CakeOrder.InGame.UIEndGameBase.<SetUpOnCreated>d__30$$MoveNext
// address: 0x429a4b8
// body: available
// range: 0x429a4b8-0x429a81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429a7e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a800 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a80c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429a818 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameBase_<SetUpOnCreated>d__30__MoveNext(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_48;
  
  if ((DAT_095171f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921a2c8);
    DAT_095171f5 = 1;
  }
  plVar10 = *(long **)(param_1 + 6);
  local_48 = 0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar10[0x25] = *(long *)(param_1 + 8);
  thunk_FUN_03f5d7b8(plVar10 + 0x25);
  plVar10[0x26] = *(long *)(param_1 + 10);
  thunk_FUN_03f5d7b8(plVar10 + 0x26);
  plVar10[0x21] = *(long *)(param_1 + 0xc);
  thunk_FUN_03f5d7b8(plVar10 + 0x21);
  plVar10[0x22] = *(long *)(param_1 + 0xe);
  thunk_FUN_03f5d7b8(plVar10 + 0x22);
  if ((plVar10[0x19] != 0) && (*(long *)(plVar10[0x19] + 0x18) != 0)) {
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = CONCAT44(local_70._4_4_,*(int *)(*(long *)(param_1 + 0xc) + 0x1c) + 1);
    lVar4 = FUN_03f5c42c(DAT_09535420,&local_70);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a2c8,plVar3,0);
    lVar4 = plVar10[0x19];
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar3 = *(long **)(lVar4 + 0x20 + lVar5 * 8);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar3 + 0x558))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x560));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
  }
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc) + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = (**(code **)(*plVar10 + 0x2c8))
                    (plVar10,*(undefined4 *)(lVar4 + 0x14),*(undefined8 *)(*plVar10 + 0x2d0));
  lVar4 = plVar10[0x1a];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar4,0);
  if (((uVar7 & 1) != 0) && (uVar7 = System_String__IsNullOrEmpty(uVar6,0), (uVar7 & 1) == 0)) {
    if (plVar10[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(plVar10[0x1a] + 0x20);
    UnityEngine_Localization_Tables_TableEntryReference__op_Implicit(&local_88,uVar6,0);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_98 = uStack_80;
    local_a0 = local_88;
    local_90 = local_78;
    UnityEngine_Localization_LocalizedReference__set_TableEntryReference(lVar4,&local_a0,0);
  }
  (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
  cVar2 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0429a7c0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_0429a7c0:
    (*(code *)*puVar8)(plVar10,puVar8[1]);
  }
  return;
}

