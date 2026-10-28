// rea decompile_all
// name: System.Globalization.Bootstring$$Decode
// address: 0x754d868
// body: available
// range: 0x754d868-0x754db3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754db38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754db3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_Bootstring__Decode(long param_1,long param_2,int param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_64;
  
  if ((DAT_09521915 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521915 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  iVar12 = *(int *)(param_1 + 0x2c);
  plVar7 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar7,0);
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) < 1) {
      iVar6 = 0;
    }
    else {
      iVar13 = 0;
      iVar5 = 0;
      do {
        sVar2 = System_String__get_Chars(param_2,iVar13,0);
        iVar6 = iVar13;
        if (*(short *)(param_1 + 0x10) != sVar2) {
          iVar6 = iVar5;
        }
        iVar13 = iVar13 + 1;
        iVar5 = iVar6;
      } while (iVar13 < *(int *)(param_2 + 0x10));
      if (iVar6 < 0) {
        return param_2;
      }
    }
    if (plVar7 != (long *)0x0) {
      System_Text_StringBuilder__Append(plVar7,param_2,0,iVar6,0);
      iVar13 = 0;
      if (iVar6 != 0) {
        iVar13 = iVar6 + 1;
      }
      if (iVar13 < *(int *)(param_2 + 0x10)) {
        iVar6 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x14);
          iVar15 = 1;
          iVar1 = iVar6;
          iVar14 = iVar13;
          while( true ) {
            iVar13 = iVar14 + 1;
            uVar3 = System_String__get_Chars(param_2,iVar14,0);
            uVar3 = uVar3 & 0xffff;
            if (uVar3 < 0x3a) {
              iVar14 = uVar3 - 0x16;
            }
            else if (uVar3 < 0x5b) {
              iVar14 = uVar3 - 0x41;
            }
            else if (uVar3 < 0x7b) {
              iVar14 = uVar3 - 0x61;
            }
            else {
              iVar14 = *(int *)(param_1 + 0x14);
            }
            iVar11 = *(int *)(param_1 + 0x18);
            if (*(int *)(param_1 + 0x18) + iVar4 < iVar5) {
              iVar11 = iVar5 - iVar4;
              if (*(int *)(param_1 + 0x1c) + iVar4 <= iVar5) {
                iVar11 = *(int *)(param_1 + 0x1c);
              }
            }
            iVar1 = iVar1 + iVar14 * iVar15;
            if (iVar14 < iVar11) break;
            iVar5 = *(int *)(param_1 + 0x14) + iVar5;
            iVar15 = (*(int *)(param_1 + 0x14) - iVar11) * iVar15;
            iVar14 = iVar13;
          }
          iVar4 = System_Text_StringBuilder__get_Length(plVar7,0);
          iVar4 = System_Globalization_Bootstring__Adapt(param_1,iVar1 - iVar6,iVar4 + 1,iVar6 == 0)
          ;
          iVar5 = System_Text_StringBuilder__get_Length(plVar7,0);
          iVar6 = 0;
          if (iVar5 + 1 != 0) {
            iVar6 = iVar1 / (iVar5 + 1);
          }
          iVar12 = iVar6 + iVar12;
          iVar6 = System_Text_StringBuilder__get_Length(plVar7,0);
          if (iVar12 < 0x80) {
            local_64 = param_3 + iVar13;
            uVar9 = FUN_03f5c42c(DAT_09535420,&local_64);
            uVar10 = thunk_FUN_03fc39d4(&DAT_092051a0);
            uVar9 = System_String__Format(uVar10,uVar9,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar10 = thunk_FUN_03f9944c();
            System_ArgumentException___ctor(uVar10,uVar9,0);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091c4120);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,uVar9);
          }
          iVar6 = iVar6 + 1;
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = iVar1 / iVar6;
          }
          iVar1 = iVar1 - iVar5 * iVar6;
          System_Text_StringBuilder__Insert(plVar7,iVar1,iVar12,0);
          iVar6 = iVar1 + 1;
        } while (iVar13 < *(int *)(param_2 + 0x10));
      }
                    /* WARNING: Could not recover jumptable at 0x0754da98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

