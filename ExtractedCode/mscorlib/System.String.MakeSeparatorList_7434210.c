// rea decompile_all
// name: System.String$$MakeSeparatorList
// address: 0x7434210
// body: available
// range: 0x7434210-0x743440b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7434404 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7434408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__MakeSeparatorList(long param_1,long param_2,long *param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((DAT_0952102b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091beb18);
    DAT_0952102b = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    uVar9 = 0;
    uVar3 = *(uint *)(param_2 + 0x10);
    do {
      if ((long)iVar2 <= (long)(ulong)uVar9) {
        System_ThrowHelper__ThrowIndexOutOfRangeException(0);
      }
      psVar1 = (short *)(param_1 + 0x14 + (long)(int)uVar9 * 2);
      sVar4 = *psVar1;
      if (*(int *)(param_2 + 0x10) < 1) {
        System_ThrowHelper__ThrowIndexOutOfRangeException(0);
      }
      if (sVar4 == *(short *)(param_2 + 0x14)) {
        uVar8 = *(uint *)(param_1 + 0x10);
        uVar7 = uVar8 - uVar9;
        if ((int)uVar3 <= (int)uVar7) {
          if (uVar3 != 1) {
            if (DAT_09520e02 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              uVar8 = *(uint *)(param_1 + 0x10);
              DAT_09520e02 = '\x01';
              uVar7 = uVar8 - uVar9;
            }
            if ((uVar8 < uVar9) || (uVar7 < uVar3)) {
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
            }
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
            }
            uVar5 = FUN_074367c0(psVar1,uVar3,param_2 + 0x14,*(undefined4 *)(param_2 + 0x10),
                                 DAT_091d2f78);
            if ((uVar5 & 1) == 0) goto LAB_074343d8;
          }
          lVar6 = DAT_091beb18;
          uVar8 = *(uint *)(param_3 + 3);
          if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar7 = *(uint *)(param_3 + 1);
          if ((int)uVar7 <= (int)uVar8) {
            lVar6 = *(long *)(lVar6 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03f95a6c();
            }
            FUN_0655f384(param_3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
            uVar7 = *(uint *)(param_3 + 1);
          }
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(uint *)(*param_3 + (long)(int)uVar8 * 4) = uVar9;
          uVar9 = (uVar3 - 1) + uVar9;
          *(uint *)(param_3 + 3) = uVar8 + 1;
        }
      }
LAB_074343d8:
      iVar2 = *(int *)(param_1 + 0x10);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar2);
  }
  return;
}

