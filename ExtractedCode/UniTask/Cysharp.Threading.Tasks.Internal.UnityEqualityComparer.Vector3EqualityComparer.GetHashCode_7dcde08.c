// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.UnityEqualityComparer.Vector3EqualityComparer$$GetHashCode
// address: 0x7dcde08
// body: available
// range: 0x7dcde08-0x7dcde63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Cysharp_Threading_Tasks_Internal_UnityEqualityComparer_Vector3EqualityComparer__GetHashCode
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  uVar1 = System_Single__GetHashCode(&local_2c,0);
  iVar2 = System_Single__GetHashCode(&uStack_28,0);
  iVar3 = System_Single__GetHashCode(&local_24,0);
  return uVar1 ^ iVar2 << 2 ^ iVar3 >> 2;
}

