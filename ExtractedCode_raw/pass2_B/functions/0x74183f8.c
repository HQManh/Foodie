// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$GetContraction
// address: 0x74183f8
// body: available
// range: 0x74183f8-0x741851f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7418518 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741851c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Globalization_Unicode_SimpleCollator__GetContraction
               (undefined8 param_1,long param_2,int param_3,int param_4,long param_5)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_5 != 0) {
    uVar4 = *(uint *)(param_5 + 0x18);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) {
LAB_07418518:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(param_5 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0x18), lVar5 == 0)) goto LAB_0741851c;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07418518;
        if (param_2 == 0) goto LAB_0741851c;
        uVar1 = *(ushort *)(lVar5 + 0x20);
        uVar4 = System_String__get_Chars(param_2,param_3,0);
        iVar2 = (uint)uVar1 - (uVar4 & 0xffff);
        if (0 < iVar2) {
          return 0;
        }
        if (-1 < iVar2) {
          lVar5 = *(long *)(lVar6 + 0x18);
          if (lVar5 == 0) goto LAB_0741851c;
          if (*(int *)(lVar5 + 0x18) <= param_4 - param_3) {
            if (*(int *)(lVar5 + 0x18) < 1) {
              return lVar6;
            }
            lVar8 = 0;
            while( true ) {
              sVar3 = System_String__get_Chars(param_2,param_3 + (uint)lVar8,0);
              if (*(uint *)(lVar5 + 0x18) <= (uint)lVar8) goto LAB_07418518;
              if (*(short *)(lVar5 + 0x20 + lVar8 * 2) != sVar3) break;
              lVar8 = lVar8 + 1;
              if ((int)*(uint *)(lVar5 + 0x18) <= (int)lVar8) {
                return lVar6;
              }
            }
          }
        }
        uVar4 = *(uint *)(param_5 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar4);
    }
    return 0;
  }
LAB_0741851c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

