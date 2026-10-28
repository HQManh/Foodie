// rea decompile_all
// name: AnhPD.FoodOrder.DragItem.<>c__DisplayClass72_0$$<PlayWindUp>b__0
// address: 0x41135ec
// body: available
// range: 0x41135ec-0x41136f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41136ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41136f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItem_<>c__DisplayClass72_0__<PlayWindUp>b__0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09516210 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbf30);
    FUN_03f5c2a4(&DAT_091dbfc8);
    DAT_09516210 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + 0xf0);
    if (*plVar4 != *(long *)(param_1 + 0x18)) {
      return;
    }
    uVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf();
    uVar1 = DG_Tweening_ShortcutExtensions__DOMoveY
                      (*(float *)(param_1 + 0x20) + 0.06,0x3e99999a,uVar1,0,0);
    uVar1 = FUN_04d95e8c(uVar1,4,DAT_091dbeb0);
    uVar1 = FUN_04d962f4(uVar1,0xffffffff,1,DAT_091dbf30);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(param_1 + 0x10));
      lVar3 = FUN_04d9642c(uVar1,uVar2,DAT_091dbfc8);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

