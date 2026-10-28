// rea decompile_all
// name: FUN_03faa9cc
// address: 0x3faa9cc
// body: available
// range: 0x3faa9cc-0x3faab17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03faa9cc(int *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = FUN_03fbb560("global-metadata.dat");
  DAT_09535218 = lVar5;
  if (lVar5 != 0) {
    DAT_09535228 = *(int *)(lVar5 + 0x100);
    *param_1 = DAT_09535228;
    lVar1 = DAT_09535208;
    DAT_09535220 = lVar5;
    *param_2 = *(undefined4 *)(lVar5 + 0x10c);
    uVar2 = FUN_03f98ad8(*(undefined4 *)(lVar1 + 0x30));
    uVar3 = FUN_03f98ad8(*(undefined4 *)(DAT_09535220 + 0xf4));
    uVar4 = FUN_03f98ad8(*(undefined4 *)(DAT_09535220 + 0xb8));
    uRam0000000009535238 = FUN_03f98ad8(*(undefined4 *)(DAT_09535220 + 0x88));
    DAT_0953522c = uVar2;
    uRam0000000009535230 = uVar3;
    uRam0000000009535234 = uVar4;
    DAT_09535240 = calloc((long)DAT_09535228,0x18);
    DAT_09535248 = calloc((long)*(int *)(DAT_09535208 + 0x30),8);
    DAT_09535250 = calloc((long)*(int *)(DAT_09535220 + 0xf4),8);
    DAT_09535200 = calloc((long)*(int *)(DAT_09535220 + 0x4c),8);
    FUN_03faab18(&UNK_03faabbc,&UNK_03faac00);
  }
  return lVar5 != 0;
}

