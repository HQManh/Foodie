// rea decompile_all
// name: System.Globalization.TextInfo$$ToTitleCase
// address: 0x7538f68
// body: available
// range: 0x7538f68-0x7539293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7539248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7539290 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_TextInfo__ToTitleCase(long *param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int local_6c;
  long *local_68;
  long local_58;
  
  local_58 = param_2;
  if ((DAT_095218af & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095218af = 1;
  }
  local_68 = (long *)0x0;
  local_6c = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09223590);
    System_ArgumentNullException___ctor(uVar9,uVar10,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091db288);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar6,0);
    local_68 = plVar6;
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar4 = 0;
      lVar11 = 0;
      do {
        iVar3 = System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory
                          (param_2,iVar4,&local_6c,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar7 = System_Char__CheckLetter(iVar3,0);
        if ((uVar7 & 1) == 0) {
LAB_075391f4:
          iVar4 = System_Globalization_TextInfo__AddNonLetter(&local_68,&local_58,iVar4,local_6c);
        }
        else {
          iVar4 = System_Globalization_TextInfo__AddTitlecaseLetter
                            (param_1,&local_68,&local_58,iVar4,local_6c);
          bVar1 = iVar3 == 1;
          iVar3 = iVar4 + 1;
          while (iVar4 = iVar3, iVar3 < *(int *)(param_2 + 0x10)) {
            while( true ) {
              while (uVar5 = System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory
                                       (param_2,iVar4,&local_6c,0), uVar5 < 5) {
                iVar4 = local_6c + iVar4;
                bVar1 = (bool)(uVar5 == 1 | bVar1);
                if (*(int *)(param_2 + 0x10) <= iVar4) goto LAB_07539178;
              }
              sVar2 = System_String__get_Chars(param_2,iVar4,0);
              if (sVar2 == 0x27) break;
              if (((1 << (ulong)(uVar5 & 0x1f) & 0x1ffcf800U) != 0) ||
                 (iVar4 = local_6c + iVar4, *(int *)(param_2 + 0x10) <= iVar4)) goto LAB_07539178;
            }
            lVar8 = param_2;
            if ((bVar1) && (lVar8 = lVar11, lVar11 == 0)) {
              lVar8 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,param_2,*(undefined8 *)(*param_1 + 0x1c0));
              lVar11 = lVar8;
            }
            if (local_68 == (long *)0x0) goto LAB_07539248;
            System_Text_StringBuilder__Append(local_68,lVar8,iVar3,(iVar4 + 1) - iVar3,0);
            bVar1 = true;
            param_2 = local_58;
            iVar3 = iVar4 + 1;
            if (local_58 == 0) goto LAB_07539248;
          }
LAB_07539178:
          if (0 < iVar4 - iVar3) {
            lVar8 = param_2;
            if ((bVar1) && (lVar8 = lVar11, lVar11 == 0)) {
              lVar8 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,param_2,*(undefined8 *)(*param_1 + 0x1c0));
              lVar11 = lVar8;
            }
            if (local_68 == (long *)0x0) goto LAB_07539248;
            System_Text_StringBuilder__Append(local_68,lVar8,iVar3,iVar4 - iVar3,0);
          }
          if (local_58 == 0) goto LAB_07539248;
          param_2 = local_58;
          if (iVar4 < *(int *)(local_58 + 0x10)) goto LAB_075391f4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x10));
    }
    if (local_68 == (long *)0x0) {
LAB_07539248:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_2 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
  }
  return param_2;
}

