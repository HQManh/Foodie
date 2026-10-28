// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$ResetBeltSegments
// address: 0x40f1fe0
// body: available
// range: 0x40f1fe0-0x40f213b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f212c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f2130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f2134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f2138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__ResetBeltSegments(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_095160ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5510);
    FUN_03f5c2a4(&DAT_091a5518);
    FUN_03f5c2a4(&DAT_091a5520);
    FUN_03f5c2a4(&DAT_091b30c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160ec = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x48),DAT_091b30c8);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  while( true ) {
    do {
      uVar2 = FUN_071bd28c(&local_50,DAT_091a5518);
      lVar3 = local_40;
      if ((uVar2 & 1) == 0) {
        FUN_071bd288(&local_50,DAT_091a5510);
        return;
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(local_40 + 0x30) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_40 + 0x30),0);
      lVar1 = DAT_09188ad0;
      *(undefined1 *)(lVar3 + 0x38) = 0;
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    } while ((uVar2 & 1) == 0);
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x10),0);
    if (lVar3 == 0) break;
    UnityEngine_GameObject__SetActive(lVar3,0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

