// rea decompile_all
// name: System.String$$LastIndexOfUnchecked
// address: 0x7436228
// body: available
// range: 0x7436228-0x7436303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7436300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__LastIndexOfUnchecked(long param_1,long param_2,uint param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  ulong uVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  lVar9 = (long)iVar4;
  if (iVar4 <= param_4) {
    uVar8 = (ulong)param_3;
    if (iVar4 == 0) goto LAB_07436274;
    iVar4 = thunk_FUN_03f68190(0);
    if (lVar9 * 2 + -2 + (long)param_4 * -2 != 0) {
      uVar5 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1;
      psVar2 = (short *)(param_2 + iVar4) + lVar9 + -1;
      psVar6 = (short *)(param_1 + (long)(int)param_3 * 2 + 0x14);
      psVar3 = psVar6 + ((lVar9 + -1) - (long)param_4);
      do {
        uVar8 = uVar5;
        psVar7 = psVar2;
        if (*psVar6 == *psVar2) {
          do {
            if (psVar7 == (short *)(param_2 + iVar4)) {
              if ((long)uVar8 < 0) {
                uVar8 = uVar8 + 1;
              }
              uVar8 = uVar8 >> 1;
              goto LAB_07436274;
            }
            psVar7 = psVar7 + -1;
            psVar1 = (short *)(param_1 + 0x12 + uVar8);
            uVar8 = uVar8 - 2;
          } while (*psVar1 == *psVar7);
        }
        psVar6 = psVar6 + -1;
        uVar5 = uVar5 - 2;
        uVar8 = 0xffffffff;
      } while (psVar6 != psVar3);
      goto LAB_07436274;
    }
  }
  uVar8 = 0xffffffff;
LAB_07436274:
  return uVar8 & 0xffffffff;
}

