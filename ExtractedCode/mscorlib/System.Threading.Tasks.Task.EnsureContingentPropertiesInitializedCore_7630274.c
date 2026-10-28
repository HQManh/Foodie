// rea decompile_all
// name: System.Threading.Tasks.Task$$EnsureContingentPropertiesInitializedCore
// address: 0x7630274
// body: available
// range: 0x7630274-0x7630353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7630300 to 0x4be0954 FUN_04be0954 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_Tasks_Task__EnsureContingentPropertiesInitializedCore
               (long param_1,ulong param_2)

{
  long lVar1;
  
  if ((DAT_095221df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194eb0);
    FUN_03f5c2a4(&DAT_091d22b8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221df = 1;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_03f6a5cc();
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = FUN_04be0954(param_1 + 0x48,*(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x20),
                         DAT_091d22b8);
    return lVar1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194eb0);
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  System_Object___ctor(lVar1,0);
  thunk_FUN_03f6a5cc();
  *(long *)(param_1 + 0x48) = lVar1;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),lVar1);
  return lVar1;
}

