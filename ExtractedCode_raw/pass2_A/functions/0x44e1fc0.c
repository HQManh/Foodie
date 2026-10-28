// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$SetPaused
// address: 0x44e1fc0
// body: available
// range: 0x44e1fc0-0x44e214f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e2148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e214c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingToolPresentation__SetPaused(long param_1,byte param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_0951836c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951836c = 1;
  }
  if (*(byte *)(param_1 + 0x80) != (param_2 & 1)) {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(byte *)(param_1 + 0x80) = param_2 & 1;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_044e2148;
      CookOrder_Cooking_Implement_CookingBlenderVisual__SetPaused
                (*(long *)(param_1 + 0x88),param_2 & 1,0);
    }
    lVar3 = DAT_091c03d0;
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 == 0) {
      lVar6 = *(long *)(DAT_091c03d0 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c03d0);
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar6 = **(long **)(lVar3 + 0xb8);
      if (lVar6 == 0) {
LAB_044e2148:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_044e2148;
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar2 & 1) != 0) {
          plVar4 = *(long **)(lVar3 + 0x40);
          if (plVar4 == (long *)0x0) goto LAB_044e2148;
          (**(code **)(*plVar4 + 0x1b8))(plVar4,param_2 & 1,*(undefined8 *)(*plVar4 + 0x1c0));
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}

