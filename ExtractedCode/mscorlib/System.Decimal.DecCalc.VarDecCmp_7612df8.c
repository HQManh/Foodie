// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecCmp
// address: 0x7612df8
// body: available
// range: 0x7612df8-0x7612f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7612ec8 to 0x76190a8 System.Decimal.DecCalc$$VarDecCmpSub (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Decimal_DecCalc__VarDecCmp(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((DAT_095220bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_095220bd = 1;
  }
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((param_2[3] == 0 && param_2[2] == 0) && param_2[1] == 0) {
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)(*param_1 >> 0x1f | 1);
    }
  }
  else {
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) {
      uVar2 = (ulong)-(*param_2 >> 0x1f | 1U);
    }
    else {
      uVar1 = (*param_1 >> 0x1f) - (*param_2 >> 0x1f);
      uVar2 = (ulong)uVar1;
      if (uVar1 == 0) {
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Decimal_DecCalc__VarDecCmpSub(param_1,param_2);
        return uVar2;
      }
    }
  }
  return uVar2;
}

