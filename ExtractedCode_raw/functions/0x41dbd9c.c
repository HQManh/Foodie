// rea decompile_all
// name: AnhPD.FoodOrder.AreaService.<GetRemainingItems>d__8$$System.IDisposable.Dispose
// address: 0x41dbd9c
// body: available
// range: 0x41dbd9c-0x41dbdef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dbde0 to 0x41dc614 AnhPD.FoodOrder.AreaService.<GetRemainingItems>d__8$$<>m__Finally3 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41dbde4 to 0x41dc564 AnhPD.FoodOrder.AreaService.<GetRemainingItems>d__8$$<>m__Finally2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41dbde8 to 0x41dc4b4 AnhPD.FoodOrder.AreaService.<GetRemainingItems>d__8$$<>m__Finally1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__System_IDisposable_Dispose(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x10) + 5;
  if (uVar1 < 9) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 0x44) != 0) {
      AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally1();
      return;
    }
    if ((uVar2 & 0x82) != 0) {
      AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally2();
      return;
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x101U) != 0) {
      AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally3();
      return;
    }
  }
  return;
}

