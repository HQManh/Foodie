// rea decompile_all
// name: System.Text.ASCIIEncoding$$GetBytes
// address: 0x763a53c
// body: available
// range: 0x763a53c-0x763a97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763a8e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763a978 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_ASCIIEncoding__GetBytes
              (long *param_1,ushort *param_2,int param_3,undefined1 *param_4,int param_5,
              long param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ushort *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  short sVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  ushort *local_58;
  
  if ((DAT_09522258 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fa8);
    DAT_09522258 = 1;
  }
  puVar10 = param_2 + param_3;
  local_58 = (ushort *)0x0;
  puVar14 = param_4;
  puVar15 = param_2;
  if (param_6 == 0) {
    plVar7 = (long *)param_1[5];
    if ((plVar7 != (long *)0x0) && (*plVar7 == DAT_09183fa8)) {
      sVar13 = 0;
      plVar11 = (long *)0x0;
      lVar8 = DAT_09183fa8;
      goto LAB_0763a658;
    }
    plVar11 = (long *)0x0;
    puVar12 = param_4 + param_5;
LAB_0763a700:
    if (plVar11 == (long *)0x0) {
      uVar2 = 0;
LAB_0763a724:
      if (puVar10 <= puVar15) goto LAB_0763a7fc;
    }
    else {
      uVar2 = System_Text_EncoderFallbackBuffer__InternalGetNextChar(plVar11,0);
      if (uVar2 == 0) goto LAB_0763a724;
    }
    if (uVar2 == 0) {
      uVar2 = *puVar15;
      puVar15 = puVar15 + 1;
    }
    if (0x7f < uVar2) {
      if (plVar11 == (long *)0x0) {
        if (param_6 == 0) {
          plVar7 = (long *)param_1[5];
          if (plVar7 == (long *)0x0) goto LAB_0763a8e8;
          plVar11 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        }
        else {
          plVar11 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
        }
        if (plVar11 == (long *)0x0) goto LAB_0763a8e8;
        System_Text_EncoderFallbackBuffer__InternalInitialize(plVar11,param_2,puVar10,param_6,1,0);
      }
      local_58 = puVar15;
      (**(code **)(*plVar11 + 0x1d8))(plVar11,uVar2,&local_58,*(undefined8 *)(*plVar11 + 0x1e0));
      puVar15 = local_58;
      goto LAB_0763a700;
    }
    if (puVar14 < puVar12) {
      *puVar14 = (char)uVar2;
      puVar14 = puVar14 + 1;
      goto LAB_0763a700;
    }
    if ((plVar11 == (long *)0x0) || (*(char *)((long)plVar11 + 0x2a) == '\0')) {
      puVar15 = puVar15 + -1;
    }
    else {
      (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    }
    System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,puVar14 == param_4,0);
LAB_0763a7fc:
    if (param_6 == 0) goto LAB_0763a824;
    if ((plVar11 != (long *)0x0) && (*(char *)((long)plVar11 + 0x29) == '\0')) {
      *(undefined2 *)(param_6 + 0x20) = 0;
    }
    uVar4 = (long)puVar15 - (long)param_2;
  }
  else {
    plVar7 = *(long **)(param_6 + 0x10);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != DAT_09183fa8) {
      plVar7 = (long *)0x0;
    }
    sVar13 = *(short *)(param_6 + 0x20);
    uVar4 = System_Text_Encoder__get_InternalHasFallbackBuffer(param_6,0);
    plVar11 = (long *)0x0;
    if ((uVar4 & 1) != 0) {
      plVar11 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
      if (plVar11 == (long *)0x0) goto LAB_0763a8e8;
      iVar3 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      if ((0 < iVar3) && (*(char *)(param_6 + 0x31) != '\0')) {
        uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_6);
        uVar9 = *(undefined8 *)(param_6 + 0x10);
        FUN_039b1d98(uVar9);
        uVar9 = System_Object__GetType(uVar9,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar5 = SR__Format(uVar6,uVar5,uVar9,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar9 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar9,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091bf498);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar5);
      }
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar11,param_2,puVar10,param_6,1,0);
    }
    if (plVar7 == (long *)0x0) {
      puVar12 = param_4 + param_5;
      if (sVar13 == 0) goto LAB_0763a700;
LAB_0763a6b0:
      plVar11 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
      if (plVar11 == (long *)0x0) {
LAB_0763a8e8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar11,param_2,puVar10,param_6,1,0);
      local_58 = param_2;
      (**(code **)(*plVar11 + 0x1d8))(plVar11,sVar13,&local_58,*(undefined8 *)(*plVar11 + 0x1e0));
      puVar15 = local_58;
      goto LAB_0763a700;
    }
    lVar8 = *plVar7;
LAB_0763a658:
    iVar3 = (**(code **)(lVar8 + 0x188))(plVar7,*(undefined8 *)(lVar8 + 400));
    if (iVar3 != 1) {
LAB_0763a68c:
      puVar12 = param_4 + param_5;
      if (sVar13 == 0) goto LAB_0763a700;
      if (param_6 == 0) goto LAB_0763a8e8;
      goto LAB_0763a6b0;
    }
    if (plVar7[2] == 0) goto LAB_0763a8e8;
    uVar2 = System_String__get_Chars(plVar7[2],0,0);
    if (0x7f < uVar2) goto LAB_0763a68c;
    if (sVar13 != 0) {
      if (param_5 == 0) {
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,1,0);
      }
      param_5 = param_5 + -1;
      *param_4 = (char)uVar2;
      puVar14 = param_4 + 1;
    }
    if (param_5 < param_3) {
      System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,param_5 < 1,0);
      puVar10 = param_2 + param_5;
    }
    while (puVar15 < puVar10) {
      uVar1 = *puVar15;
      if (0x7f < *puVar15) {
        uVar1 = uVar2;
      }
      *puVar14 = (char)uVar1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    if (param_6 == 0) goto LAB_0763a824;
    uVar4 = (long)puVar15 - (long)param_2;
    *(undefined2 *)(param_6 + 0x20) = 0;
  }
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  *(int *)(param_6 + 0x34) = (int)(uVar4 >> 1);
LAB_0763a824:
  return (int)puVar14 - (int)param_4;
}

