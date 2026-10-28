// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView.<>c__DisplayClass78_0$$<Bind>b__3
// address: 0x44d4a08
// body: available
// range: 0x44d4a08-0x44d4bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d4bec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
CookOrder_Cooking_Implement_CookingCustomerView_<>c__DisplayClass78_0__<Bind>b__3
          (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_095182e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091e6ab8);
    FUN_03f5c2a4(&DAT_0918eeb0);
    DAT_095182e1 = 1;
  }
  if (((*(long *)(param_1 + 0x10) != 0) && (param_2 != 0)) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x48), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    lVar6 = *(long *)(param_1 + 0x18);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917b510) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_044d4af8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b510,0);
LAB_044d4af8:
    uVar1 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eeb0);
    }
    puVar2 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
    lVar3 = puVar2[3];
    if (lVar3 == 0) {
      if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eeb0);
        puVar2 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
      }
      uVar9 = *puVar2;
      lVar3 = thunk_FUN_03f9944c(DAT_09178620);
      FUN_053239c8(lVar3,uVar9,DAT_091e6ab8,0);
      plVar7 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 0x18);
      *plVar7 = lVar3;
      thunk_FUN_03f5d7b8(plVar7,lVar3);
    }
    uVar8 = FUN_04af6d6c(uVar8,lVar3,DAT_091ca340);
    uVar8 = FUN_04b0462c(uVar8,DAT_091cae30);
    if ((lVar6 != 0) &&
       (lVar3 = CookOrder_Cooking_Implement_CookingMapPresentation__ResolveComposite
                          (lVar6,uVar1,uVar8), lVar3 != 0)) {
      return *(undefined1 *)(lVar3 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

