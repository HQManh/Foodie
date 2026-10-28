// rea decompile_all
// name: AnhPD.FoodOrder.SpineSkinSwitcher$$ResolveSkin
// address: 0x412ce8c
// body: available
// range: 0x412ce8c-0x412cfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412cfb8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412cfbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SpineSkinSwitcher__ResolveSkin(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((DAT_0951630f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951630f = 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar8 = 0;
    uVar2 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    lVar6 = 0;
    do {
      if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar5 + 0x20 + uVar8 * 8);
      lVar7 = lVar6;
      if (lVar9 != 0) {
        uVar4 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar2 & 1) != 0) {
          plVar1 = *(long **)(lVar9 + 0x10);
          if (lVar6 == 0) {
            if (plVar1 == (long *)0x0) goto LAB_0412cfbc;
          }
          else {
            if ((plVar1 == (long *)0x0) || (*(long *)(lVar6 + 0x10) == 0)) {
LAB_0412cfbc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((int)plVar1[3] <= *(int *)(*(long *)(lVar6 + 0x10) + 0x18)) goto LAB_0412cf7c;
          }
          uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x180));
          if (((uVar2 & 1) != 0) &&
             (uVar2 = AnhPD_FoodOrder_SpineSkinSwitcher__HasSkin
                                (param_1,*(undefined8 *)(lVar9 + 0x18)), lVar7 = lVar9,
             (uVar2 & 1) == 0)) {
            lVar7 = lVar6;
          }
        }
      }
LAB_0412cf7c:
      uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar8 = uVar8 + 1;
      lVar6 = lVar7;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    if (lVar7 != 0) {
      puVar3 = (undefined8 *)(lVar7 + 0x18);
      goto LAB_0412cf9c;
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x38);
LAB_0412cf9c:
  return *puVar3;
}

