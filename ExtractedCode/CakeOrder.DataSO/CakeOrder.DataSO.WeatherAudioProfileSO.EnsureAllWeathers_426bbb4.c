// rea decompile_all
// name: CakeOrder.DataSO.WeatherAudioProfileSO$$EnsureAllWeathers
// address: 0x426bbb4
// body: available
// range: 0x426bbb4-0x426be53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426be30 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x426be34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426be38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426be44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426be50 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_WeatherAudioProfileSO__EnsureAllWeathers(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if ((DAT_09516fec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180c80);
    FUN_03f5c2a4(&DAT_09180838);
    FUN_03f5c2a4(&DAT_091735b0);
    DAT_09516fec = 1;
  }
  uVar2 = DAT_091735b0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar3 = System_Enum__GetValues(uVar2,0);
  uVar2 = DAT_09180838;
  if (lVar3 == 0) {
LAB_0426be38:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = thunk_FUN_03f99350(lVar3,DAT_09180838);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar3,uVar2);
  }
  plVar12 = (long *)(param_1 + 0x18);
  lVar3 = *plVar12;
  if (lVar3 == 0) {
    iVar7 = *(int *)(lVar4 + 0x18);
  }
  else {
    iVar7 = *(int *)(lVar4 + 0x18);
    iVar9 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar9 == iVar7) {
      if (0 < iVar9) {
        uVar8 = 0;
        uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar10 == uVar8) goto LAB_0426be34;
          lVar11 = *(long *)(lVar3 + 0x20 + uVar8 * 8);
          if (lVar11 == 0) goto LAB_0426bd00;
          iVar1 = *(int *)(lVar4 + 0x20 + uVar8 * 4);
          uVar8 = uVar8 + 1;
          iVar9 = *(int *)(lVar11 + 0x10);
        } while ((uVar8 < uVar10) && (iVar9 == iVar1));
        if (iVar9 != iVar1) goto LAB_0426bd00;
      }
      return;
    }
  }
LAB_0426bd00:
  plVar5 = (long *)FUN_03f5c394(DAT_09180c80,iVar7);
  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
    uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    plVar13 = plVar5 + 4;
    lVar3 = 8;
    do {
      uVar10 = lVar3 - 8;
      if (uVar8 <= uVar10) {
LAB_0426be34:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar11 = CakeOrder_DataSO_WeatherAudioProfileSO__Get
                         (param_1,*(undefined4 *)(lVar4 + lVar3 * 4));
      if (plVar5 == (long *)0x0) goto LAB_0426be38;
      if ((lVar11 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_0426be3c;
      if (*(uint *)(plVar5 + 3) <= uVar10) goto LAB_0426be34;
      *plVar13 = lVar11;
      thunk_FUN_03f5d7b8(plVar13,lVar11);
      if (*(uint *)(plVar5 + 3) <= uVar10) goto LAB_0426be34;
      uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
      if (*plVar13 == 0) {
LAB_0426bdb0:
        if (uVar8 <= uVar10) goto LAB_0426be34;
        lVar11 = CakeOrder_DataSO_WeatherAudioProfileSO__DefaultFor
                           (*(undefined4 *)(lVar4 + lVar3 * 4));
        if ((lVar11 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0426be3c:
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar10) goto LAB_0426be34;
        *plVar13 = lVar11;
        thunk_FUN_03f5d7b8(plVar13,lVar11);
        uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
      }
      else {
        if (uVar8 <= uVar10) goto LAB_0426be34;
        if (*(int *)(*plVar13 + 0x10) != *(int *)(lVar4 + lVar3 * 4)) goto LAB_0426bdb0;
      }
      lVar11 = lVar3 + -7;
      lVar3 = lVar3 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar11 < (int)uVar8);
  }
  *plVar12 = (long)plVar5;
  thunk_FUN_03f5d7b8(plVar12,plVar5);
  return;
}

