// rea decompile_all
// name: System.Security.Util.Parser$$GetRequiredSizes
// address: 0x74570c4
// body: available
// range: 0x74570c4-0x74574eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74574d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74574d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Util_Parser__GetRequiredSizes(long param_1,long param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  
  if ((DAT_0952112d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_0952112d = 1;
  }
  if (param_2 == 0) {
LAB_074574d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar16 = 0;
  bVar3 = false;
  lVar14 = 0;
  bVar6 = false;
  bVar4 = false;
  iVar15 = 1;
  do {
    bVar2 = false;
LAB_0745712c:
    while( true ) {
      bVar7 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
      if (bVar7 != 1) break;
      bVar5 = !bVar4;
      bVar4 = false;
      if (bVar5) {
        FUN_039b1d98(*(undefined8 *)(param_1 + 0x18));
        puVar10 = &DAT_09211bb8;
        goto LAB_07457494;
      }
    }
    if (bVar7 < 3) {
      if (bVar7 != 0) {
        if (bVar7 != 2) goto LAB_07457464;
        cVar8 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
        if (cVar8 != '\x01') goto LAB_07457484;
        System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4400);
        goto LAB_0745727c;
      }
      bVar7 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
      if (4 < bVar7) {
        if (bVar7 != 5) {
          if (bVar7 != 6) goto LAB_074574d8;
          iVar16 = 1;
          do {
            cVar8 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
            if (cVar8 == '\x03') {
              System_Security_Util_TokenizerStream__GetNextString(param_2);
              System_Security_Util_TokenizerStream__TagLastToken(param_2,0x5000);
            }
            else if (cVar8 == '\x01') {
              iVar16 = iVar16 + -1;
            }
            else if (cVar8 == '\0') {
              iVar16 = iVar16 + 1;
            }
          } while (0 < iVar16);
          bVar4 = false;
          goto LAB_074572f0;
        }
        cVar8 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
        if (cVar8 != '\x03') goto LAB_07457464;
        System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4100);
        iVar16 = *param_3;
        lVar9 = System_Security_Util_TokenizerStream__GetNextString(param_2);
        if (lVar9 == 0) goto LAB_074574d4;
        iVar15 = iVar15 + 1;
        iVar16 = iVar16 + *(int *)(lVar9 + 0x10) * 2 + 3;
        goto LAB_074572e0;
      }
      if (bVar7 == 2) {
        uVar11 = 0x4400;
        while( true ) {
          System_Security_Util_TokenizerStream__TagLastToken(param_2,uVar11);
          cVar8 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
          if (cVar8 != '\x03') break;
          System_Security_Util_TokenizerStream__GetNextString(param_2);
          uVar11 = 0x5000;
        }
        if (cVar8 != '\x01') goto LAB_07457484;
        bVar4 = false;
LAB_0745727c:
        iVar15 = iVar15 + -1;
        *param_3 = *param_3 + 1;
        goto LAB_074572f0;
      }
      if (bVar7 != 3) {
LAB_074574d8:
        FUN_039b1d98(*(undefined8 *)(param_1 + 0x18));
        puVar10 = &DAT_09201d18;
        goto LAB_07457494;
      }
      System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4100);
      iVar13 = *param_3;
      lVar9 = System_Security_Util_TokenizerStream__GetNextString(param_2);
      if (lVar9 == 0) goto LAB_074574d4;
      *param_3 = iVar13 + *(int *)(lVar9 + 0x10) * 2 + 3;
      if (bVar6) goto LAB_07457464;
      iVar15 = iVar15 + 1;
      bVar4 = true;
      goto LAB_074572f0;
    }
    if (bVar7 == 3) {
      if (bVar4) {
        if (lVar14 == 0) {
          lVar14 = System_Security_Util_TokenizerStream__GetNextString(param_2);
          bVar4 = true;
        }
        else {
          if (!bVar3) goto LAB_07457464;
          System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4200);
          iVar13 = *param_3;
          iVar1 = *(int *)(lVar14 + 0x10);
          lVar9 = System_Security_Util_TokenizerStream__GetNextString(param_2);
          if (lVar9 == 0) goto LAB_074574d4;
          lVar14 = 0;
          bVar3 = false;
          *param_3 = iVar13 + (*(int *)(lVar9 + 0x10) + iVar1) * 2 + 5;
          bVar4 = true;
        }
      }
      else {
        if (bVar2) {
          System_Security_Util_TokenizerStream__TagLastToken(param_2,0x6300);
          iVar13 = *param_3;
          lVar9 = System_Security_Util_TokenizerStream__GetNextString(param_2);
          if ((lVar9 != 0) && (DAT_091f5a98 != 0)) {
            iVar13 = iVar13 + (*(int *)(DAT_091f5a98 + 0x10) + *(int *)(lVar9 + 0x10)) * 2 + 4;
            goto LAB_07457230;
          }
          goto LAB_074574d4;
        }
        System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4300);
        iVar13 = *param_3;
        lVar9 = System_Security_Util_TokenizerStream__GetNextString(param_2);
        if (lVar9 == 0) goto LAB_074574d4;
        iVar13 = iVar13 + *(int *)(lVar9 + 0x10) * 2 + 3;
LAB_07457230:
        bVar4 = false;
        *param_3 = iVar13;
        bVar2 = true;
      }
      goto LAB_0745712c;
    }
    if (bVar7 == 4) {
      bVar3 = true;
      goto LAB_0745712c;
    }
    if (((bVar7 != 5) || (!(bool)(bVar4 & bVar6))) || (iVar16 != 1)) {
LAB_07457464:
      FUN_039b1d98(*(undefined8 *)(param_1 + 0x18));
LAB_074574a0:
      thunk_FUN_03fc39d4(&DAT_0918d988);
      uVar11 = thunk_FUN_03f9944c();
      System_SystemException___ctor(uVar11,0);
      uVar12 = thunk_FUN_03fc39d4(&DAT_091d57c8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar11,uVar12);
    }
    cVar8 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
    if (cVar8 != '\x01') {
LAB_07457484:
      FUN_039b1d98(*(undefined8 *)(param_1 + 0x18));
      puVar10 = &DAT_09201d28;
LAB_07457494:
      uVar11 = thunk_FUN_03fc39d4(puVar10);
      System_Environment__GetResourceString(uVar11,0);
      goto LAB_074574a0;
    }
    System_Security_Util_TokenizerStream__TagLastToken(param_2,0x4400);
    iVar15 = iVar15 + -1;
    iVar16 = *param_3 + 1;
LAB_074572e0:
    *param_3 = iVar16;
    bVar4 = true;
    bVar6 = true;
    iVar16 = 1;
LAB_074572f0:
    if (iVar15 < 2) {
      return;
    }
  } while( true );
}

