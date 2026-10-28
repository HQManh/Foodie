// rea decompile_all
// name: FUN_03fcf488
// address: 0x3fcf488
// body: available
// range: 0x3fcf488-0x3fcf593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcf4f0 to 0x3fce8ec FUN_03fce8ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcf488(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_097480f0 == 0) || (DAT_09748728 == 0)) {
    if (DAT_09748500 == 0) {
      FUN_03fce8ec();
      return;
    }
  }
  else {
    param_1 = DAT_09515688 * param_1;
    iVar2 = param_1 - DAT_097485a0;
    if (iVar2 != 0 && (int)DAT_097485a0 <= param_1) {
      do {
        iVar1 = FUN_03fcf594(0);
        if (iVar1 != 0) {
          if (DAT_09748500 != 0) break;
          if ((DAT_09748558 < DAT_0951568c) && (DAT_09515668 != 999999999999)) {
            DAT_09748550 = clock();
            iVar2 = FUN_03fcee4c(FUN_03fce700);
            if (iVar2 == 0) {
              DAT_09748558 = DAT_09748558 + 1;
              break;
            }
          }
          else {
            FUN_03fcee4c(&LAB_03fce6f8);
          }
          FUN_03fcf0b4();
          break;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0 < (int)DAT_097485a0) {
      DAT_097485a0 = DAT_097485a0 - param_1 & ((int)(DAT_097485a0 - param_1) >> 0x1f ^ 0xffffffffU);
    }
  }
  return;
}

