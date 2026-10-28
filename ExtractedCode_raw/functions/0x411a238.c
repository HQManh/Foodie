// rea decompile_all
// name: AnhPD.FoodOrder.TutorialStepTalk$$LocalizedLines
// address: 0x411a238
// body: available
// range: 0x411a238-0x411a38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411a364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411a388 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_TutorialStepTalk__LocalizedLines(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_09516258 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09211650);
    DAT_09516258 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar6) {
        return lVar1;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if ((lVar3 == 0) || ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6)) {
        uVar4 = 0;
      }
      else {
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0411a388;
        uVar4 = *(undefined8 *)(lVar3 + uVar6 * 8 + 0x20);
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_0411a388:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = *(undefined8 *)(lVar2 + uVar6 * 8 + 0x20);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = CakeOrder_Localization_CakeLocalization__Get(DAT_09211650,uVar4,uVar5,0);
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_0411a388;
      *(undefined8 *)(lVar1 + uVar6 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8(lVar1 + 0x20 + uVar6 * 8);
      lVar2 = *(long *)(param_1 + 0x28);
      uVar6 = uVar6 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

