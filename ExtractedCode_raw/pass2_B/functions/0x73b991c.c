// rea decompile_all
// name: MessagePack.Internal.FarmHash$$WeakHashLen32WithSeeds
// address: 0x73b991c
// body: available
// range: 0x73b991c-0x73b99d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_FarmHash__WeakHashLen32WithSeeds
               (long *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09520c21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c21 = 1;
  }
  lVar3 = *param_1;
  lVar5 = param_1[1];
  lVar4 = param_1[2];
  lVar6 = param_1[3];
  if ((DAT_09520c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  lVar3 = lVar3 + param_2;
  uVar1 = lVar3 + lVar5 + lVar4;
  uVar2 = lVar3 + param_3 + lVar6;
  *param_4 = uVar1 + lVar6;
  *param_5 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar3 + (uVar2 >> 0x15 | uVar2 << 0x2b);
  return;
}

