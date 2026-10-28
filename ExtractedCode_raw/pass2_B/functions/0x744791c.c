// rea decompile_all
// name: System.Text.UTF8Encoding$$GetBytesUnknown
// address: 0x744791c
// body: available
// range: 0x744791c-0x7447b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7447b08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7447b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_UTF8Encoding__GetBytesUnknown(undefined8 param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  
  if ((DAT_0952109f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_0952109f = 1;
  }
  uVar2 = DAT_0917fc88;
  bVar4 = (byte)param_3;
  if (param_3 < 0x100) {
    *param_2 = *param_2 + -1;
    lVar3 = FUN_03f5c394(uVar2,1);
    if (lVar3 == 0) goto LAB_07447b0c;
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(byte *)(lVar3 + 0x20) = bVar4;
      return;
    }
  }
  else if ((param_3 & 0x18000000) == 0) {
    *param_2 = *param_2 + -1;
    lVar3 = FUN_03f5c394(uVar2,1);
    if (lVar3 == 0) goto LAB_07447b0c;
    if (*(int *)(lVar3 + 0x18) != 0) {
      bVar4 = bVar4 & 0x1f | 0xc0;
LAB_074479f4:
      *(byte *)(lVar3 + 0x20) = bVar4;
      return;
    }
  }
  else {
    if ((param_3 >> 0x1c & 1) == 0) {
      if ((param_3 >> 0x17 & 1) == 0) {
        *param_2 = *param_2 + -1;
        lVar3 = FUN_03f5c394(uVar2,1);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            bVar4 = bVar4 & 0xf | 0xe0;
            goto LAB_074479f4;
          }
          goto LAB_07447b08;
        }
LAB_07447b0c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *param_2 = *param_2 + -2;
      lVar3 = FUN_03f5c394(uVar2,2);
      if (lVar3 == 0) goto LAB_07447b0c;
      iVar5 = *(int *)(lVar3 + 0x18);
      if (iVar5 == 0) goto LAB_07447b08;
      bVar6 = (byte)(param_3 >> 6) & 0xf | 0xe0;
    }
    else {
      if ((param_3 >> 0x17 & 1) != 0) {
        *param_2 = *param_2 + -3;
        lVar3 = FUN_03f5c394(uVar2,3);
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (((uVar1 != 0) &&
              (*(byte *)(lVar3 + 0x20) = (byte)(param_3 >> 0xc) & 7 | 0xf0, uVar1 != 1)) &&
             (*(byte *)(lVar3 + 0x21) = (byte)(param_3 >> 6) & 0x3f | 0x80, 2 < uVar1)) {
            *(byte *)(lVar3 + 0x22) = bVar4 & 0x3f | 0x80;
            return;
          }
          goto LAB_07447b08;
        }
        goto LAB_07447b0c;
      }
      if ((param_3 >> 0x11 & 1) == 0) {
        *param_2 = *param_2 + -1;
        lVar3 = FUN_03f5c394(uVar2,1);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            bVar4 = bVar4 & 7 | 0xf0;
            goto LAB_074479f4;
          }
          goto LAB_07447b08;
        }
        goto LAB_07447b0c;
      }
      *param_2 = *param_2 + -2;
      lVar3 = FUN_03f5c394(uVar2,2);
      if (lVar3 == 0) goto LAB_07447b0c;
      iVar5 = *(int *)(lVar3 + 0x18);
      if (iVar5 == 0) goto LAB_07447b08;
      bVar6 = (byte)(param_3 >> 6) & 7 | 0xf0;
    }
    *(byte *)(lVar3 + 0x20) = bVar6;
    if (iVar5 != 1) {
      *(byte *)(lVar3 + 0x21) = bVar4 & 0x3f | 0x80;
      return;
    }
  }
LAB_07447b08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

