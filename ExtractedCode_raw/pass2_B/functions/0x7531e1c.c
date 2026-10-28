// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$GetYearOffset
// address: 0x7531e1c
// body: available
// range: 0x7531e1c-0x75320ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7531f58 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7531fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7531ff0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75320fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_Globalization_GregorianCalendarHelper__GetYearOffset
          (long param_1,int param_2,int param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09521867 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181358);
    DAT_09521867 = 1;
  }
  if (param_2 < 0) {
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09225cc0);
    puVar8 = &DAT_09208d80;
  }
  else {
    if (param_3 == 0) {
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_07531fec;
      param_3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    }
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
LAB_07531fec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 == uVar12) goto LAB_07531ff0;
        lVar13 = (long)(int)uVar12;
        lVar14 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_07531fec;
        if (param_3 == *(int *)(lVar14 + 0x10)) {
          if (param_2 < *(int *)(lVar14 + 0x24)) goto LAB_07531f8c;
          iVar15 = param_2 - *(int *)(lVar14 + 0x28);
          if (iVar15 == 0 || param_2 < *(int *)(lVar14 + 0x28)) goto LAB_07531fe4;
          if ((*(char *)(*(long *)(DAT_09181358 + 0xb8) + 2) != '\0') || ((int)(uVar12 - 1) < 0))
          goto LAB_07531f8c;
          uVar3 = uVar12 - 1;
          goto LAB_07531fb4;
        }
        uVar12 = uVar12 + 1;
      } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar12);
    }
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921b0b8);
    puVar8 = &DAT_09201730;
  }
  uVar9 = thunk_FUN_03fc39d4(puVar8);
  System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar9,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091ce2c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
LAB_07531fb4:
  if (uVar1 <= uVar3) {
LAB_07531ff0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar12 = uVar12 - 1;
  lVar16 = *(long *)(lVar11 + (ulong)uVar12 * 8 + 0x20);
  if (lVar16 == 0) goto LAB_07531fec;
  iVar2 = *(int *)(lVar16 + 0x28);
  iVar4 = iVar15 - iVar2;
  if (iVar4 == 0 || iVar15 < iVar2) {
LAB_07531fe4:
    return *(undefined4 *)(lVar14 + 0x20);
  }
  iVar15 = iVar4;
  if ((int)uVar12 < 1) {
LAB_07531f8c:
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    FUN_039b1d98(uVar7);
    lVar11 = FUN_039c930c(uVar7,lVar13);
    FUN_039b1d98();
    local_34 = *(undefined4 *)(lVar11 + 0x24);
    uVar7 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    FUN_039b1d98(uVar9);
    lVar11 = FUN_039c930c(uVar9,lVar13);
    FUN_039b1d98();
    local_38 = *(undefined4 *)(lVar11 + 0x28);
    uVar9 = FUN_03f5c42c(DAT_09535420,&local_38);
    uVar10 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar6 = System_String__Format(uVar6,uVar10,uVar7,uVar9,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09225cc0);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar9,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ce2c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  goto LAB_07531fb4;
}

