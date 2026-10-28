// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils$$WriteEscapedJavaScriptString
// address: 0x7696058
// body: available
// range: 0x7696058-0x769664f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769664c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_JavaScriptUtils__WriteEscapedJavaScriptString
               (long *param_1,long param_2,undefined4 param_3,ulong param_4,long param_5,int param_6
               ,undefined8 param_7,long *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  
  if ((DAT_095225be & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187288);
    FUN_03f5c2a4(&DAT_091f6cf8);
    FUN_03f5c2a4(&DAT_092146f0);
    FUN_03f5c2a4(&DAT_09214678);
    FUN_03f5c2a4(&DAT_09214690);
    FUN_03f5c2a4(&DAT_092146d0);
    FUN_03f5c2a4(&DAT_092145e8);
    FUN_03f5c2a4(&DAT_09214688);
    FUN_03f5c2a4(&DAT_092145f0);
    FUN_03f5c2a4(&DAT_092146b8);
    FUN_03f5c2a4(&DAT_092146e8);
    FUN_03f5c2a4(&DAT_092146e0);
    FUN_03f5c2a4(&DAT_09214658);
    DAT_095225be = 1;
  }
  if ((param_4 & 1) != 0) {
    if (param_1 == (long *)0x0) goto LAB_0769664c;
    (**(code **)(*param_1 + 0x228))(param_1,param_3,*(undefined8 *)(*param_1 + 0x230));
  }
  uVar7 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_2,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_09187288 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar5 = Newtonsoft_Json_Utilities_JavaScriptUtils__FirstCharToEscape(param_2,param_5,param_6);
    if (iVar5 == 0) {
      if (param_2 == 0) goto LAB_0769664c;
    }
    else {
      if (iVar5 == -1) {
        if (param_1 == (long *)0x0) goto LAB_0769664c;
        (**(code **)(*param_1 + 0x278))(param_1,param_2,*(undefined8 *)(*param_1 + 0x280));
        goto LAB_076965f0;
      }
      if ((*param_8 == 0) || (*(int *)(*param_8 + 0x18) < iVar5)) {
        lVar8 = Newtonsoft_Json_Utilities_BufferUtils__EnsureBufferSize(param_7,iVar5);
        *param_8 = lVar8;
        thunk_FUN_03f5d7b8(param_8,lVar8);
      }
      if ((param_2 == 0) ||
         (System_String__CopyTo(param_2,0,*param_8,0,iVar5,0), param_1 == (long *)0x0))
      goto LAB_0769664c;
      (**(code **)(*param_1 + 0x248))(param_1,*param_8,0,iVar5,*(undefined8 *)(*param_1 + 0x250));
    }
    iVar12 = *(int *)(param_2 + 0x10);
    iVar14 = iVar5;
    if (iVar5 < iVar12) {
      do {
        uVar7 = System_String__get_Chars(param_2,iVar14,0);
        if (param_5 == 0) goto LAB_0769664c;
        uVar6 = (uint)uVar7;
        uVar1 = uVar6 & 0xffff;
        if ((*(int *)(param_5 + 0x18) <= (int)uVar1) ||
           (*(char *)(param_5 + (uVar7 & 0xffff) + 0x20) != '\0')) {
          if (uVar1 < 0x5d) {
            if (uVar1 < 0xb) {
              if (uVar1 == 8) {
                plVar13 = &DAT_09214678;
              }
              else if (uVar1 == 9) {
                plVar13 = &DAT_092146d0;
              }
              else if (uVar1 == 10) {
                plVar13 = &DAT_09214690;
              }
              else {
LAB_07696348:
                plVar13 = &DAT_09214658;
                if ((uVar6 & 0xffff) != 0x5c) goto LAB_0769635c;
              }
            }
            else if (uVar1 == 0xb) {
LAB_0769635c:
              if ((param_6 != 1) && (*(int *)(param_5 + 0x18) <= (int)uVar1)) goto LAB_07696558;
              if (((param_6 == 2) || (plVar13 = &DAT_092145f0, (uVar6 & 0xffff) != 0x27)) &&
                 ((param_6 == 2 || (plVar13 = &DAT_092145e8, (uVar6 & 0xffff) != 0x22)))) {
                lVar8 = *param_8;
                if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < 6)) {
                  lVar8 = Newtonsoft_Json_Utilities_BufferUtils__EnsureBufferSize(param_7,6);
                  *param_8 = lVar8;
                  thunk_FUN_03f5d7b8(param_8,lVar8);
                  lVar8 = *param_8;
                }
                Newtonsoft_Json_Utilities_StringUtils__ToCharAsUnicode(uVar7 & 0xffffffff,lVar8,0);
                plVar13 = &DAT_091f6cf8;
              }
            }
            else if (uVar1 == 0xc) {
              plVar13 = &DAT_09214688;
            }
            else {
              if (uVar1 != 0xd) goto LAB_07696348;
              plVar13 = &DAT_092146b8;
            }
          }
          else {
            uVar2 = uVar6 & 0xffff;
            if (uVar2 == 0x85) {
              plVar13 = &DAT_092146e0;
            }
            else if (uVar2 == 0x2028) {
              plVar13 = &DAT_092146e8;
            }
            else {
              if (uVar2 != 0x2029) goto LAB_0769635c;
              plVar13 = &DAT_092146f0;
            }
          }
          lVar8 = *plVar13;
          if (lVar8 != 0) {
            uVar7 = System_String__Equals(lVar8,DAT_091f6cf8,4,0);
            iVar12 = iVar14 - iVar5;
            if (iVar12 == 0 || iVar14 < iVar5) {
              if ((uVar7 & 1) != 0) {
                if (param_1 != (long *)0x0) goto LAB_07696518;
                goto LAB_0769664c;
              }
              if (param_1 == (long *)0x0) goto LAB_0769664c;
            }
            else {
              bVar4 = (uVar7 & 1) == 0;
              lVar9 = *param_8;
              iVar3 = iVar12 + 6;
              if (bVar4) {
                iVar3 = iVar12;
              }
              iVar11 = 6;
              uVar10 = 6;
              if (bVar4) {
                uVar10 = 0;
              }
              if ((lVar9 == 0) || (iVar11 = *(int *)(lVar9 + 0x18), iVar11 < iVar3)) {
                lVar9 = Newtonsoft_Json_Utilities_BufferUtils__RentBuffer(iVar11,param_7);
                if ((uVar7 & 1) != 0) {
                  System_Array__Copy(*param_8,lVar9,6,0);
                }
                Newtonsoft_Json_Utilities_BufferUtils__ReturnBuffer(param_7,*param_8);
                *param_8 = lVar9;
                thunk_FUN_03f5d7b8(param_8,lVar9);
                lVar9 = *param_8;
              }
              System_String__CopyTo(param_2,iVar5,lVar9,uVar10,iVar12,0);
              if (param_1 == (long *)0x0) goto LAB_0769664c;
              (**(code **)(*param_1 + 0x248))
                        (param_1,*param_8,uVar10,iVar12,*(undefined8 *)(*param_1 + 0x250));
              if ((uVar7 & 1) != 0) {
LAB_07696518:
                iVar5 = iVar14 + 1;
                (**(code **)(*param_1 + 0x248))
                          (param_1,*param_8,0,6,*(undefined8 *)(*param_1 + 0x250));
                goto LAB_07696558;
              }
            }
            iVar5 = iVar14 + 1;
            (**(code **)(*param_1 + 0x278))(param_1,lVar8,*(undefined8 *)(*param_1 + 0x280));
          }
        }
LAB_07696558:
        iVar12 = *(int *)(param_2 + 0x10);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar12);
    }
    iVar12 = iVar12 - iVar5;
    if (0 < iVar12) {
      lVar8 = *param_8;
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < iVar12)) {
        lVar8 = Newtonsoft_Json_Utilities_BufferUtils__EnsureBufferSize(param_7,iVar12);
        *param_8 = lVar8;
        thunk_FUN_03f5d7b8(param_8,lVar8);
        lVar8 = *param_8;
      }
      System_String__CopyTo(param_2,iVar5,lVar8,0,iVar12,0);
      if (param_1 == (long *)0x0) goto LAB_0769664c;
      (**(code **)(*param_1 + 0x248))(param_1,*param_8,0,iVar12,*(undefined8 *)(*param_1 + 0x250));
    }
  }
LAB_076965f0:
  if ((param_4 & 1) == 0) {
    return;
  }
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07696628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,param_3,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
LAB_0769664c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

