// rea decompile_all
// name: System.String$$MakeSeparatorList
// address: 0x7433f2c
// body: available
// range: 0x7433f2c-0x743420f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7434208 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743420c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__MakeSeparatorList(long param_1,long param_2,long *param_3,long *param_4)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  if ((DAT_0952102c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091beb18);
    DAT_0952102c = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = 0;
    do {
      if (0 < (int)*(ulong *)(param_2 + 0x18)) {
        uVar9 = 0;
        uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
        psVar1 = (short *)(param_1 + 0x14 + (long)(int)uVar10 * 2);
        do {
          if (uVar6 <= uVar9) goto LAB_07434208;
          lVar8 = *(long *)(param_2 + 0x20 + uVar9 * 8);
          if ((lVar8 != 0) && (uVar2 = *(uint *)(lVar8 + 0x10), uVar2 != 0)) {
            uVar7 = uVar2;
            if ((long)*(int *)(param_1 + 0x10) <= (long)(ulong)uVar10) {
              System_ThrowHelper__ThrowIndexOutOfRangeException(0);
              uVar7 = *(uint *)(lVar8 + 0x10);
            }
            sVar3 = *psVar1;
            if ((int)uVar7 < 1) {
              System_ThrowHelper__ThrowIndexOutOfRangeException(0);
            }
            if (sVar3 == *(short *)(lVar8 + 0x14)) {
              uVar7 = *(uint *)(param_1 + 0x10);
              uVar5 = uVar7 - uVar10;
              if ((int)uVar2 <= (int)uVar5) {
                if (uVar2 != 1) {
                  if (DAT_09520e02 == '\0') {
                    FUN_03f5c2a4(&DAT_091b97b8);
                    uVar7 = *(uint *)(param_1 + 0x10);
                    DAT_09520e02 = '\x01';
                    uVar5 = uVar7 - uVar10;
                  }
                  if ((uVar7 < uVar10) || (uVar5 < uVar2)) {
                    System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
                  }
                  if (DAT_09519f66 == '\0') {
                    FUN_03f5c2a4(&DAT_091b97b8);
                    DAT_09519f66 = '\x01';
                  }
                  uVar6 = FUN_074367c0(psVar1,uVar2,(short *)(lVar8 + 0x14),
                                       *(undefined4 *)(lVar8 + 0x10),DAT_091d2f78);
                  if ((uVar6 & 1) == 0) goto LAB_074340bc;
                }
                lVar8 = DAT_091beb18;
                uVar7 = *(uint *)(param_3 + 3);
                if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
                  FUN_03f95a6c();
                }
                uVar5 = *(uint *)(param_3 + 1);
                if ((int)uVar5 <= (int)uVar7) {
                  lVar8 = *(long *)(lVar8 + 0x20);
                  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    lVar8 = FUN_03f95a6c();
                  }
                  FUN_0655f384(param_3,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
                  uVar5 = *(uint *)(param_3 + 1);
                }
                lVar8 = DAT_091beb18;
                if (uVar7 < uVar5) {
                  lVar4 = *(long *)(DAT_091beb18 + 0x20);
                  *(uint *)(*param_3 + (long)(int)uVar7 * 4) = uVar10;
                  *(uint *)(param_3 + 3) = uVar7 + 1;
                  uVar7 = *(uint *)(param_4 + 3);
                  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    FUN_03f95a6c();
                  }
                  uVar5 = *(uint *)(param_4 + 1);
                  if ((int)uVar5 <= (int)uVar7) {
                    lVar8 = *(long *)(lVar8 + 0x20);
                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                      lVar8 = FUN_03f95a6c();
                    }
                    FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
                    uVar5 = *(uint *)(param_4 + 1);
                  }
                  if (uVar7 < uVar5) {
                    uVar10 = (uVar10 + uVar2) - 1;
                    *(uint *)(*param_4 + (long)(int)uVar7 * 4) = uVar2;
                    *(uint *)(param_4 + 3) = uVar7 + 1;
                    break;
                  }
                }
LAB_07434208:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
LAB_074340bc:
          uVar6 = (ulong)*(uint *)(param_2 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18));
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(param_1 + 0x10));
  }
  return;
}

