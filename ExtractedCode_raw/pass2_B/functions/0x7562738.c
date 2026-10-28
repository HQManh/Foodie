// rea decompile_all
// name: System.Buffers.Text.Utf8Formatter$$TryFormatDecimalE
// address: 0x7562738
// body: available
// range: 0x7562738-0x75629c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75629c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Buffers_Text_Utf8Formatter__TryFormatDecimalE
               (int *param_1,undefined1 *param_2,uint param_3,int *param_4,byte param_5,
               undefined1 param_6)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [12];
  
  if ((DAT_095219c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_095219c5 = 1;
  }
  iVar4 = *param_1;
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  auVar13 = FUN_06108530((long)param_1 + 5,0x33,DAT_091ba930);
  uVar7 = (uint)param_5;
  iVar1 = 5;
  if (param_5 != 0) {
    iVar1 = uVar7 + 6;
  }
  iVar1 = (uint)*(byte *)(param_1 + 1) + iVar1 + 1;
  if ((int)param_3 < iVar1) {
    iVar4 = 0;
    goto LAB_0756299c;
  }
  if (*(byte *)(param_1 + 1) == 0) {
    uVar6 = 0;
  }
  else {
    if (param_3 == 0) goto LAB_075629c0;
    uVar6 = 1;
    *param_2 = 0x2d;
  }
  if (auVar13._8_4_ == 0) goto LAB_075629c0;
  cVar3 = *auVar13._0_8_;
  if (cVar3 == '\0') {
    if (param_3 <= uVar6) goto LAB_075629c0;
    iVar4 = 0;
    uVar12 = 0;
    param_2[uVar6] = 0x30;
  }
  else {
    if (param_3 <= uVar6) goto LAB_075629c0;
    param_2[uVar6] = cVar3;
    iVar4 = iVar4 + -1;
    uVar12 = 1;
  }
  uVar9 = (ulong)uVar6 + 1;
  if (param_5 != 0) {
    if (param_3 <= (uint)uVar9) goto LAB_075629c0;
    param_2[uVar9] = 0x2e;
    uVar8 = (ulong)uVar6 | 2;
    lVar11 = 0;
    do {
      uVar10 = (uint)lVar11;
      if (auVar13._8_4_ - uVar12 == uVar10) goto LAB_075629c0;
      cVar3 = auVar13._0_8_[lVar11 + (ulong)uVar12];
      if (cVar3 == '\0') {
        if (uVar10 < uVar7) {
          uVar9 = (ulong)(uVar6 + uVar7 + 2);
          uVar8 = uVar8 + lVar11;
          goto LAB_075628e4;
        }
        uVar9 = uVar8 + lVar11 & 0xffffffff;
        goto LAB_07562908;
      }
      if (((int)uVar8 - param_3) + uVar10 == 0) goto LAB_075629c0;
      param_2[lVar11 + uVar8] = cVar3;
      lVar11 = lVar11 + 1;
    } while ((uint)param_5 != (uint)lVar11);
    uVar9 = (ulong)((int)uVar8 + (uint)lVar11);
  }
  goto LAB_07562908;
  while( true ) {
    uVar2 = uVar8 + 1;
    param_2[uVar8] = 0x30;
    uVar8 = uVar2;
    if (uVar9 == uVar2) break;
LAB_075628e4:
    if (param_3 <= uVar8) goto LAB_075629c0;
  }
LAB_07562908:
  uVar7 = (uint)uVar9;
  if (uVar7 < param_3) {
    uVar6 = uVar7 + 1;
    param_2[(int)uVar7] = param_6;
    if (iVar4 < 0) {
      if (param_3 <= uVar6) goto LAB_075629c0;
      iVar4 = -iVar4;
      uVar5 = 0x2d;
    }
    else {
      if (param_3 <= uVar6) goto LAB_075629c0;
      uVar5 = 0x2b;
    }
    param_2[(int)uVar6] = uVar5;
    if (uVar7 + 2 < param_3) {
      param_2[(int)(uVar7 + 2)] = 0x30;
      if (uVar7 + 3 < param_3) {
        cVar3 = (char)(iVar4 / 10);
        param_2[(int)(uVar7 + 3)] = cVar3 + '0';
        if (uVar7 + 4 < param_3) {
          param_2[(int)(uVar7 + 4)] = (char)iVar4 + cVar3 * -10 + '0';
          iVar4 = iVar1;
LAB_0756299c:
          *param_4 = iVar4;
          return iVar1 <= (int)param_3;
        }
      }
    }
  }
LAB_075629c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

