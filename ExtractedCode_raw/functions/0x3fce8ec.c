// rea decompile_all
// name: FUN_03fce8ec
// address: 0x3fce8ec
// body: available
// range: 0x3fce8ec-0x3fcea67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcea00 to 0x3fcf0b4 FUN_03fcf0b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fce8ec(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_03fce274();
  if (iVar1 != 0) {
    if (DAT_097480f0 == 0) {
      FUN_03fcea68(&LAB_03fce6f8);
      DAT_09748594 = 0;
    }
    else {
      if ((DAT_09748538 == 0) && (DAT_09748594 < DAT_09515658)) {
        DAT_09748594 = DAT_09748594 + 1;
      }
      else {
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("***>Full mark for collection #%lu after %lu allocd bytes\n",DAT_09748118 + 1
                       ,DAT_09535c28);
        }
        FUN_03fcb398();
        FUN_03fcecbc(0,1);
        if (DAT_09748588 != (code *)0x0) {
          (*DAT_09748588)();
        }
        FUN_03fcca28(&LAB_03fd3854,0);
        DAT_0974875c = 0;
        DAT_09748728 = 5;
        DAT_09748760 = 0;
        DAT_09748594 = 0;
        DAT_09748590 = 1;
      }
      pcVar2 = (code *)&LAB_03fce6f8;
      if (DAT_09515668 != 999999999999) {
        DAT_09748550 = clock();
        pcVar2 = (code *)&LAB_03fce6f8;
        if (DAT_09515668 != 999999999999) {
          pcVar2 = FUN_03fce700;
        }
      }
      iVar1 = FUN_03fcee4c(pcVar2);
      if (iVar1 != 0) {
        FUN_03fcf0b4();
        return;
      }
      if (DAT_09748590 == 0) {
        DAT_09748558 = DAT_09748558 + 1;
      }
    }
  }
  return;
}

