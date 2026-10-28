// rea decompile_all
// name: Newtonsoft.Json.Utilities.EnumUtils$$ToUInt64
// address: 0x7691a40
// body: available
// range: 0x7691a40-0x7691d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7691cec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691cf4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691d3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Utilities_EnumUtils__ToUInt64(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  ulong uVar6;
  int *piVar7;
  short *psVar8;
  ulong *puVar9;
  char *pcVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 local_14 [4];
  
  if ((DAT_095225a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_095225a5 = 1;
  }
  local_14[0] = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_Object__GetType(param_1,0);
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182b90);
  }
  iVar1 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(uVar2,local_14);
  if (iVar1 < 0xc) {
    if (iVar1 < 6) {
      lVar13 = DAT_09535460;
      if (iVar1 != 2) {
        if (iVar1 != 4) goto LAB_07691cf8;
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
          puVar3 = (undefined1 *)thunk_FUN_03f99594(param_1);
          uVar6 = System_Convert__ToByte(*puVar3,0);
          return uVar6 & 0xff;
        }
        goto LAB_07691cf0;
      }
    }
    else {
      if (iVar1 == 6) {
        if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535408 + 0x40)) {
          pcVar10 = (char *)thunk_FUN_03f99594(param_1);
          return (long)*pcVar10;
        }
        goto LAB_07691cf0;
      }
      if (iVar1 == 8) {
        if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535410 + 0x40)) {
          psVar8 = (short *)thunk_FUN_03f99594(param_1);
          return (long)*psVar8;
        }
        goto LAB_07691cf0;
      }
      lVar13 = DAT_09535418;
      if (iVar1 != 10) goto LAB_07691cf8;
    }
    if (*(long *)(*param_1 + 0x40) != *(long *)(lVar13 + 0x40)) {
LAB_07691cf0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_1);
    }
    puVar5 = (ushort *)thunk_FUN_03f99594(param_1);
    uVar6 = (ulong)*puVar5;
  }
  else if (iVar1 < 0x10) {
    if (iVar1 == 0xc) {
      if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_09535420 + 0x40)) goto LAB_07691cf0;
      piVar7 = (int *)thunk_FUN_03f99594(param_1);
      uVar6 = (ulong)*piVar7;
    }
    else {
      if (iVar1 != 0xe) goto LAB_07691cf8;
      if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_095353f0 + 0x40)) goto LAB_07691cf0;
      pbVar4 = (byte *)thunk_FUN_03f99594(param_1);
      uVar6 = (ulong)*pbVar4;
    }
  }
  else if (iVar1 == 0x10) {
    if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_09535428 + 0x40)) goto LAB_07691cf0;
    puVar11 = (uint *)thunk_FUN_03f99594(param_1);
    uVar6 = (ulong)*puVar11;
  }
  else {
    lVar13 = DAT_09535440;
    if ((iVar1 != 0x12) && (lVar13 = DAT_09535448, iVar1 != 0x14)) {
LAB_07691cf8:
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar2 = thunk_FUN_03f9944c();
      uVar12 = thunk_FUN_03fc39d4(&DAT_092123c8);
      System_InvalidOperationException___ctor(uVar2,uVar12,0);
      uVar12 = thunk_FUN_03fc39d4(&DAT_091c9228);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar12);
    }
    if (*(long *)(*param_1 + 0x40) != *(long *)(lVar13 + 0x40)) goto LAB_07691cf0;
    puVar9 = (ulong *)thunk_FUN_03f99594(param_1);
    uVar6 = *puVar9;
  }
  return uVar6;
}

