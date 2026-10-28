// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$get_DateTimeOffsetPattern
// address: 0x7502ed8
// body: available
// range: 0x7502ed8-0x7503083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750303c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__get_DateTimeOffsetPattern(long param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  
  if ((DAT_0952168e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f6c30);
    DAT_0952168e = 1;
  }
  plVar9 = (long *)(param_1 + 0x70);
  if (*plVar9 != 0) {
    return *plVar9;
  }
  uVar5 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_1);
  uVar6 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
  lVar7 = System_String__Concat(uVar5,DAT_091f5a98,uVar6,0);
  lVar8 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
  if (lVar8 != 0) {
    iVar10 = 0;
    bVar1 = false;
    sVar4 = 0x27;
    do {
      if (*(int *)(lVar8 + 0x10) <= iVar10) {
        lVar7 = System_String__Concat(lVar7,DAT_091f6c30,0);
LAB_0750305c:
        *plVar9 = lVar7;
        thunk_FUN_03f5d7b8(plVar9,lVar7);
        return *plVar9;
      }
      lVar8 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
      if (lVar8 == 0) break;
      uVar2 = System_String__get_Chars(lVar8,iVar10,0);
      if (uVar2 < 0x26) {
        if (uVar2 == 0x25) goto LAB_07502fd0;
        if (uVar2 != 0x22) {
LAB_07502fc8:
          iVar10 = iVar10 + 1;
          goto LAB_07502fd4;
        }
LAB_07502fec:
        lVar8 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
        if (bVar1) {
          if (lVar8 != 0) {
            sVar3 = System_String__get_Chars(lVar8,iVar10,0);
            bVar1 = sVar4 != sVar3;
            goto LAB_07502fc8;
          }
          break;
        }
        if (lVar8 == 0) break;
        sVar4 = System_String__get_Chars(lVar8,iVar10,0);
        iVar10 = iVar10 + 1;
        lVar8 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
        bVar1 = true;
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x7a) {
            if (!bVar1) goto LAB_0750305c;
          }
          else if (uVar2 == 0x27) goto LAB_07502fec;
          goto LAB_07502fc8;
        }
LAB_07502fd0:
        iVar10 = iVar10 + 2;
LAB_07502fd4:
        lVar8 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_1);
      }
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

