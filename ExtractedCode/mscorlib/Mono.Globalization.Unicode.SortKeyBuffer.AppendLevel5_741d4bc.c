// rea decompile_all
// name: Mono.Globalization.Unicode.SortKeyBuffer$$AppendLevel5
// address: 0x741d4bc
// body: available
// range: 0x741d4bc-0x741d54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741d548 to 0x741d3dc Mono.Globalization.Unicode.SortKeyBuffer$$AppendBufferPrimitive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SortKeyBuffer__AppendLevel5
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(int *)(param_1 + 0x5c) + 1;
  uVar2 = -uVar1;
  uVar1 = uVar1 & 0x1fff;
  if (-1 < (int)uVar2) {
    uVar1 = -(uVar2 & 0x1fff);
  }
  uVar3 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                    (param_1,uVar1 + ((uint)(int)(short)uVar1 >> 0x19 & 0x3f) >> 6 & 0x3ff ^
                             0xffffff80,param_1 + 0x48,param_1 + 0x74);
  uVar3 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                    (uVar3,uVar1 << 2 | 3,param_1 + 0x48,param_1 + 0x74);
  uVar3 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                    (uVar3,param_2,param_1 + 0x48,param_1 + 0x74);
  Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
            (uVar3,param_3,param_1 + 0x48,param_1 + 0x74);
  return;
}

