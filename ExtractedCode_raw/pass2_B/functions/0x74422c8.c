// rea decompile_all
// name: System.Text.UTF32Encoding$$GetChars
// address: 0x74422c8
// body: available
// range: 0x74422c8-0x74426cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74426bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74426c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74426c8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_UTF32Encoding__GetChars
                (long param_1,byte *param_2,int param_3,short *param_4,int param_5,long *param_6)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  short *local_68;
  undefined1 uVar5;
  
  if ((DAT_09521083 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09195870);
    DAT_09521083 = 1;
  }
  local_68 = (short *)0x0;
  if (param_6 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_074426c0;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    uVar14 = 0;
    uVar11 = 0;
  }
  else {
    if (*param_6 != DAT_09195870) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_6);
    }
    uVar14 = *(uint *)(param_6 + 6);
    uVar11 = *(uint *)((long)param_6 + 0x34);
    plVar6 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
  }
  if (plVar6 == (long *)0x0) {
LAB_074426c0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  psVar12 = param_4 + param_5;
  System_Text_DecoderFallbackBuffer__InternalInitialize(plVar6,param_2,psVar12,0);
  pbVar1 = param_2;
  psVar13 = param_4;
  do {
    while( true ) {
      do {
        pbVar10 = pbVar1;
        if (param_2 + param_3 <= pbVar10) {
          if ((int)uVar11 < 1) goto joined_r0x07442654;
          if ((param_6 != (long *)0x0) && ((char)param_6[5] == '\0')) goto LAB_07442658;
          iVar9 = uVar11 + 1;
          lVar7 = FUN_03f5c394(DAT_0917fc88,uVar11);
          if (*(char *)(param_1 + 0x3a) == '\0') {
            if (lVar7 == 0) goto LAB_074426c0;
            uVar2 = *(uint *)(lVar7 + 0x18);
            uVar8 = (ulong)uVar11;
            uVar15 = uVar14;
            goto LAB_074425d0;
          }
          if (lVar7 == 0) goto LAB_074426c0;
          uVar2 = *(uint *)(lVar7 + 0x18);
          uVar8 = (ulong)uVar11;
          goto LAB_07442594;
        }
        cVar3 = *(char *)(param_1 + 0x3a);
        if (cVar3 == '\0') {
          uVar14 = (uint)(CONCAT14(*pbVar10,uVar14) >> 8);
        }
        else {
          uVar14 = (uint)*pbVar10 | uVar14 << 8;
        }
        uVar11 = uVar11 + 1;
        pbVar1 = pbVar10 + 1;
      } while ((int)uVar11 < 4);
      if ((0x10 < uVar14 >> 0x10) || ((uVar14 & 0x1ff800) == 0xd800)) break;
      if (uVar14 < 0x10000) {
        if (psVar12 <= psVar13) goto LAB_0744269c;
      }
      else {
        if (psVar12 + -1 <= psVar13) goto LAB_0744269c;
        uVar11 = uVar14 + 0x3ff0000;
        uVar14 = uVar14 & 0x3ff | 0xdc00;
        *psVar13 = (short)(uVar11 >> 10) + -0x2800;
        psVar13 = psVar13 + 1;
      }
      uVar11 = 0;
      *psVar13 = (short)uVar14;
      uVar14 = 0;
      psVar13 = psVar13 + 1;
    }
    lVar7 = FUN_03f5c394(DAT_0917fc88,4);
    uVar4 = (undefined1)(uVar14 >> 0x10);
    uVar5 = (undefined1)(uVar14 >> 8);
    if (cVar3 == '\0') {
      if (lVar7 == 0) goto LAB_074426c0;
      uVar11 = *(uint *)(lVar7 + 0x18);
      if ((((uVar11 == 0) || (*(char *)(lVar7 + 0x20) = (char)uVar14, uVar11 == 1)) ||
          (*(undefined1 *)(lVar7 + 0x21) = uVar5, uVar11 < 3)) ||
         (*(undefined1 *)(lVar7 + 0x22) = uVar4, uVar11 == 3)) goto LAB_074426bc;
      uVar14 = uVar14 >> 0x18;
    }
    else {
      if (lVar7 == 0) goto LAB_074426c0;
      uVar11 = *(uint *)(lVar7 + 0x18);
      if (((uVar11 == 0) || (*(char *)(lVar7 + 0x20) = (char)(uVar14 >> 0x18), uVar11 == 1)) ||
         ((*(undefined1 *)(lVar7 + 0x21) = uVar4, uVar11 < 3 ||
          (*(undefined1 *)(lVar7 + 0x22) = uVar5, uVar11 == 3)))) goto LAB_074426bc;
    }
    *(char *)(lVar7 + 0x23) = (char)uVar14;
    local_68 = psVar13;
    uVar8 = (**(code **)(*plVar6 + 0x1b8))
                      (plVar6,lVar7,pbVar1,&local_68,*(undefined8 *)(*plVar6 + 0x1c0));
    psVar13 = local_68;
    uVar14 = 0;
    uVar11 = 0;
  } while ((uVar8 & 1) != 0);
  System_Text_DecoderFallbackBuffer__InternalReset(plVar6,0);
LAB_0744269c:
  pbVar10 = pbVar10 + -3;
  System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,psVar13 == param_4,0);
  local_68 = psVar13;
  goto LAB_07442620;
  while( true ) {
    iVar9 = iVar9 + -1;
    *(char *)(lVar7 + (uVar8 & 0xffffffff) + 0x20) = (char)uVar14;
    uVar14 = uVar14 >> 8;
    if (iVar9 < 2) break;
LAB_07442594:
    uVar8 = uVar8 - 1;
    if (uVar2 <= iVar9 - 2U) goto LAB_074426bc;
  }
  goto LAB_074425fc;
  while( true ) {
    iVar9 = iVar9 + -1;
    uVar14 = uVar15 << 8;
    *(char *)(lVar7 + (uVar8 & 0xffffffff) + 0x20) = (char)(uVar15 >> 0x18);
    uVar15 = uVar14;
    if (iVar9 < 2) break;
LAB_074425d0:
    uVar8 = uVar8 - 1;
    if (uVar2 <= iVar9 - 2U) {
LAB_074426bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_074425fc:
  local_68 = psVar13;
  uVar8 = (**(code **)(*plVar6 + 0x1b8))
                    (plVar6,lVar7,pbVar10,&local_68,*(undefined8 *)(*plVar6 + 0x1c0));
  psVar13 = local_68;
  if ((uVar8 & 1) == 0) {
    System_Text_DecoderFallbackBuffer__InternalReset(plVar6,0);
    System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,psVar13 == param_4,0);
  }
  else {
LAB_07442620:
    uVar14 = 0;
    uVar11 = 0;
    psVar13 = local_68;
  }
joined_r0x07442654:
  if (param_6 != (long *)0x0) {
LAB_07442658:
    *(uint *)(param_6 + 6) = uVar14;
    *(uint *)((long)param_6 + 0x34) = uVar11;
    *(int *)((long)param_6 + 0x2c) = (int)pbVar10 - (int)param_2;
  }
  uVar8 = (long)psVar13 - (long)param_4;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  return uVar8 >> 1;
}

