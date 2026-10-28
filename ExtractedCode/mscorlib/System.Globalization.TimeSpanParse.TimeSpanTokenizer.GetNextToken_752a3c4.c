// rea decompile_all
// name: System.Globalization.TimeSpanParse.TimeSpanTokenizer$$GetNextToken
// address: 0x752a3c4
// body: available
// range: 0x752a3c4-0x752a573 inclusive
// range: 0x752a578-0x752a63f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752a570 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752a63c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_TimeSpanParse_TimeSpanTokenizer__GetNextToken
               (undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((DAT_09521835 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521835 = 1;
  }
  uVar11 = *(uint *)(param_2 + 2);
  uVar8 = *(uint *)(param_2 + 1);
  uVar4 = uVar8 - uVar11;
  if (uVar4 == 0 || (int)uVar8 < (int)uVar11) {
    uVar3 = 1;
  }
  else {
    if (uVar8 < uVar11 || uVar4 == 0) {
LAB_0752a63c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar10 = (long)(int)uVar11;
    lVar9 = *param_2;
    uVar6 = *(ushort *)(lVar9 + lVar10 * 2) - 0x30;
    if (9 < uVar6) {
      uVar11 = uVar11 + 1;
      uVar6 = uVar11;
      if ((int)uVar11 < (int)uVar8) {
        lVar5 = 1;
        do {
          if (uVar8 <= uVar6) {
            if (uVar8 <= uVar11) {
              uVar8 = uVar11;
            }
            goto LAB_0752a638;
          }
          if (0xfffffff5 < *(ushort *)(lVar9 + lVar10 * 2 + lVar5 * 2) - 0x3a) goto LAB_0752a554;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 1;
        } while (uVar8 != uVar6);
        *(uint *)(param_2 + 2) = uVar8;
        uVar11 = uVar4;
      }
      else {
        lVar5 = 1;
LAB_0752a554:
        uVar11 = (uint)lVar5;
        *(uint *)(param_2 + 2) = uVar6;
        if (uVar4 < uVar11) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 *)param_1 = 3;
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = lVar9 + lVar10 * 2;
      param_1[3] = (ulong)uVar11;
      return;
    }
    if (uVar6 == 0) {
      uVar7 = uVar11 + 1;
      if ((int)uVar7 < (int)uVar8) {
        lVar5 = 1;
        uVar11 = uVar7;
        do {
          if (uVar8 <= uVar11) {
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            goto LAB_0752a638;
          }
          uVar6 = *(ushort *)(lVar9 + lVar10 * 2 + lVar5 * 2) - 0x30;
          if (9 < uVar6) {
            uVar4 = (uint)lVar5;
            uVar8 = uVar11;
            break;
          }
          if (uVar6 != 0) {
            *(uint *)(param_2 + 2) = uVar11;
            goto LAB_0752a43c;
          }
          uVar11 = uVar11 + 1;
          lVar5 = lVar5 + 1;
        } while (uVar8 != uVar11);
      }
      else {
        uVar4 = 1;
        uVar8 = uVar7;
      }
      *(uint *)(param_2 + 2) = uVar8;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 *)param_1 = 2;
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(uint *)(param_1 + 1) = uVar4;
      goto LAB_0752a4a0;
    }
    lVar5 = 0;
LAB_0752a43c:
    uVar4 = uVar11 + 1;
    uVar7 = uVar8;
    if ((int)uVar8 <= (int)uVar4) {
      uVar7 = uVar11 + 1;
    }
    do {
      uVar1 = uVar11 + 1;
      if ((int)uVar8 <= (int)uVar1) {
LAB_0752a5c8:
        *(uint *)(param_2 + 2) = uVar7;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(undefined1 *)param_1 = 2;
        *(uint *)((long)param_1 + 4) = uVar6;
        *(int *)(param_1 + 1) = (int)lVar5;
        goto LAB_0752a4a0;
      }
      if (uVar8 <= uVar1) {
        if (uVar8 <= uVar4) {
          uVar8 = uVar4;
        }
LAB_0752a638:
        *(uint *)(param_2 + 2) = uVar8;
        goto LAB_0752a63c;
      }
      uVar2 = *(ushort *)(lVar9 + (long)(int)uVar1 * 2) - 0x30;
      if (9 < uVar2) {
        uVar7 = uVar11 + 1;
        goto LAB_0752a5c8;
      }
      uVar6 = uVar2 + uVar6 * 10;
      uVar11 = uVar1;
    } while (uVar6 >> 0x1c == 0);
    uVar3 = 4;
    *(uint *)(param_2 + 2) = uVar1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)param_1 = uVar3;
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_0752a4a0:
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

