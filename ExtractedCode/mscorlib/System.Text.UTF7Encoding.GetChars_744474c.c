// rea decompile_all
// name: System.Text.UTF7Encoding$$GetChars
// address: 0x744474c
// body: available
// range: 0x744474c-0x74449fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74449ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74449f4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74449f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_Text_UTF7Encoding__GetChars
          (long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined4 param_5,
          long *param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((DAT_09521091 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195878);
    FUN_03f5c2a4(&DAT_09190508);
    DAT_09521091 = 1;
  }
  if ((param_6 != (long *)0x0) && (*param_6 != DAT_09195878)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_6);
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09190508);
  System_Text_Encoding_EncodingCharBuffer___ctor
            (lVar7,param_1,param_6,param_4,param_5,param_2,param_3,0);
  if (param_6 == (long *)0x0) {
    uVar10 = 0;
    bVar3 = false;
    uVar11 = 0xffffffff;
  }
  else {
    uVar10 = *(uint *)(param_6 + 6);
    uVar11 = *(uint *)((long)param_6 + 0x34);
    bVar3 = (char)param_6[7] != '\0';
    uVar1 = uVar11 - 0x10;
    if (0xf < (int)uVar11) {
      if (lVar7 != 0) {
        uVar8 = System_Text_Encoding_EncodingCharBuffer__AddChar
                          (lVar7,(int)uVar10 >> (uVar1 & 0x1f),0);
        if ((uVar8 & 1) == 0) {
          System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,1,0);
        }
        goto LAB_07444860;
      }
      goto LAB_074449ec;
    }
  }
  uVar1 = uVar11;
  if (lVar7 != 0) {
LAB_07444860:
    do {
      uVar11 = uVar1;
      uVar8 = System_Text_Encoding_EncodingCharBuffer__get_MoreData(lVar7,0);
      if ((uVar8 & 1) == 0) goto joined_r0x0744498c;
      bVar5 = System_Text_Encoding_EncodingCharBuffer__GetNextByte(lVar7,0);
      iVar2 = (int)(char)bVar5;
      if ((int)uVar11 < 0) {
        if (iVar2 == 0x2b) {
          uVar1 = 0;
          bVar3 = true;
          goto LAB_07444860;
        }
        if (-1 < iVar2) {
          uVar1 = (uint)bVar5;
          goto LAB_07444928;
        }
        uVar8 = System_Text_Encoding_EncodingCharBuffer__Fallback(lVar7,iVar2,0);
      }
      else {
        if (-1 < iVar2) {
          lVar9 = *(long *)(param_1 + 0x40);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= (uint)bVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          bVar5 = *(byte *)(lVar9 + (ulong)bVar5 + 0x20);
          if (-1 < (char)bVar5) {
            bVar3 = false;
            uVar10 = (uint)bVar5 | uVar10 << 6;
            uVar1 = uVar11 + 6;
            if (0xf < (int)(uVar11 + 6)) {
              uVar11 = uVar11 - 10;
              bVar3 = false;
              uVar1 = (int)uVar10 >> (uVar11 & 0x1f) & 0xffff;
LAB_07444928:
              uVar8 = System_Text_Encoding_EncodingCharBuffer__AddChar(lVar7,uVar1,0);
              uVar1 = uVar11;
              if ((uVar8 & 1) == 0) {
                if (-1 < (int)uVar11) {
                  System_Text_Encoding_EncodingCharBuffer__AdjustBytes(lVar7,1,0);
                  uVar11 = uVar11 + 0x10;
                }
                goto joined_r0x0744498c;
              }
            }
            goto LAB_07444860;
          }
          if (iVar2 == 0x2d) {
            bVar4 = bVar3 != false;
            uVar1 = 0xffffffff;
            bVar3 = false;
            if (bVar4) {
              uVar8 = System_Text_Encoding_EncodingCharBuffer__AddChar(lVar7,0x2b,0);
              bVar3 = true;
              uVar11 = 0xffffffff;
              uVar1 = 0xffffffff;
              if ((uVar8 & 1) == 0) {
                bVar3 = true;
                goto joined_r0x0744498c;
              }
            }
            goto LAB_07444860;
          }
        }
        uVar8 = System_Text_Encoding_EncodingCharBuffer__Fallback(lVar7,iVar2,0);
        uVar11 = 0xffffffff;
      }
      uVar1 = uVar11;
      if ((uVar8 & 1) == 0) {
joined_r0x0744498c:
        if ((param_4 != 0) && (param_6 != (long *)0x0)) {
          bVar4 = (char)param_6[5] == '\0';
          if (!bVar4) {
            uVar10 = 0;
            uVar11 = 0xffffffff;
          }
          *(uint *)(param_6 + 6) = uVar10;
          *(uint *)((long)param_6 + 0x34) = uVar11;
          *(char *)(param_6 + 7) = bVar4 & bVar3;
          uVar6 = System_Text_Encoding_EncodingCharBuffer__get_BytesUsed(lVar7,0);
          *(undefined4 *)((long)param_6 + 0x2c) = uVar6;
        }
        return *(undefined4 *)(lVar7 + 0x28);
      }
    } while( true );
  }
LAB_074449ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

