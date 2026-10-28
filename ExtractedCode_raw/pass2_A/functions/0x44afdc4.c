// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ShelfAt
// address: 0x44afdc4
// body: available
// range: 0x44afdc4-0x44afe47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44afe3c to 0x57e0998 FUN_057e0998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44afe40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afe44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfAt(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  uVar2 = (uint)param_2;
  if ((DAT_09518224 & 1) == 0) {
    auVar7 = FUN_03f5c2a4(&DAT_091b10b0);
    DAT_09518224 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x1a8);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    uVar5 = CONCAT44(0,uVar2 - uVar1);
    if ((int)uVar2 < (int)uVar1) {
      if (uVar2 < uVar1) {
        return *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar5;
    auVar7 = auVar3 << 0x40;
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar4 = FUN_057e0998(*(long *)(param_1 + 0xf8),uVar5,DAT_091b10b0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar7._0_8_,auVar7._8_8_);
}

