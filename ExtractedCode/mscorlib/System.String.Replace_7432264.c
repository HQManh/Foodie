// rea decompile_all
// name: System.String$$Replace
// address: 0x7432264
// body: available
// range: 0x7432264-0x743233b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7432338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__Replace(long param_1,short param_2,short param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  if (param_2 != param_3) {
    iVar7 = *(int *)(param_1 + 0x10);
    psVar6 = (short *)(param_1 + 0x14);
    psVar5 = psVar6;
    if (iVar7 < 1) {
      if (iVar7 != 0) {
LAB_074322c0:
        lVar4 = thunk_FUN_03f968a0();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = *(int *)(param_1 + 0x10) - iVar7;
        if (0 < iVar3) {
          System_Buffer__Memmove(lVar4 + 0x14,psVar6,iVar3 * 2,0);
        }
        psVar6 = psVar6 + iVar3;
        psVar5 = (short *)(lVar4 + 0x14 + (long)iVar3 * 2);
        do {
          iVar7 = iVar7 + -1;
          sVar2 = param_3;
          if (*psVar6 != param_2) {
            sVar2 = *psVar6;
          }
          *psVar5 = sVar2;
          psVar6 = psVar6 + 1;
          psVar5 = psVar5 + 1;
          param_1 = lVar4;
        } while (0 < iVar7);
      }
    }
    else {
      do {
        if (*psVar5 == param_2) goto LAB_074322c0;
        iVar3 = iVar7 + -1;
        bVar1 = 0 < iVar7;
        psVar5 = psVar5 + 1;
        iVar7 = iVar3;
      } while (iVar3 != 0 && bVar1);
    }
  }
  return param_1;
}

