// rea decompile_all
// name: System.Number$$FormatFixed
// address: 0x75be710
// body: available
// range: 0x75be710-0x75bec4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75be828 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75be9cc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bec48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bec4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatFixed
               (long param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
               long param_6,long param_7,long param_8)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  
  if ((DAT_09521d59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    DAT_09521d59 = 1;
  }
  uVar20 = *(uint *)(param_2 + 4);
  psVar6 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  if ((int)uVar20 < 1) {
    if (DAT_09521150 == '\0') {
      FUN_03f5c2a4(&DAT_091ba998);
      DAT_09521150 = '\x01';
    }
    uVar19 = *(uint *)(param_1 + 0x18);
    if ((int)uVar19 < (int)*(uint *)(param_1 + 0x10)) {
      if (*(uint *)(param_1 + 0x10) <= uVar19) goto LAB_075bec48;
      *(uint *)(param_1 + 0x18) = uVar19 + 1;
      *(undefined2 *)(*(long *)(param_1 + 8) + (long)(int)uVar19 * 2) = 0x30;
    }
    else {
      System_Text_ValueStringBuilder__GrowAndAppend(param_1,0x30,0);
    }
  }
  else if (param_6 == 0) {
    iVar16 = uVar20 + 1;
    cVar10 = DAT_09521150;
    do {
      sVar2 = *psVar6;
      sVar3 = 0x30;
      if (sVar2 != 0) {
        psVar6 = psVar6 + 1;
        sVar3 = sVar2;
      }
      if (cVar10 == '\0') {
        FUN_03f5c2a4(&DAT_091ba998);
        cVar10 = '\x01';
        DAT_09521150 = '\x01';
      }
      uVar20 = *(uint *)(param_1 + 0x18);
      if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
        if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075bec48;
        *(uint *)(param_1 + 0x18) = uVar20 + 1;
        *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = sVar3;
      }
      else {
        System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar3,0);
        cVar10 = DAT_09521150;
      }
      iVar16 = iVar16 + -1;
    } while (1 < iVar16);
    uVar20 = 0;
  }
  else {
    uVar19 = uVar20;
    if (*(long *)(param_6 + 0x18) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)*(long *)(param_6 + 0x18);
      if (uVar11 == 0) goto LAB_075bec48;
      uVar17 = *(uint *)(param_6 + 0x20);
      uVar5 = 0;
      uVar14 = uVar17;
      uVar13 = uVar17;
      while (((int)uVar13 < (int)uVar20 && (uVar14 != 0))) {
        if (param_8 == 0) goto LAB_075bec4c;
        if ((int)uVar5 < (int)(uVar11 - 1)) {
          uVar5 = uVar5 + 1;
        }
        if (uVar11 <= uVar5) goto LAB_075bec48;
        uVar14 = *(uint *)(param_6 + (long)(int)uVar5 * 4 + 0x20);
        uVar19 = *(int *)(param_8 + 0x10) + uVar19;
        uVar13 = uVar14 + uVar13;
        if ((int)(uVar13 | uVar19) < 0) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar7 = thunk_FUN_03f9944c();
          System_ArgumentOutOfRangeException___ctor(uVar7,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091d48d8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
      }
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = uVar17;
      }
    }
    uVar5 = System_String__wcslen(psVar6,0);
    uVar13 = uVar20;
    if ((int)uVar5 <= (int)uVar20) {
      uVar13 = uVar5;
    }
    if (DAT_09521d82 == '\0') {
      FUN_03f5c2a4(&DAT_091ba980);
      FUN_03f5c2a4(&DAT_091ba998);
      DAT_09521d82 = '\x01';
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar17 = *(uint *)(param_1 + 0x18);
    if ((int)(uVar5 - uVar19) < (int)uVar17) {
      System_Text_ValueStringBuilder__Grow(param_1,uVar19,0);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x18) = uVar17 + uVar19;
    if ((uVar5 < uVar17) || (uVar5 - uVar17 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar18 = *(long *)(param_1 + 8);
    if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lVar9 = FUN_04c072b8(lVar18 + (long)(int)uVar17 * 2,uVar19,DAT_091d3038);
    lVar18 = 0;
    uVar5 = 0;
    puVar12 = (undefined2 *)(lVar9 + (ulong)uVar19 * 2 + -2);
    uVar19 = uVar20;
    do {
      uVar17 = uVar19 - 1;
      if ((int)uVar13 < (int)uVar19) {
        uVar4 = 0x30;
      }
      else {
        uVar4 = *(undefined2 *)((long)psVar6 + (ulong)(uVar17 * 2));
      }
      puVar15 = puVar12 + -1;
      *puVar12 = uVar4;
      puVar12 = puVar15;
      if (((0 < (int)uVar11) && (uVar5 = uVar5 + 1, uVar17 != 0)) && (uVar5 == uVar11)) {
        if (param_8 == 0) goto LAB_075bec4c;
        iVar16 = *(int *)(param_8 + 0x10) + -1;
        if (-1 < iVar16) {
          do {
            uVar4 = System_String__get_Chars(param_8,iVar16,0);
            iVar16 = iVar16 + -1;
            puVar15 = puVar12 + -1;
            *puVar12 = uVar4;
            puVar12 = puVar15;
          } while (iVar16 != -1);
        }
        if ((int)lVar18 < (int)(*(uint *)(param_6 + 0x18) - 1)) {
          lVar18 = (long)(int)lVar18 + 1;
          if (*(uint *)(param_6 + 0x18) <= (uint)lVar18) goto LAB_075bec48;
          uVar11 = *(uint *)(param_6 + lVar18 * 4 + 0x20);
        }
        uVar5 = 0;
        puVar12 = puVar15;
      }
      bVar1 = 1 < (int)uVar19;
      uVar19 = uVar17;
    } while (bVar1);
    psVar6 = psVar6 + (int)uVar13;
  }
  if (param_4 < 1) {
    return;
  }
  if (DAT_09521d81 == '\0') {
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d81 = '\x01';
  }
  if (param_7 == 0) {
LAB_075bec4c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_7 + 0x10) == 1) {
    uVar19 = *(uint *)(param_1 + 0x18);
    if ((int)uVar19 < (int)*(uint *)(param_1 + 0x10)) {
      if (*(uint *)(param_1 + 0x10) <= uVar19) {
LAB_075bec48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar18 = *(long *)(param_1 + 8);
      uVar4 = System_String__get_Chars(param_7,0,0);
      *(undefined2 *)(lVar18 + (long)(int)uVar19 * 2) = uVar4;
      *(uint *)(param_1 + 0x18) = uVar19 + 1;
      goto joined_r0x075beb54;
    }
  }
  System_Text_ValueStringBuilder__AppendSlow(param_1,param_7,0);
joined_r0x075beb54:
  if ((int)uVar20 < 0) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar16 = param_4;
    if ((int)-uVar20 < param_4) {
      iVar16 = -uVar20;
    }
    System_Text_ValueStringBuilder__Append(param_1,0x30,iVar16,0);
    param_4 = param_4 - iVar16;
    if (param_4 < 1) {
      return;
    }
  }
  param_4 = param_4 + 1;
  cVar10 = DAT_09521150;
  do {
    sVar2 = *psVar6;
    sVar3 = 0x30;
    if (sVar2 != 0) {
      psVar6 = psVar6 + 1;
      sVar3 = sVar2;
    }
    if (cVar10 == '\0') {
      FUN_03f5c2a4(&DAT_091ba998);
      cVar10 = '\x01';
      DAT_09521150 = '\x01';
    }
    uVar20 = *(uint *)(param_1 + 0x18);
    if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
      if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075bec48;
      *(uint *)(param_1 + 0x18) = uVar20 + 1;
      *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = sVar3;
    }
    else {
      System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar3,0);
      cVar10 = DAT_09521150;
    }
    param_4 = param_4 + -1;
    if (param_4 < 2) {
      return;
    }
  } while( true );
}

