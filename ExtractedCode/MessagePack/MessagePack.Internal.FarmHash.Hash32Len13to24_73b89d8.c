// rea decompile_all
// name: MessagePack.Internal.FarmHash$$Hash32Len13to24
// address: 0x73b89d8
// body: available
// range: 0x73b89d8-0x73b8afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_Internal_FarmHash__Hash32Len13to24(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = (int *)((long)param_1 + (ulong)(param_2 >> 1));
  iVar3 = *param_1;
  iVar6 = param_1[1];
  uVar4 = piVar1[-1];
  iVar7 = *piVar1;
  iVar5 = *(int *)((long)param_1 + ((ulong)param_2 - 8));
  iVar8 = *(int *)((long)param_1 + ((ulong)param_2 - 4));
  if ((DAT_09520c1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc158);
    DAT_09520c1d = 1;
  }
  uVar2 = ((uint)(iVar5 * -0x3361d2af) >> 0x11 | iVar5 * 0x16a88000) * 0x1b873593 ^
          param_2 + iVar7 * -0x3361d2af;
  uVar4 = iVar8 + (uVar4 >> 0xc | uVar4 << 0x14);
  uVar2 = uVar4 + 0xe6546b64 + (uVar2 >> 0x13 | uVar2 << 0xd) * 5 ^
          ((uint)(iVar3 * -0x3361d2af) >> 0x11 | iVar3 * 0x16a88000) * 0x1b873593;
  iVar5 = (uVar4 >> 3 | uVar4 * 0x20000000) + iVar5;
  uVar4 = iVar5 + iVar8;
  uVar2 = iVar5 + -0x19ab949c + (uVar2 >> 0x13 | uVar2 << 0xd) * 5 ^
          ((uint)(iVar6 * -0x3361d2af) >> 0x11 | iVar6 * 0x16a88000) * 0x1b873593;
  uVar4 = iVar7 + (uVar4 >> 0xc | uVar4 * 0x100000) + -0x19ab949c +
          (uVar2 >> 0x13 | uVar2 << 0xd) * 5;
  uVar4 = (uVar4 ^ uVar4 >> 0x10) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  return uVar4 ^ uVar4 >> 0x10;
}

