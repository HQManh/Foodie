// rea decompile_all
// name: System.String$$CompareOrdinalHelper
// address: 0x742cdc8
// body: available
// range: 0x742cdc8-0x742cf77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742cf74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_String__CompareOrdinalHelper(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint *puVar6;
  uint uVar7;
  ushort *puVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_09520ff8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520ff8 = 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = System_Math__Min(uVar1,uVar2,0);
  puVar5 = (ushort *)(param_1 + 0x16);
  puVar8 = (ushort *)(param_2 + 0x16);
  if (*puVar5 == *puVar8) {
    iVar10 = iVar3 + -2;
    puVar6 = (uint *)(param_1 + 0x18);
    puVar9 = (uint *)(param_2 + 0x18);
    if (0xb < iVar10) {
      lVar11 = 0;
      iVar3 = iVar3 + 10;
      do {
        iVar10 = iVar3;
        lVar12 = *(long *)puVar6;
        lVar13 = *(long *)puVar9;
        if (lVar12 != lVar13) {
LAB_0742cf2c:
          if ((uint)lVar12 == (uint)lVar13) {
            puVar6 = puVar6 + 1;
            uVar7 = (uint)(ushort)*puVar6;
            puVar9 = puVar9 + 1;
            uVar4 = (uint)(ushort)*puVar9;
          }
          else {
            uVar7 = (uint)lVar12 & 0xffff;
            uVar4 = (uint)lVar13 & 0xffff;
          }
          goto LAB_0742cf48;
        }
        puVar6 = (uint *)(param_1 + lVar11 + 0x20);
        lVar12 = *(long *)puVar6;
        puVar9 = (uint *)(param_2 + lVar11 + 0x20);
        lVar13 = *(long *)puVar9;
        if (lVar12 != lVar13) goto LAB_0742cf2c;
        lVar12 = *(long *)(param_1 + lVar11 + 0x28);
        lVar13 = *(long *)(param_2 + lVar11 + 0x28);
        if (lVar12 != lVar13) {
          puVar6 = (uint *)(param_1 + lVar11 + 0x28);
          puVar9 = (uint *)(param_2 + lVar11 + 0x28);
          goto LAB_0742cf2c;
        }
        iVar3 = iVar10 + -0xc;
        puVar6 = (uint *)(param_1 + lVar11 + 0x30);
        puVar9 = (uint *)(param_2 + lVar11 + 0x30);
        lVar11 = lVar11 + 0x18;
      } while (0x17 < iVar3);
      iVar10 = iVar10 + -0x18;
    }
    if (0 < iVar10) {
      iVar10 = iVar10 + 2;
      do {
        if (*puVar6 != *puVar9) {
          uVar4 = *puVar9 & 0xffff;
          uVar7 = *puVar6 & 0xffff;
LAB_0742cf48:
          if (uVar7 - uVar4 != 0) {
            return uVar7 - uVar4;
          }
          puVar5 = (ushort *)((long)puVar6 + 2);
          puVar8 = (ushort *)((long)puVar9 + 2);
          goto LAB_0742cf58;
        }
        iVar10 = iVar10 + -2;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (2 < iVar10);
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  else {
LAB_0742cf58:
    uVar4 = (uint)*puVar5;
    uVar7 = (uint)*puVar8;
  }
  return uVar4 - uVar7;
}

