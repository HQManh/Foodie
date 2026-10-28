// rea decompile_all
// name: Utilities.ObjectScatterGroup$$GetRandomPositions
// address: 0x451711c
// body: available
// range: 0x451711c-0x4517333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451732c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4517330 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectScatterGroup__GetRandomPositions(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  
  if ((DAT_09518570 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518570 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
    lVar6 = FUN_03f5c394(DAT_091807f8,uVar3);
    iVar4 = *(int *)(param_1 + 0x44);
    iVar5 = *(int *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x28);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    if (*(char *)(param_1 + 0x54) == '\0') {
      if (lVar7 == 0) goto LAB_0451732c;
      uVar17 = *(undefined4 *)(param_1 + 0x4c);
      fVar15 = *(float *)(param_1 + 0x50);
      uVar3 = UnityEngine_Transform__get_childCount(lVar7,0);
      lVar7 = Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
                        (uVar17,CONCAT44(iVar5,iVar4),uVar3,0);
    }
    else {
      if (lVar7 == 0) goto LAB_0451732c;
      uVar17 = *(undefined4 *)(param_1 + 0x4c);
      fVar15 = *(float *)(param_1 + 0x50);
      uVar3 = UnityEngine_Transform__get_childCount(lVar7,0);
      lVar7 = Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
                        (uVar17,CONCAT44(iVar5,iVar4),uVar3,iVar4 * 0x59 + iVar5 * 0x61,
                         *(undefined4 *)(param_1 + 0x58),0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x3c);
      iVar4 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
      uVar2 = iVar4 - 1;
      if (-1 < (int)uVar2) {
        iVar4 = iVar4 * 0x61;
        puVar9 = (undefined4 *)(lVar6 + (ulong)uVar2 * 0xc + 0x28);
        uVar8 = (ulong)uVar2;
        do {
          iVar4 = iVar4 + -0x61;
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0451732c;
          iVar5 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0451732c;
          UnityEngine_Transform__GetChild(*(long *)(param_1 + 0x28),uVar8 & 0xffffffff,0);
          if (*(char *)(param_1 + 0x54) == '\0') {
            fVar10 = (float)UnityEngine_Random__get_insideUnitCircle(0);
          }
          else {
            fVar10 = (float)Utilities_RandomUtility__RandomInsideInitCircle
                                      (iVar5 + iVar4,*(undefined4 *)(param_1 + 0x58),0);
          }
          if (lVar7 == 0) goto LAB_0451732c;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_04517330:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar6 == 0) goto LAB_0451732c;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_04517330;
          uVar13 = *(undefined8 *)(lVar7 + 0x20 + uVar8 * 8);
          uVar14 = *(undefined8 *)(param_1 + 0x3c);
          fVar12 = *(float *)(param_1 + 0x38);
          *puVar9 = 0;
          fVar11 = fVar15 * fVar12;
          fVar15 = (float)uVar13 * (float)uVar14 - (float)uVar16 * 0.5;
          *(ulong *)(puVar9 + -2) =
               CONCAT44(((float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar14 >> 0x20) -
                        (float)((ulong)uVar16 >> 0x20) * 0.5) + fVar11,fVar15 + fVar10 * fVar12);
          puVar9 = puVar9 + -3;
          bVar1 = 0 < (long)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
      return lVar6;
    }
  }
LAB_0451732c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

