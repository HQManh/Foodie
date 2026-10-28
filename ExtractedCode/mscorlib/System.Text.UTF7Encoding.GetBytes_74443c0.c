// rea decompile_all
// name: System.Text.UTF7Encoding$$GetBytes
// address: 0x74443c0
// body: available
// range: 0x74443c0-0x744472f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7444720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7444724 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744472c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_Text_UTF7Encoding__GetBytes
          (long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined4 param_5,
          long *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  if ((DAT_09521090 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195890);
    FUN_03f5c2a4(&DAT_09190500);
    DAT_09521090 = 1;
  }
  if ((param_6 != (long *)0x0) && (*param_6 != DAT_09195890)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_6);
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09190500);
  System_Text_Encoding_EncodingByteBuffer___ctor
            (lVar5,param_1,param_6,param_4,param_5,param_2,param_3,0);
  if (param_6 == (long *)0x0) {
    uVar9 = 0;
    uVar10 = 0xffffffff;
  }
  else {
    uVar9 = *(uint *)(param_6 + 7);
    uVar10 = *(uint *)((long)param_6 + 0x3c);
    uVar3 = uVar10;
    if (5 < (int)uVar10) {
      do {
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) goto LAB_07444720;
        uVar10 = uVar3 - 6;
        uVar2 = (int)uVar9 >> (uVar10 & 0x1f) & 0x3f;
        if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_07444724;
        if (lVar5 == 0) goto LAB_07444720;
        uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte
                          (lVar5,*(undefined1 *)(lVar8 + (ulong)uVar2 + 0x20),0);
        if ((uVar6 & 1) == 0) {
          System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,*(int *)(lVar5 + 0x40) == 0,0);
        }
        bVar1 = 0xb < uVar3;
        uVar3 = uVar10;
      } while (bVar1);
      goto LAB_074444f0;
    }
  }
  if (lVar5 == 0) {
LAB_07444720:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_074444f0:
  do {
    uVar6 = System_Text_Encoding_EncodingByteBuffer__get_MoreData(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (-1 < (int)uVar10) {
joined_r0x07444718:
        if ((param_6 == (long *)0x0) || ((char)param_6[6] != '\0')) {
          uVar3 = uVar10;
          if (uVar10 != 0) {
            lVar8 = *(long *)(param_1 + 0x38);
            if (lVar8 == 0) goto LAB_07444720;
            uVar3 = uVar9 << (ulong)(6 - uVar10 & 0x1f) & 0x3f;
            if (*(uint *)(lVar8 + 0x18) <= uVar3) {
LAB_07444724:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte
                              (lVar5,*(undefined1 *)(lVar8 + (ulong)uVar3 + 0x20),0);
            uVar3 = 0;
            if ((uVar6 & 1) == 0) {
              uVar3 = uVar10;
            }
          }
          uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte(lVar5,0x2d,0);
          if ((uVar6 & 1) == 0) {
            System_Text_Encoding_EncodingByteBuffer__GetNextChar(lVar5,0);
            uVar10 = uVar3;
          }
          else {
            uVar9 = 0;
            uVar10 = 0xffffffff;
          }
        }
      }
      goto joined_r0x0744470c;
    }
    uVar6 = System_Text_Encoding_EncodingByteBuffer__GetNextChar(lVar5,0);
    uVar3 = (uint)uVar6;
    if ((uVar3 & 0xffff) < 0x80) break;
LAB_0744456c:
    if ((int)uVar10 < 0) {
      uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte(lVar5,0x2b,0);
      if ((uVar6 & 1) == 0) goto joined_r0x0744470c;
      uVar10 = 0;
    }
    uVar9 = uVar3 & 0xffff | uVar9 << 0x10;
    uVar3 = uVar10 + 0x10;
    while (uVar10 = uVar3, 5 < (int)uVar10) {
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 == 0) goto LAB_07444720;
      uVar3 = (int)uVar9 >> (uVar10 - 6 & 0x1f) & 0x3f;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_07444724;
      uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte
                        (lVar5,*(undefined1 *)(lVar8 + (ulong)uVar3 + 0x20),0);
      uVar3 = uVar10 - 6;
      if ((uVar6 & 1) == 0) {
        System_Text_Encoding_EncodingByteBuffer__GetNextChar(lVar5,0);
        goto joined_r0x07444718;
      }
    }
  } while( true );
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 == 0) goto LAB_07444720;
  if (*(uint *)(lVar8 + 0x18) <= (uVar3 & 0xffff)) goto LAB_07444724;
  if (*(char *)(lVar8 + (uVar6 & 0xffff) + 0x20) == '\0') {
    if ((-1 < (int)uVar10) || ((uVar3 & 0xffff) != 0x2b)) goto LAB_0744456c;
    uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte(lVar5,0x2b,0x2d,0);
  }
  else {
    if (-1 < (int)uVar10) {
      if (uVar10 != 0) {
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) goto LAB_07444720;
        uVar3 = uVar9 << (ulong)(6 - uVar10 & 0x1f) & 0x3f;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_07444724;
        uVar7 = System_Text_Encoding_EncodingByteBuffer__AddByte
                          (lVar5,*(undefined1 *)(lVar8 + (ulong)uVar3 + 0x20),0);
        if ((uVar7 & 1) == 0) goto joined_r0x07444718;
      }
      uVar7 = System_Text_Encoding_EncodingByteBuffer__AddByte(lVar5,0x2d,0);
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
        goto joined_r0x07444718;
      }
      uVar10 = 0xffffffff;
    }
    uVar6 = System_Text_Encoding_EncodingByteBuffer__AddByte(lVar5,uVar6 & 0xffffffff,0);
  }
  if ((uVar6 & 1) == 0) {
joined_r0x0744470c:
    if ((param_4 != 0) && (param_6 != (long *)0x0)) {
      *(uint *)(param_6 + 7) = uVar9;
      *(uint *)((long)param_6 + 0x3c) = uVar10;
      uVar4 = System_Text_Encoding_EncodingByteBuffer__get_CharsUsed(lVar5,0);
      *(undefined4 *)((long)param_6 + 0x34) = uVar4;
    }
    return *(undefined4 *)(lVar5 + 0x40);
  }
  goto LAB_074444f0;
}

