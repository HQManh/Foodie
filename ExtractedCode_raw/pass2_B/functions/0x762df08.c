// rea decompile_all
// name: System.Threading.Tasks.Task$$get_Id
// address: 0x762df08
// body: available
// range: 0x762df08-0x762df97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Threading_Tasks_Task__get_Id(long param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((DAT_095221da & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221da = 1;
  }
  piVar2 = (int *)(param_1 + 0x10);
  iVar1 = *piVar2;
  thunk_FUN_03f6a5cc();
  if (iVar1 == 0) {
    do {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = FUN_03f95724(*(undefined8 *)(DAT_0918b8c8 + 0xb8));
    } while (iVar1 == 0);
    thunk_FUN_03f6a5cc();
    FUN_03f95674(piVar2,iVar1,0);
  }
  iVar1 = *piVar2;
  thunk_FUN_03f6a5cc();
  return iVar1;
}

