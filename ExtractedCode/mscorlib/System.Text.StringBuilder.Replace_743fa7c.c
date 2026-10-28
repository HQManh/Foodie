// rea decompile_all
// name: System.Text.StringBuilder$$Replace
// address: 0x743fa7c
// body: available
// range: 0x743fa7c-0x743fd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743fc58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743fc7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743fd74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Text_StringBuilder__Replace
               (long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long local_58;
  
  if ((DAT_09521074 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05e0);
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09521074 = 1;
  }
  local_58 = 0;
  uVar10 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
  if (uVar10 < param_4) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09223268;
  }
  else {
    if ((-1 < param_5) && ((int)param_4 <= (int)(uVar10 - param_5))) {
      if (param_2 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181550);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09220350);
        System_ArgumentNullException___ctor(uVar5,uVar6,0);
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
          if ((param_3 != 0) || (param_3 = **(long **)(DAT_09535468 + 0xb8), param_3 != 0)) {
            local_58 = 0;
            lVar8 = param_1;
            do {
              iVar9 = param_4 - *(int *)(lVar8 + 0x24);
              if (*(int *)(lVar8 + 0x24) <= (int)param_4) {
                do {
                  uVar10 = 0;
                  do {
                    if (param_5 < 1) {
                      return param_1;
                    }
                    uVar3 = System_Text_StringBuilder__StartsWith
                                      (param_1,lVar8,iVar9,param_5,param_2);
                    if ((uVar3 & 1) == 0) {
                      iVar9 = iVar9 + 1;
                      param_5 = param_5 + -1;
                    }
                    else {
                      if (local_58 == 0) {
                        local_58 = FUN_03f5c394(DAT_091801b8,5);
LAB_0743fbd4:
                        if (local_58 == 0) goto LAB_0743fc58;
                      }
                      else if (*(int *)(local_58 + 0x18) <= (int)uVar10) {
                        iVar2 = *(int *)(local_58 + 0x18) * 3;
                        if (iVar2 < 0) {
                          iVar2 = iVar2 + 1;
                        }
                        FUN_0492d498(&local_58,(iVar2 >> 1) + 4,DAT_091c05e0);
                        goto LAB_0743fbd4;
                      }
                      if (*(uint *)(local_58 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      lVar1 = (long)(int)uVar10;
                      uVar10 = uVar10 + 1;
                      *(int *)(local_58 + lVar1 * 4 + 0x20) = iVar9;
                      iVar9 = *(int *)(param_2 + 0x10) + iVar9;
                      param_5 = param_5 - *(int *)(param_2 + 0x10);
                    }
                  } while ((param_5 != 0) && (iVar9 < *(int *)(lVar8 + 0x20)));
                  iVar2 = *(int *)(lVar8 + 0x24);
                  System_Text_StringBuilder__ReplaceAllInChunk
                            (param_1,local_58,uVar10,lVar8,*(undefined4 *)(param_2 + 0x10),param_3);
                  iVar2 = iVar2 + iVar9 +
                          (*(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10)) * uVar10;
                  lVar8 = param_1;
                  while (iVar9 = iVar2 - *(int *)(lVar8 + 0x24), iVar2 < *(int *)(lVar8 + 0x24)) {
                    lVar8 = *(long *)(lVar8 + 0x18);
                    if (lVar8 == 0) goto LAB_0743fc58;
                  }
                } while( true );
              }
              lVar8 = *(long *)(lVar8 + 0x18);
            } while (lVar8 != 0);
          }
LAB_0743fc58:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_092012f8);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09220350);
        System_ArgumentException___ctor(uVar5,uVar6,uVar7,0);
      }
      goto LAB_0743fd60;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09219b28;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar4);
  uVar7 = thunk_FUN_03fc39d4(&DAT_092049a8);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar7,0);
LAB_0743fd60:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091da460);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

