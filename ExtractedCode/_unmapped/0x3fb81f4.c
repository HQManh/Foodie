// rea decompile_all
// name: FUN_03fb81f4
// address: 0x3fb81f4
// body: available
// range: 0x3fb81f4-0x3fb8273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb8270 to 0x3fbeb20 FUN_03fbeb20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fb81f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 & 0x20ff0000) == 0x110000) {
    lVar1 = FUN_03fc3840(param_1);
    if ((*(ushort *)(lVar1 + 0x135) >> 2 & 1) != 0) {
      FUN_03fc3840(param_1);
      goto LAB_03fb826c;
    }
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (((((uVar3 & 0xff0000) != 0x150000) ||
       (lVar1 = FUN_03fc3840(*(undefined8 *)*param_1), lVar1 == 0)) ||
      ((*(ushort *)(lVar1 + 0x135) >> 2 & 1) == 0)) ||
     ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0)) {
    return param_1;
  }
LAB_03fb826c:
  puVar2 = (undefined8 *)FUN_03fbeb20();
  return puVar2;
}

