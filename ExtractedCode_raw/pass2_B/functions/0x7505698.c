// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$InsertHash
// address: 0x7505698
// body: available
// range: 0x7505698-0x75059af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7505900 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x750599c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75059a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75059ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo__InsertHash
               (undefined8 param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  if ((DAT_095216aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918fd48);
    DAT_095216aa = 1;
  }
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    return;
  }
  uVar3 = System_String__get_Chars(param_3,0,0);
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535460);
  }
  uVar5 = System_Char__IsWhiteSpace(uVar3,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = System_String__get_Chars(param_3,*(int *)(param_3 + 0x10) + -1,0);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535460);
    }
    uVar5 = System_Char__IsWhiteSpace(uVar3,0);
    if ((uVar5 & 1) != 0) goto LAB_07505770;
  }
  else {
LAB_07505770:
    param_3 = System_String__Trim(param_3,0,0);
    if (param_3 == 0) goto LAB_0750599c;
    if (*(int *)(param_3 + 0x10) == 0) {
      return;
    }
  }
  plVar6 = (long *)System_Globalization_DateTimeFormatInfo__get_Culture(param_1);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    uVar3 = System_String__get_Chars(param_3,0,0);
    if ((plVar6 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x1b0)),
       param_2 != (long *)0x0)) {
      iVar10 = 0;
      uVar1 = uVar4 + ((uVar4 & 0xffff) / 0xc5) * -0xc5 + 1 & 0xffff;
      uVar9 = uVar4 + ((uVar4 & 0xffff) / 199) * -199 & 0xffff;
      do {
        if (*(uint *)(param_2 + 3) <= uVar9) {
LAB_075059a0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = param_2[(long)(int)uVar9 + 4];
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_03f9944c(DAT_0918fd48);
          System_Object___ctor(lVar11,0);
          *(long *)(lVar11 + 0x10) = param_3;
          thunk_FUN_03f5d7b8((long *)(lVar11 + 0x10),param_3);
          *(uint *)(lVar11 + 0x18) = param_4;
          *(int *)(lVar11 + 0x1c) = param_5;
          lVar8 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*param_2 + 0x40));
          if (lVar8 == 0) {
            uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,0);
          }
          if (uVar9 < *(uint *)(param_2 + 3)) {
            param_2[(long)(int)uVar9 + 4] = lVar11;
            thunk_FUN_03f5d7b8(param_2 + (long)(int)uVar9 + 4,lVar11);
            return;
          }
          goto LAB_075059a0;
        }
        lVar8 = *(long *)(lVar11 + 0x10);
        if (lVar8 == 0) break;
        iVar2 = *(int *)(lVar8 + 0x10);
        if ((iVar2 <= *(int *)(param_3 + 0x10)) &&
           (uVar5 = System_Globalization_DateTimeFormatInfo__CompareStringIgnoreCaseOptimized
                              (param_1,param_3,0,iVar2,lVar8,0,iVar2), (uVar5 & 1) != 0)) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            if (*(int *)(*(long *)(lVar11 + 0x10) + 0x10) < *(int *)(param_3 + 0x10)) {
              System_Globalization_DateTimeFormatInfo__InsertAtCurrentHashNode
                        (param_1,param_2,param_3,uVar4,param_4,param_5,iVar10,uVar9,uVar1);
              return;
            }
            uVar4 = *(uint *)(lVar11 + 0x18);
            if (((param_4 & 0xff) == 0) || ((uVar4 & 0xff) != 0)) {
              if ((param_4 & 0xff00) == 0) {
                return;
              }
              if ((uVar4 & 0xff00) != 0) {
                return;
              }
            }
            *(uint *)(lVar11 + 0x18) = uVar4 | param_4;
            if (param_5 == 0) {
              return;
            }
            *(int *)(lVar11 + 0x1c) = param_5;
            return;
          }
          break;
        }
        uVar9 = uVar9 + uVar1;
        iVar10 = iVar10 + 1;
        if (0xc6 < (int)uVar9) {
          uVar9 = uVar9 - 199;
        }
        if (iVar10 == 199) {
          return;
        }
      } while( true );
    }
  }
LAB_0750599c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

