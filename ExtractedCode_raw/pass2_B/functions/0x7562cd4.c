// rea decompile_all
// name: System.Buffers.Text.Utf8Formatter$$TryFormatDecimalG
// address: 0x7562cd4
// body: available
// range: 0x7562cd4-0x7562f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7562f0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
System_Buffers_Text_Utf8Formatter__TryFormatDecimalG
          (uint *param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [12];
  
  if ((DAT_095219c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_095219c7 = 1;
  }
  uVar1 = *param_1;
  uVar13 = (ulong)uVar1;
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  auVar14 = FUN_06108530((long)param_1 + 5,0x33,DAT_091ba930);
  uVar5 = auVar14._8_4_;
  iVar4 = System_Buffers_Text_NumberBuffer__get_NumDigits(param_1);
  if (iVar4 - uVar1 == 0 || iVar4 < (int)uVar1) {
    uVar9 = uVar1;
    if ((int)uVar1 < 2) {
      uVar9 = 1;
    }
  }
  else if ((int)uVar1 < 1) {
    uVar9 = (iVar4 - uVar1) + 2;
  }
  else {
    uVar9 = iVar4 + 1;
  }
  if ((char)param_1[1] == '\0') {
    uVar10 = 0;
    uVar7 = 0;
    if ((int)param_3 < (int)uVar9) {
      uVar6 = 0;
      goto LAB_07562f18;
    }
  }
  else {
    uVar9 = uVar9 + 1;
    if ((int)param_3 < (int)uVar9) {
      uVar6 = 0;
      uVar7 = 0;
      goto LAB_07562f18;
    }
    if (param_3 == 0) goto LAB_07562f0c;
    uVar10 = 1;
    *param_2 = 0x2d;
  }
  if ((int)uVar1 < 1) {
    if (param_3 <= uVar10) goto LAB_07562f0c;
    uVar8 = 0;
    uVar7 = uVar10 + 1;
    param_2[uVar10] = 0x30;
  }
  else {
    uVar8 = 0;
    do {
      uVar7 = (uint)uVar8;
      if (uVar5 == uVar7) goto LAB_07562f0c;
      cVar2 = *(char *)(auVar14._0_8_ + uVar8);
      if (cVar2 == '\0') {
        uVar11 = uVar10 + uVar8;
        if ((int)uVar1 <= (int)uVar7) {
          uVar7 = (uint)uVar11;
          goto LAB_07562e80;
        }
        uVar12 = uVar13 - uVar8;
        uVar7 = uVar10 + uVar1;
        goto LAB_07562e5c;
      }
      if ((uVar10 - param_3) + uVar7 == 0) goto LAB_07562f0c;
      param_2[uVar8 + uVar10] = cVar2;
      uVar8 = uVar8 + 1;
    } while (uVar1 != (uint)uVar8);
    uVar7 = uVar10 + (uint)uVar8;
    uVar8 = uVar13;
  }
  goto LAB_07562e80;
  while( true ) {
    uVar3 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar3;
    param_2[(int)uVar10] = 0x30;
    uVar11 = (ulong)(uVar10 + 1);
    if (uVar3 == 0) break;
LAB_07562e5c:
    uVar10 = (uint)uVar11;
    if (param_3 <= uVar10) goto LAB_07562f0c;
  }
LAB_07562e80:
  if (iVar4 <= (int)uVar1) {
LAB_07562f10:
    uVar6 = 1;
    uVar7 = uVar9;
LAB_07562f18:
    *param_4 = uVar7;
    return uVar6;
  }
  if (uVar7 < param_3) {
    uVar10 = uVar7 + 1;
    param_2[(int)uVar7] = 0x2e;
    uVar7 = uVar10;
    if (((int)uVar1 < 0) && (0 < (int)-uVar1)) {
      do {
        if (param_3 == uVar10) goto LAB_07562f0c;
        uVar7 = uVar10 + 1;
        iVar4 = (int)uVar13;
        uVar13 = (ulong)(iVar4 + 1);
        param_2[(int)uVar10] = 0x30;
        uVar10 = uVar7;
      } while (iVar4 != -1);
    }
    if ((uint)uVar8 < uVar5) {
      uVar1 = uVar7;
      if (uVar7 <= param_3) {
        uVar1 = param_3;
      }
      do {
        cVar2 = *(char *)(auVar14._0_8_ + (long)(int)uVar8);
        if (cVar2 == '\0') goto LAB_07562f10;
        if (uVar1 == uVar7) break;
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar10;
        param_2[(int)uVar7] = cVar2;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar10);
    }
  }
LAB_07562f0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

