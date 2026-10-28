// rea decompile_all
// name: System.Buffers.Text.Utf8Formatter$$TryFormatDecimalF
// address: 0x7562a04
// body: available
// range: 0x7562a04-0x7562cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7562cd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Buffers_Text_Utf8Formatter__TryFormatDecimalF
               (uint *param_1,undefined1 *param_2,uint param_3,int *param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [12];
  
  if ((DAT_095219c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_095219c6 = 1;
  }
  uVar4 = *param_1;
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  auVar18 = FUN_06108530((long)param_1 + 5,0x33,DAT_091ba930);
  uVar8 = auVar18._8_4_;
  uVar13 = uVar4;
  if ((int)uVar4 < 2) {
    uVar13 = 1;
  }
  uVar2 = (uint)param_5;
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = uVar2 + 1;
  }
  iVar3 = uVar13 + iVar3 + (uint)(byte)param_1[1];
  iVar10 = 0;
  if ((int)param_3 < iVar3) goto LAB_07562ca8;
  if ((byte)param_1[1] == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 == 0) goto LAB_07562cd0;
    *param_2 = 0x2d;
    lVar11 = 1;
  }
  uVar13 = (uint)lVar11;
  if ((int)uVar4 < 1) {
    if (param_3 <= uVar13) goto LAB_07562cd0;
    uVar17 = 0;
    uVar13 = uVar13 + 1;
    param_2[lVar11] = 0x30;
  }
  else {
    uVar17 = 0;
    do {
      uVar12 = (uint)uVar17;
      if (uVar8 == uVar12) goto LAB_07562cd0;
      cVar5 = *(char *)(auVar18._0_8_ + uVar17);
      if (cVar5 == '\0') {
        uVar15 = lVar11 + uVar17;
        if ((int)uVar4 <= (int)uVar12) {
          uVar13 = (uint)uVar15;
          goto LAB_07562b98;
        }
        uVar16 = uVar4 - uVar17;
        uVar13 = uVar13 + uVar4;
        goto LAB_07562b74;
      }
      if ((uVar13 - param_3) + uVar12 == 0) goto LAB_07562cd0;
      param_2[uVar17 + lVar11] = cVar5;
      uVar17 = uVar17 + 1;
    } while (uVar4 != (uint)uVar17);
    uVar13 = uVar13 + (uint)uVar17;
    uVar17 = (ulong)uVar4;
  }
  goto LAB_07562b98;
  while( true ) {
    iVar14 = iVar14 + 1;
    param_2[(int)uVar4] = 0x30;
    if ((int)uVar2 <= iVar14 + iVar7 + iVar9) break;
LAB_07562c84:
    uVar4 = uVar12 + iVar9 + iVar14;
    if (param_3 <= uVar4) goto LAB_07562cd0;
  }
  goto LAB_07562ca8;
  while( true ) {
    uVar6 = (int)uVar16 - 1;
    uVar16 = (ulong)uVar6;
    param_2[(int)uVar12] = 0x30;
    uVar15 = (ulong)(uVar12 + 1);
    if (uVar6 == 0) break;
LAB_07562b74:
    uVar12 = (uint)uVar15;
    if (param_3 <= uVar12) goto LAB_07562cd0;
  }
LAB_07562b98:
  iVar10 = iVar3;
  if (param_5 != 0) {
    if (param_3 <= uVar13) {
LAB_07562cd0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar12 = uVar13 + 1;
    param_2[(int)uVar13] = 0x2e;
    if ((int)uVar4 < 0) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar7 = System_Math__Min(uVar2,-uVar4,0);
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          uVar4 = uVar12 + iVar9;
          if (param_3 <= uVar4) goto LAB_07562cd0;
          iVar9 = iVar9 + 1;
          param_2[(int)uVar4] = 0x30;
        } while (iVar7 != iVar9);
        uVar12 = uVar12 + iVar9;
      }
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 < (int)uVar2) {
      iVar9 = 0;
      uVar4 = uVar12;
      if (uVar12 <= param_3) {
        uVar4 = param_3;
      }
      uVar13 = (uint)uVar17;
      iVar14 = 0;
      if (uVar13 <= uVar8) {
        iVar14 = uVar8 - uVar13;
      }
      do {
        if (iVar14 == iVar9) goto LAB_07562cd0;
        cVar5 = *(char *)(auVar18._0_8_ + (long)(int)(uVar13 + iVar9));
        if (cVar5 == '\0') {
          if (iVar7 + iVar9 < (int)uVar2) {
            iVar14 = 0;
            goto LAB_07562c84;
          }
          break;
        }
        if ((uVar12 - uVar4) + iVar9 == 0) goto LAB_07562cd0;
        iVar1 = uVar12 + iVar9;
        iVar9 = iVar9 + 1;
        param_2[iVar1] = cVar5;
      } while ((iVar7 - uVar2) + iVar9 != 0);
    }
  }
LAB_07562ca8:
  *param_4 = iVar10;
  return iVar3 <= (int)param_3;
}

