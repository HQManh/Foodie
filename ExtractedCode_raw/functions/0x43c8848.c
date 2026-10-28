// rea decompile_all
// name: ChocDino.UIFX.TentBlurReference$$AdjustBoundsSize
// address: 0x43c8848
// body: available
// range: 0x43c8848-0x43c8933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TentBlurReference__AdjustBoundsSize(long param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x18);
  iVar3 = ChocDino_UIFX_TentBlurReference__GetDownsampleFactor();
  iVar4 = ChocDino_UIFX_TentBlurReference__GetDownsampleFactor(param_1);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  fVar6 = (fVar6 / (float)iVar3) * (float)iVar4;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = (uint)fVar6;
  if ((float)(int)fVar6 != INFINITY && 0 < (int)uVar5) {
    iVar3 = *(int *)(param_1 + 0x40);
    uVar1 = uVar5;
    if (iVar3 == 2) {
      uVar1 = 0;
    }
    uVar2 = 0;
    if (iVar3 != 1) {
      uVar2 = uVar5;
    }
    if (iVar3 != 1) {
      uVar5 = uVar1;
    }
    *param_2 = *param_2 + ((ulong)uVar2 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_2 + uVar5);
    *param_3 = *param_3 + ((ulong)uVar2 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_3 + uVar5);
  }
  return;
}

