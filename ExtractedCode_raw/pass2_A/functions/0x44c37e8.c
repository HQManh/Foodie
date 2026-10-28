// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController.<>c__DisplayClass53_1$$<OnApplyBoosterEffect>g__CompletePick|2
// address: 0x44c37e8
// body: available
// range: 0x44c37e8-0x44c3917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c3914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController_<>c__DisplayClass53_1__<OnApplyBoosterEffect>g__CompletePick_2
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09518283 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09518283 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_044c3870;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_044c3870:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 != 0) && (lVar4 = *(long *)(lVar2 + 0x28), lVar4 != 0)) {
      if (*(long *)(lVar4 + 0x100) != *(long *)(param_1 + 0x10)) {
LAB_044c38d4:
        if (*(char *)(lVar2 + 0x10) == '\0') {
          lVar4 = *(long *)(lVar2 + 0x18);
          *(undefined1 *)(lVar2 + 0x10) = 1;
          if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x044c3910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar2 + 0x20),
                       *(undefined8 *)(lVar4 + 0x28));
            return;
          }
        }
        return;
      }
      *(undefined8 *)(lVar4 + 0x100) = 0;
      thunk_FUN_03f5d7b8(lVar4 + 0x100,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0x108) = 0;
        thunk_FUN_03f5d7b8(lVar2 + 0x108,0);
        lVar2 = *(long *)(param_1 + 0x18);
        if (lVar2 != 0) goto LAB_044c38d4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

