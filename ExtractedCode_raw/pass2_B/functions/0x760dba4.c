// rea decompile_all
// name: System.ParameterizedStrings$$FormatPrintF
// address: 0x760dba4
// body: available
// range: 0x760dba4-0x760dda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760dd2c to 0x760dfc4 System.ParameterizedStrings$$StringFromAsciiBytes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x760dd30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760dd38 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760dda0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_ParameterizedStrings__FormatPrintF(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  if ((DAT_09522030 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09522030 = 1;
  }
  lVar2 = DAT_09535468;
  if (param_2 == (long *)0x0) {
LAB_0760dd30:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar11 = *param_2;
  if (lVar11 == DAT_09535468) {
    iVar3 = System_ParameterizedStrings__snprintf(0,0,param_1,param_2);
    plVar10 = param_2;
  }
  else {
    if (*(long *)(lVar11 + 0x40) != *(long *)(DAT_09535420 + 0x40)) goto LAB_0760dd34;
    puVar5 = (undefined4 *)thunk_FUN_03f99594(param_2);
    iVar3 = System_ParameterizedStrings__snprintf(0,0,param_1,*puVar5);
    plVar10 = (long *)0x0;
  }
  if (iVar3 == 0) {
    return **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  if (iVar3 < 0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar7 = thunk_FUN_03f9944c();
    puVar8 = &DAT_0920fb10;
  }
  else {
    lVar6 = FUN_03f5c394(DAT_0917fc88,iVar3 + 1);
    if (lVar6 == 0) goto LAB_0760dd30;
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar1 = 0;
    if (iVar4 != 0) {
      lVar1 = lVar6 + 0x20;
    }
    if (lVar11 == lVar2) {
      iVar4 = System_ParameterizedStrings__snprintf(lVar1,(long)iVar4,param_1,plVar10);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
LAB_0760dd34:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      puVar5 = (undefined4 *)thunk_FUN_03f99594(param_2);
      iVar4 = System_ParameterizedStrings__snprintf(lVar1,(long)iVar4,param_1,*puVar5);
    }
    if (iVar4 == iVar3) {
      uVar7 = System_ParameterizedStrings__StringFromAsciiBytes(lVar6,0,iVar3);
      return uVar7;
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar7 = thunk_FUN_03f9944c();
    puVar8 = &DAT_092059c0;
  }
  uVar9 = thunk_FUN_03fc39d4(puVar8);
  System_InvalidOperationException___ctor(uVar7,uVar9,0);
  uVar9 = thunk_FUN_03fc39d4(&DAT_091d5768);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar9);
}

