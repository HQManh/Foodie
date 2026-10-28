// rea decompile_all
// name: System.String$$IndexOfUnchecked
// address: 0x7435f44
// body: available
// range: 0x7435f44-0x7436053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7436050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__IndexOfUnchecked(long param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((int)uVar3 <= param_4) {
    uVar10 = (ulong)param_3;
    if (uVar3 == 0) goto LAB_07435fa8;
    lVar1 = param_1 + 0x14;
    iVar5 = thunk_FUN_03f68190(0);
    psVar6 = (short *)(lVar1 + (long)(int)param_3 * 2);
    psVar2 = (short *)(lVar1 + ((long)param_4 + (long)(int)param_3) * 2 + (long)(int)uVar3 * -2 + 2)
    ;
    if (psVar6 != psVar2) {
      psVar7 = (short *)(param_1 + (-(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1) +
                        0x16);
      do {
        if (*psVar6 == *(short *)(param_2 + iVar5)) {
          lVar8 = (ulong)uVar3 - 1;
          psVar9 = psVar7;
          psVar4 = (short *)(param_2 + iVar5);
          if ((int)uVar3 < 2) {
LAB_0743603c:
            uVar10 = (long)psVar6 - lVar1;
            if ((long)uVar10 < 0) {
              uVar10 = uVar10 + 1;
            }
            uVar10 = uVar10 >> 1;
            break;
          }
          while (*psVar9 == psVar4[1]) {
            lVar8 = lVar8 + -1;
            psVar9 = psVar9 + 1;
            psVar4 = psVar4 + 1;
            if (lVar8 == 0) goto LAB_0743603c;
          }
        }
        psVar6 = psVar6 + 1;
        psVar7 = psVar7 + 1;
        uVar10 = 0xffffffff;
      } while (psVar6 != psVar2);
      goto LAB_07435fa8;
    }
  }
  uVar10 = 0xffffffff;
LAB_07435fa8:
  return uVar10 & 0xffffffff;
}

