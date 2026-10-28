// rea decompile_all
// name: System.Globalization.Bootstring$$Encode
// address: 0x754d148
// body: available
// range: 0x754d148-0x754d48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754d488 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754d48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_Bootstring__Encode(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if ((DAT_09521914 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4128);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521914 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0x2c);
  plVar10 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar10,0);
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar6 = 0;
      do {
        uVar4 = System_String__get_Chars(param_2,iVar6,0);
        if (uVar4 < 0x80) {
          uVar5 = System_String__get_Chars(param_2,iVar6,0);
          if (plVar10 == (long *)0x0) goto LAB_0754d48c;
          System_Text_StringBuilder__Append(plVar10,uVar5,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x10));
    }
    if (plVar10 != (long *)0x0) {
      iVar6 = System_Text_StringBuilder__get_Length(plVar10,0);
      if (0 < iVar6) {
        System_Text_StringBuilder__Append(plVar10,*(undefined2 *)(param_1 + 0x10),0);
      }
      iVar12 = *(int *)(param_2 + 0x10);
      if (iVar6 < iVar12) {
        iVar14 = 0;
        iVar17 = iVar6;
        do {
          if (iVar12 < 1) {
            uVar8 = 0x7fffffff;
          }
          else {
            iVar15 = 0;
            uVar8 = 0x7fffffff;
            do {
              uVar7 = System_String__get_Chars(param_2,iVar15,0);
              if ((iVar16 <= (int)(uVar7 & 0xffff)) &&
                 (uVar7 = System_String__get_Chars(param_2,iVar15,0), (uVar7 & 0xffff) < uVar8)) {
                uVar8 = System_String__get_Chars(param_2,iVar15,0);
                uVar8 = uVar8 & 0xffff;
              }
              iVar12 = *(int *)(param_2 + 0x10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar12);
          }
          if ((0x7fffffff < (long)((ulong)uVar8 - (long)iVar16)) || (iVar17 == 0x7fffffff)) {
LAB_0754d478:
            uVar11 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,DAT_091c4128);
          }
          lVar13 = (long)(int)(uVar8 - iVar16) * (long)(iVar17 + 1);
          if ((lVar13 - (int)lVar13 != 0) ||
             (iVar16 = (uVar8 - iVar16) * (iVar17 + 1), lVar13 = (long)iVar14 + (long)iVar16,
             lVar13 != (int)lVar13)) goto LAB_0754d478;
          iVar16 = iVar16 + iVar14;
          if (0 < iVar12) {
            iVar14 = 0;
            do {
              uVar7 = System_String__get_Chars(param_2,iVar14,0);
              uVar7 = uVar7 & 0xffff;
              if ((uVar7 < 0x80) || (uVar7 < uVar8)) {
                if (iVar16 == 0x7fffffff) goto LAB_0754d478;
                iVar16 = iVar16 + 1;
              }
              if (uVar8 == uVar7) {
                iVar15 = *(int *)(param_1 + 0x14);
                iVar1 = iVar16;
                iVar12 = iVar15;
                while( true ) {
                  iVar18 = *(int *)(param_1 + 0x18);
                  if (*(int *)(param_1 + 0x18) + iVar9 < iVar12) {
                    iVar18 = iVar12 - iVar9;
                    if (*(int *)(param_1 + 0x1c) + iVar9 <= iVar12) {
                      iVar18 = *(int *)(param_1 + 0x1c);
                    }
                  }
                  iVar2 = iVar1 - iVar18;
                  if (iVar1 < iVar18) break;
                  iVar15 = iVar15 - iVar18;
                  iVar1 = 0;
                  if (iVar15 != 0) {
                    iVar1 = iVar2 / iVar15;
                  }
                  iVar15 = (iVar2 - iVar1 * iVar15) + iVar18;
                  iVar1 = 0x61;
                  if (0x19 < iVar15) {
                    iVar1 = 0x16;
                  }
                  System_Text_StringBuilder__Append(plVar10,iVar1 + iVar15,0);
                  iVar15 = *(int *)(param_1 + 0x14);
                  iVar12 = iVar15 + iVar12;
                  iVar1 = 0;
                  if (iVar15 - iVar18 != 0) {
                    iVar1 = iVar2 / (iVar15 - iVar18);
                  }
                }
                iVar9 = 0x61;
                if (0x19 < iVar1) {
                  iVar9 = 0x16;
                }
                System_Text_StringBuilder__Append(plVar10,iVar9 + iVar1,0);
                bVar3 = iVar17 == iVar6;
                iVar17 = iVar17 + 1;
                iVar9 = System_Globalization_Bootstring__Adapt(param_1,iVar16,iVar17,bVar3);
                iVar16 = 0;
              }
              iVar12 = *(int *)(param_2 + 0x10);
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar12);
          }
          iVar14 = iVar16 + 1;
          iVar16 = uVar8 + 1;
        } while (iVar17 < iVar12);
      }
                    /* WARNING: Could not recover jumptable at 0x0754d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      return;
    }
  }
LAB_0754d48c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

