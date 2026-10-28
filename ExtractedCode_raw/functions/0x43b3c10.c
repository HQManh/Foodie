// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$ModifyMesh
// address: 0x43b3c10
// body: available
// range: 0x43b3c10-0x43b3d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_MotionBlurSimpleTMP__ModifyMesh(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09517b2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188408);
    DAT_09517b2e = 1;
  }
  if (((*(char *)(*(long *)(DAT_09188408 + 0xb8) + 1) == '\0') ||
      (*(char *)(param_1 + 0xe8) == '\0')) || (lVar3 = *(long *)(param_1 + 0x58), lVar3 == 0)) {
    *(undefined1 *)(param_1 + 0xe8) = 0;
    uVar2 = ChocDino_UIFX_MotionBlurSimpleTMP__CanApply(param_1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x118);
      if ((bVar1 & 6) == 4) {
        *(undefined1 *)(param_1 + 0x118) = 0;
        if ((bVar1 & 1) == 0) {
          ChocDino_UIFX_MotionBlurSimpleTMP__PrepareBuffers(param_1,param_2);
          ChocDino_UIFX_MotionBlurSimpleTMP__CacheState(param_1);
          return 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x118) = 0;
      }
      uVar2 = ChocDino_UIFX_MotionBlurSimpleTMP__PrepareBuffers(param_1,param_2);
      if ((uVar2 & 1) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = ChocDino_UIFX_MotionBlurSimpleTMP__CreateMotionBlurMesh(param_1);
        *(undefined1 *)(param_1 + 0xe8) = 1;
      }
      ChocDino_UIFX_MotionBlurSimpleTMP__CacheState(param_1);
    }
  }
  return lVar3;
}

