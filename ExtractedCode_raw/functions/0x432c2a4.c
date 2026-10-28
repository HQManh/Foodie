// rea decompile_all
// name: CakeOrder.Home.UIItemToolRecipeCard$$Refresh
// address: 0x432c2a4
// body: available
// range: 0x432c2a4-0x432c5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432c5a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432c5a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432c5b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolRecipeCard__Refresh(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_24;
  
  if ((DAT_095176ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921a838);
    DAT_095176ac = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x98) == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x70);
      puVar2 = (undefined4 *)(param_1 + 0x74);
      puVar3 = (undefined4 *)(param_1 + 0x78);
      puVar4 = (undefined4 *)(param_1 + 0x7c);
    }
    else {
      puVar1 = (undefined4 *)(param_1 + 0x80);
      puVar2 = (undefined4 *)(param_1 + 0x84);
      puVar3 = (undefined4 *)(param_1 + 0x88);
      puVar4 = (undefined4 *)(param_1 + 0x8c);
    }
    if (plVar7 == (long *)0x0) goto LAB_0432c5a0;
    (**(code **)(*plVar7 + 0x2a8))
              (*puVar1,*puVar2,*puVar3,*puVar4,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    uVar10 = 0;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0432c5a0;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x38);
    }
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0432c5a0;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x50),uVar10,0);
    lVar11 = *(long *)(param_1 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if (lVar11 == 0) goto LAB_0432c5a0;
    UnityEngine_Behaviour__set_enabled(lVar11,uVar5 & 1,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x58);
    if (plVar7 == (long *)0x0) goto LAB_0432c5a0;
    (**(code **)(*plVar7 + 0x558))
              (plVar7,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*plVar7 + 0x560));
  }
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_0432c5a0;
    (**(code **)(*plVar7 + 0x558))
              (plVar7,**(undefined8 **)(DAT_09535468 + 0xb8),*(undefined8 *)(*plVar7 + 0x560));
  }
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x68);
  plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
  local_24 = 0;
  lVar11 = FUN_03f5c42c(DAT_09535420,&local_24);
  if (plVar7 != (long *)0x0) {
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar7[4] = lVar11;
    thunk_FUN_03f5d7b8(plVar7 + 4,lVar11);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a838,plVar7,0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x560));
      return;
    }
  }
LAB_0432c5a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

