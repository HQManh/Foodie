// rea decompile_all
// name: System.DateTimeParse$$GetMonthDayOrder
// address: 0x75a46ac
// body: available
// range: 0x75a46ac-0x75a48a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a48a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__GetMonthDayOrder(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  undefined4 uVar8;
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
  }
  else {
    iVar9 = 0;
    bVar3 = false;
    iVar12 = 0;
    iVar10 = -1;
    iVar11 = -1;
    do {
      uVar6 = System_String__get_Chars(param_1,iVar9,0);
      iVar5 = iVar12;
      if (uVar6 < 0x27) {
        if (uVar6 == 0x22) {
LAB_075a47b0:
          if (bVar3) goto LAB_075a471c;
LAB_075a47b4:
          bVar3 = true;
        }
        else {
          if (uVar6 != 0x25) goto LAB_075a4718;
LAB_075a47a8:
          iVar9 = iVar9 + 1;
        }
      }
      else {
        if (uVar6 == 0x27) goto LAB_075a47b0;
        if (uVar6 == 0x5c) goto LAB_075a47a8;
LAB_075a4718:
        if (bVar3) goto LAB_075a47b4;
LAB_075a471c:
        if (uVar6 == 0x4d) {
          iVar11 = iVar9;
          do {
            iVar9 = iVar11;
            iVar11 = iVar9 + 1;
            if (*(int *)(param_1 + 0x10) <= iVar11) break;
            sVar7 = System_String__get_Chars(param_1,iVar11,0);
          } while (sVar7 == 0x4d);
          bVar3 = false;
          iVar5 = iVar12 + 1;
          iVar11 = iVar12;
        }
        else if (uVar6 == 100) {
          if ((iVar9 + 1 < *(int *)(param_1 + 0x10)) &&
             (sVar7 = System_String__get_Chars(param_1,iVar9 + 1,0), sVar7 == 100)) {
            iVar4 = 2;
            do {
              iVar13 = iVar4;
              iVar1 = iVar9 + iVar13;
              if (*(int *)(param_1 + 0x10) <= iVar1) break;
              sVar7 = System_String__get_Chars(param_1,iVar1,0);
              iVar4 = iVar13 + 1;
            } while (sVar7 == 100);
            iVar9 = iVar1 + -1;
          }
          else {
            iVar13 = 1;
          }
          bVar3 = false;
          if (iVar13 < 3) {
            iVar5 = iVar12 + 1;
            iVar10 = iVar12;
          }
        }
        else {
          bVar3 = false;
        }
      }
      iVar12 = iVar5;
      iVar9 = iVar9 + 1;
    } while ((iVar9 < *(int *)(param_1 + 0x10)) && (iVar12 < 2));
  }
  uVar8 = 7;
  if (iVar10 != 0 || iVar11 != 1) {
    uVar8 = 0xffffffff;
  }
  uVar2 = 6;
  if (iVar11 != 0 || iVar10 != 1) {
    uVar2 = uVar8;
  }
  *param_3 = uVar2;
  return iVar11 == 0 && iVar10 == 1 || iVar10 == 0 && iVar11 == 1;
}

