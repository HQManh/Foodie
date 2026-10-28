// rea decompile_all
// name: System.Decimal.DecCalc$$Div96By32
// address: 0x7617a04
// body: available
// range: 0x7617a04-0x7617a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Decimal_DecCalc__Div96By32(ulong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((int)param_1[1] == 0) {
    uVar5 = *param_1;
    iVar2 = 0;
    if (uVar5 != 0) {
      uVar3 = 0;
      if ((ulong)param_2 != 0) {
        uVar3 = uVar5 / param_2;
      }
      iVar2 = (int)uVar5 - (int)uVar3 * param_2;
      *param_1 = uVar3;
    }
  }
  else {
    uVar4 = *(ulong *)((long)param_1 + 4);
    uVar3 = (ulong)param_2;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar4 / uVar3;
    }
    *(ulong *)((long)param_1 + 4) = uVar5;
    uVar5 = CONCAT44((int)uVar4 - (int)uVar5 * param_2,(int)*param_1);
    if (uVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar1 = 0;
      if (uVar3 != 0) {
        iVar1 = (int)(uVar5 / uVar3);
      }
      iVar2 = (int)*param_1 - iVar1 * param_2;
      *(int *)param_1 = iVar1;
    }
  }
  return iVar2;
}

