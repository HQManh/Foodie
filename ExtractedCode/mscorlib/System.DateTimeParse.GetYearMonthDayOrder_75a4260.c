// rea decompile_all
// name: System.DateTimeParse$$GetYearMonthDayOrder
// address: 0x75a4260
// body: available
// range: 0x75a4260-0x75a44ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a44ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__GetYearMonthDayOrder(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar11 = -1;
    iVar10 = -1;
    iVar9 = -1;
  }
  else {
    iVar8 = 0;
    bVar7 = false;
    iVar12 = 0;
    iVar9 = -1;
    iVar10 = -1;
    iVar11 = -1;
    do {
      uVar4 = System_String__get_Chars(param_1,iVar8,0);
      iVar3 = iVar12;
      if (uVar4 < 0x27) {
        if (uVar4 == 0x22) {
LAB_075a4370:
          if (bVar7) {
LAB_075a42d4:
            if (uVar4 == 0x4d) {
              iVar10 = iVar8;
              do {
                iVar8 = iVar10;
                iVar10 = iVar8 + 1;
                if (*(int *)(param_1 + 0x10) <= iVar10) break;
                sVar5 = System_String__get_Chars(param_1,iVar10,0);
              } while (sVar5 == 0x4d);
              bVar7 = false;
              iVar3 = iVar12 + 1;
              iVar10 = iVar12;
            }
            else if (uVar4 == 0x79) {
              iVar11 = iVar8;
              do {
                iVar8 = iVar11;
                iVar11 = iVar8 + 1;
                if (*(int *)(param_1 + 0x10) <= iVar11) break;
                sVar5 = System_String__get_Chars(param_1,iVar11,0);
              } while (sVar5 == 0x79);
              bVar7 = false;
              iVar3 = iVar12 + 1;
              iVar11 = iVar12;
            }
            else if (uVar4 == 100) {
              if ((iVar8 + 1 < *(int *)(param_1 + 0x10)) &&
                 (sVar5 = System_String__get_Chars(param_1,iVar8 + 1,0), sVar5 == 100)) {
                iVar2 = 2;
                do {
                  iVar13 = iVar2;
                  iVar1 = iVar8 + iVar13;
                  if (*(int *)(param_1 + 0x10) <= iVar1) break;
                  sVar5 = System_String__get_Chars(param_1,iVar1,0);
                  iVar2 = iVar13 + 1;
                } while (sVar5 == 100);
                iVar8 = iVar1 + -1;
              }
              else {
                iVar13 = 1;
              }
              bVar7 = false;
              if (iVar13 < 3) {
                iVar3 = iVar12 + 1;
                iVar9 = iVar12;
              }
            }
            else {
              bVar7 = false;
            }
            goto LAB_075a437c;
          }
        }
        else {
          if (uVar4 == 0x25) goto LAB_075a4368;
LAB_075a42d0:
          if (!bVar7) goto LAB_075a42d4;
        }
        bVar7 = true;
      }
      else {
        if (uVar4 == 0x27) goto LAB_075a4370;
        if (uVar4 != 0x5c) goto LAB_075a42d0;
LAB_075a4368:
        iVar8 = iVar8 + 1;
      }
LAB_075a437c:
      iVar12 = iVar3;
      iVar8 = iVar8 + 1;
    } while ((iVar8 < *(int *)(param_1 + 0x10)) && (iVar12 < 3));
  }
  if ((iVar11 == 0) && ((iVar10 == 1 && (iVar9 == 2)))) {
    uVar6 = 0;
  }
  else {
    if ((iVar10 != 0) || ((iVar9 != 1 || (iVar11 != 2)))) {
      if ((iVar9 == 0) && ((iVar10 == 1 && (iVar11 == 2)))) {
        bVar7 = true;
        uVar6 = 2;
      }
      else {
        bVar7 = (iVar11 == 0 && iVar9 == 1) && iVar10 == 2;
        uVar6 = 3;
        if ((iVar11 != 0 || iVar9 != 1) || iVar10 != 2) {
          uVar6 = 0xffffffff;
        }
      }
      goto LAB_075a4488;
    }
    uVar6 = 1;
  }
  bVar7 = true;
LAB_075a4488:
  *param_3 = uVar6;
  return bVar7;
}

