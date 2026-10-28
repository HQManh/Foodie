// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation$$CancelVisual
// address: 0x44d6808
// body: available
// range: 0x44d6808-0x44d692f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d692c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingFlightPresentation__CancelVisual
               (long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_095182f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a50a8);
    FUN_03f5c2a4(&DAT_091a50b0);
    FUN_03f5c2a4(&DAT_091a50b8);
    FUN_03f5c2a4(&DAT_091b24a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182f7 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_057e185c(&local_58,*(long *)(param_1 + 0x20),DAT_091b24a8);
    while( true ) {
      uVar2 = FUN_071bd28c(&local_58,DAT_091a50b0);
      lVar1 = local_48;
      if ((uVar2 & 1) == 0) {
        FUN_071bd288(&local_58,DAT_091a50a8);
        return;
      }
      if (local_48 == 0) break;
      uVar3 = *(undefined8 *)(local_48 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
      if ((uVar2 & 1) != 0) {
        CookOrder_Cooking_Implement_CookingFlightPresentation_Motion__Cancel(lVar1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

