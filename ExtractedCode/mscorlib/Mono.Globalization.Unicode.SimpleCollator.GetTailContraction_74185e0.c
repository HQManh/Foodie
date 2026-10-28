// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$GetTailContraction
// address: 0x74185e0
// body: available
// range: 0x74185e0-0x74187bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741872c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7418730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74187bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Globalization_Unicode_SimpleCollator__GetTailContraction
               (undefined8 param_1,long param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int local_68;
  int local_64;
  
  if ((param_3 != param_4) && (-2 < param_4)) {
    if (param_2 != 0) {
      if ((*(int *)(param_2 + 0x10) <= param_3) || (*(int *)(param_2 + 0x10) <= param_4 + 1))
      goto LAB_07418734;
      if (param_5 != 0) {
        uVar1 = *(uint *)(param_5 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) {
LAB_0741872c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar8 = *(long *)(param_5 + (long)(int)uVar9 * 8 + 0x20);
            if ((lVar8 == 0) || (lVar10 = *(long *)(lVar8 + 0x18), lVar10 == 0)) goto LAB_07418730;
            iVar7 = (int)*(long *)(lVar10 + 0x18);
            if (iVar7 <= param_3 - param_4) {
              if (iVar7 == 0) goto LAB_0741872c;
              sVar3 = *(short *)(lVar10 + ((*(long *)(lVar10 + 0x18) << 0x20) + -0x100000000 >> 0x1f
                                          ) + 0x20);
              sVar2 = System_String__get_Chars(param_2,param_3,0);
              if (sVar3 == sVar2) {
                iVar7 = *(int *)(lVar10 + 0x18);
                if (iVar7 < 1) {
                  return lVar8;
                }
                lVar11 = 0;
                while( true ) {
                  sVar3 = System_String__get_Chars(param_2,((param_3 + 1) - iVar7) + (uint)lVar11,0)
                  ;
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar11) goto LAB_0741872c;
                  if (*(short *)(lVar10 + 0x20 + lVar11 * 2) != sVar3) break;
                  lVar11 = lVar11 + 1;
                  if ((int)*(uint *)(lVar10 + 0x18) <= (int)lVar11) {
                    return lVar8;
                  }
                }
              }
            }
            uVar1 = *(uint *)(param_5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
        return 0;
      }
    }
LAB_07418730:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_07418734:
  local_64 = param_3;
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_64);
  local_68 = param_4;
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
  uVar6 = thunk_FUN_03fc39d4(&DAT_09207458);
  uVar4 = System_String__Format(uVar6,uVar4,uVar5,param_2,0);
  thunk_FUN_03fc39d4(&DAT_0918b710);
  uVar5 = thunk_FUN_03f9944c();
  System_SystemException___ctor(uVar5,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d9190);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

