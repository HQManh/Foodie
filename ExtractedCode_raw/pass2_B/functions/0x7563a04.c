// rea decompile_all
// name: System.Buffers.Text.Utf8Parser$$TryParseNumber
// address: 0x7563a04
// body: available
// range: 0x7563a04-0x7563d5b inclusive
// range: 0x7563d60-0x7563f27 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7563c04 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7563d58 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7563da8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7563f24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * System_Buffers_Text_Utf8Parser__TryParseNumber
                 (char *param_1,undefined8 param_2,int *param_3,uint *param_4,uint param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  char *local_88;
  ulong local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 uStack_68;
  
  pcVar4 = param_1;
  local_70 = param_1;
  uStack_68 = param_2;
  if ((DAT_095219cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9778);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba910);
    pcVar4 = (char *)FUN_03f5c2a4(&DAT_0918c978);
    DAT_095219cd = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_88 = (char *)0x0;
  *param_6 = 0;
  uVar10 = (uint)param_2;
  if (uVar10 != 0) {
    if ((DAT_095219d0 & 1) == 0) {
      pcVar4 = (char *)FUN_03f5c2a4(&DAT_091ba8e8);
      DAT_095219d0 = 1;
    }
    if (*param_1 == '+') {
LAB_07563af0:
      if (uVar10 == 1) goto LAB_07563afc;
      uVar15 = 1;
    }
    else {
      if (*param_1 == '-') {
        *(undefined1 *)(param_3 + 1) = 1;
        goto LAB_07563af0;
      }
      uVar15 = 0;
    }
    uVar6 = uVar10;
    if (uVar15 != uVar10) {
      uVar3 = uVar15;
      uVar2 = uVar15;
      if (uVar15 < uVar10) {
        uVar2 = uVar10;
      }
      do {
        if (uVar2 == uVar3) goto LAB_07563f24;
        if (param_1[(int)uVar3] != '0') {
          uVar2 = uVar3;
          goto LAB_07563b8c;
        }
        uVar3 = uVar3 + 1;
      } while (uVar10 != uVar3);
    }
    *(undefined1 *)((long)param_3 + 5) = 0;
    pcVar4 = (char *)0x1;
    *param_3 = 0;
    goto LAB_07563b54;
  }
  goto LAB_07563afc;
  while (uVar2 = uVar2 + 1, uVar16 = uVar10, uVar10 != uVar2) {
LAB_07563b8c:
    bVar12 = param_1[(int)uVar2];
    uVar16 = uVar2;
    if (9 < bVar12 - 0x30) break;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Math__Min(uVar16 - uVar3,0x32,0);
  if ((uVar10 < uVar3) || (uVar10 - uVar3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091b9778 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  local_80 = (ulong)uVar2;
  local_88 = param_1 + (int)uVar3;
  pcVar4 = (char *)FUN_05ff5c28(&local_88,(long)param_3 + 5,0x33,DAT_091b9760);
  *param_3 = uVar16 - uVar3;
  if (uVar16 == uVar10) {
    pcVar4 = (char *)0x1;
    goto LAB_07563b54;
  }
  if (bVar12 == 0x2e) {
    uVar13 = uVar16 + 1;
    uVar14 = uVar13;
    if (uVar13 == uVar10) {
      bVar12 = 0x2e;
      uVar11 = uVar10;
    }
    else {
      do {
        if (uVar10 <= uVar14) goto LAB_07563f24;
        bVar12 = param_1[(int)uVar14];
        uVar11 = uVar14;
      } while ((bVar12 - 0x30 < 10) && (uVar14 = uVar14 + 1, uVar11 = uVar10, uVar10 != uVar14));
    }
    iVar7 = uVar11 - uVar13;
    uVar14 = uVar13;
    if ((uVar2 == 0) && (iVar7 != 0 && (int)uVar13 <= (int)uVar11)) {
      pcVar8 = param_1 + (int)uVar13;
      iVar9 = ~uVar3 + uVar16;
      do {
        if (uVar10 <= uVar13) goto LAB_07563f24;
        uVar14 = uVar13;
        if (*pcVar8 != '0') break;
        uVar13 = uVar13 + 1;
        *param_3 = iVar9;
        iVar9 = iVar9 + -1;
        pcVar8 = pcVar8 + 1;
        uVar14 = uVar11;
      } while (uVar11 != uVar13);
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Math__Min(uVar11 - uVar14,0x32 - uVar2,0);
    if ((uVar10 < uVar14) || (uVar10 - uVar14 < uVar3)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b9778 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_80 = (ulong)uVar3;
    local_88 = param_1 + (int)uVar14;
    if (0x33 < uVar2) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    FUN_05ff5c28(&local_88,(long)param_3 + 5 + (long)(int)uVar2,0x33 - uVar2,DAT_091b9760);
    if (uVar11 == uVar10) {
      pcVar4 = (char *)(ulong)(uVar16 != uVar15 || iVar7 != 0);
      if (uVar16 == uVar15 && iVar7 == 0) {
        uVar6 = 0;
      }
      goto LAB_07563b54;
    }
  }
  else {
    iVar7 = 0;
    uVar11 = uVar16;
  }
  if ((uVar16 == uVar15) && (iVar7 == 0)) goto LAB_07563afc;
  pcVar4 = (char *)0x1;
  uVar6 = uVar11;
  if ((bVar12 & 0xdf) != 0x45) goto LAB_07563b54;
  *param_6 = 1;
  uVar6 = 0;
  if ((param_5 & 1) == 0) {
    pcVar4 = (char *)0x0;
    goto LAB_07563b54;
  }
  uVar15 = uVar11 + 1;
  pcVar4 = (char *)0x0;
  if (uVar15 == uVar10) goto LAB_07563b54;
  if (uVar10 <= uVar15) goto LAB_07563f24;
  bVar1 = false;
  if (param_1[(int)uVar15] == '+') {
LAB_07563e68:
    uVar15 = uVar11 + 2;
    if (uVar15 == uVar10) goto LAB_07563afc;
    if (uVar10 <= uVar15) {
LAB_07563f24:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558(pcVar4);
    }
  }
  else if (param_1[(int)uVar15] == '-') {
    bVar1 = true;
    goto LAB_07563e68;
  }
  auVar17 = FUN_03eaac5c(&local_70,uVar15,DAT_091b9770);
  if (*(int *)(DAT_0918c978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Buffers_Text_Utf8Parser__TryParseUInt32D
                    (auVar17._0_8_,auVar17._8_8_,(long)&local_78 + 4,&local_78);
  if ((uVar5 & 1) != 0) {
    iVar7 = *param_3;
    if (bVar1) {
      iVar9 = -0x80000000;
      if ((long)((ulong)local_78._4_4_ - 0x80000000) <= (long)iVar7) {
        iVar9 = iVar7 - local_78._4_4_;
      }
    }
    else {
      if ((long)(0x7fffffff - (ulong)local_78._4_4_) < (long)iVar7) goto LAB_07563afc;
      iVar9 = local_78._4_4_ + iVar7;
    }
    pcVar4 = (char *)0x1;
    *param_3 = iVar9;
    uVar6 = (int)local_78 + uVar15;
    goto LAB_07563b54;
  }
LAB_07563afc:
  pcVar4 = (char *)0x0;
  uVar6 = 0;
LAB_07563b54:
  *param_4 = uVar6;
  return pcVar4;
}

