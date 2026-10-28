// rea decompile_all
// name: FUN_03fd0408
// address: 0x3fd0408
// body: available
// range: 0x3fd0408-0x3fd050f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03fd0408(undefined *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_09748120 == 0) {
    FUN_03fcba24();
  }
  if (DAT_097480f4 != 0) {
    (*DAT_097485b0)();
  }
  FUN_03fd0510();
  if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
    FUN_03fcbfa4();
  }
  iVar2 = DAT_09515648;
  if ((param_2 != 0) || ((DAT_097485e0 != 0 && (0 < DAT_09515648)))) {
    DAT_09515648 = 1;
  }
  DAT_097485e4 = 1;
  FUN_03f5c2c8();
  puVar1 = PTR_LAB_09515670;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  iVar3 = FUN_03fcea68(puVar1);
  DAT_097485e4 = 0;
  if (DAT_097480e0 != 0) {
    DAT_097480e8 = 0;
  }
  DAT_09515648 = iVar2;
  if (iVar3 != 0) {
    if (DAT_097480f4 != 0) {
      (*DAT_097485b0)();
    }
    FUN_03fd0510();
  }
  return iVar3;
}

