// rea decompile_all
// name: AnhPD.FoodOrder.TutorialAnchor$$Find
// address: 0x411be04
// body: available
// range: 0x411be04-0x411bf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411bf7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bf80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_TutorialAnchor__Find(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09516262 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a49a0);
    FUN_03f5c2a4(&DAT_091a49a8);
    FUN_03f5c2a4(&DAT_091a49b0);
    FUN_03f5c2a4(&DAT_091b10d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c110);
    DAT_09516262 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = System_String__IsNullOrEmpty(param_1,0);
  uVar4 = 0;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_0918c110 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918c110 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_48,**(long **)(DAT_0918c110 + 0xb8),DAT_091b10d0);
    do {
      do {
        uVar2 = FUN_071bd28c(&local_48,DAT_091a49a8);
        lVar1 = local_38;
        if ((uVar2 & 1) == 0) {
          uVar4 = 0;
          goto LAB_0411bf48;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar1,0);
      } while ((uVar3 & 1) == 0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = System_String__op_Equality(*(undefined8 *)(lVar1 + 0x20),param_1,0);
    } while ((uVar3 & 1) == 0);
    uVar4 = UnityEngine_Component__get_transform(lVar1,0);
LAB_0411bf48:
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    FUN_071bd288(&local_48,DAT_091a49a0);
  }
  return uVar4;
}

