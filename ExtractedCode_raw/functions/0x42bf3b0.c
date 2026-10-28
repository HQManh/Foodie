// rea decompile_all
// name: CakeOrder.UI.UIPopupToolUpgraded$$SetData
// address: 0x42bf3b0
// body: available
// range: 0x42bf3b0-0x42bf66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bf65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf660 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf66c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupToolUpgraded__SetData
               (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_0951730e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09223fa0);
    FUN_03f5c2a4(&DAT_09224118);
    FUN_03f5c2a4(&DAT_09224120);
    DAT_0951730e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0xc0);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09223fa0,0);
    if (plVar7 == (long *)0x0) goto LAB_042bf65c;
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
  }
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 200);
    puVar1 = &DAT_09224120;
    if ((param_4 & 1) == 0) {
      puVar1 = &DAT_09224118;
    }
    uVar6 = *puVar1;
    plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar4 == (long *)0x0) goto LAB_042bf65c;
    if ((param_2 != 0) &&
       (lVar5 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[4] = param_2;
    thunk_FUN_03f5d7b8(plVar4 + 4,param_2);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_CakeLocalization__TrFormat(uVar6,plVar4,0);
    if (plVar7 == (long *)0x0) goto LAB_042bf65c;
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_042bf65c;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0xd0),param_3,0);
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_042bf65c;
    UnityEngine_UI_Image__set_preserveAspect(*(long *)(param_1 + 0xd0),1,0);
    lVar5 = *(long *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(param_3,0,0);
    if (lVar5 == 0) goto LAB_042bf65c;
    UnityEngine_Behaviour__set_enabled(lVar5,uVar2 & 1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042bf640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    return;
  }
LAB_042bf65c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

