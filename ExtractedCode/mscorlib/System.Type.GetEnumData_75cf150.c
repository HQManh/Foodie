// rea decompile_all
// name: System.Type$$GetEnumData
// address: 0x75cf150
// body: available
// range: 0x75cf150-0x75cf517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cf500 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75cf504 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cf508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cf514 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Type__GetEnumData(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  
  if ((DAT_09521e02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b610);
    FUN_03f5c2a4(&DAT_09185800);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521e02 = 1;
  }
  lVar3 = (**(code **)(*param_1 + 0x708))(param_1,0x38,*(undefined8 *)(*param_1 + 0x710));
  if (lVar3 == 0) {
LAB_075cf508:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar3 + 0x18));
  lVar5 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar3 + 0x18));
  uVar14 = *(uint *)(lVar3 + 0x18);
  if ((int)uVar14 < 1) {
    plVar6 = (long *)FUN_06cf28b0(DAT_0919b610);
    if (plVar4 == (long *)0x0) goto LAB_075cf508;
  }
  else {
    uVar16 = 0;
    lVar18 = 0x20;
    do {
      if (uVar14 <= uVar16) goto LAB_075cf504;
      plVar6 = *(long **)(lVar3 + lVar18);
      if ((plVar6 == (long *)0x0) ||
         (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
         lVar5 == 0)) goto LAB_075cf508;
      if (*(uint *)(lVar5 + 0x18) <= uVar16) goto LAB_075cf504;
      *(undefined8 *)(lVar5 + lVar18) = uVar7;
      thunk_FUN_03f5d7b8(lVar5 + lVar18,uVar7);
      if (*(uint *)(lVar3 + 0x18) <= uVar16) goto LAB_075cf504;
      plVar6 = *(long **)(lVar3 + lVar18);
      if ((plVar6 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340)),
         plVar4 == (long *)0x0)) goto LAB_075cf508;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
      goto LAB_075cf50c;
      if (*(uint *)(plVar4 + 3) <= uVar16) goto LAB_075cf504;
      *(long *)((long)plVar4 + lVar18) = lVar8;
      thunk_FUN_03f5d7b8((long)plVar4 + lVar18,lVar8);
      uVar14 = *(uint *)(lVar3 + 0x18);
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar16 < (int)uVar14);
    plVar6 = (long *)FUN_06cf28b0(DAT_0919b610);
  }
  if (1 < (int)plVar4[3]) {
    uVar11 = plVar4[3] & 0xffffffff;
    uVar17 = 1;
    do {
      if (lVar5 == 0) goto LAB_075cf508;
      if ((*(uint *)(lVar5 + 0x18) <= uVar17) || (uVar11 <= uVar17)) {
LAB_075cf504:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      bVar1 = false;
      uVar7 = *(undefined8 *)(lVar5 + uVar17 * 8 + 0x20);
      lVar3 = plVar4[uVar17 + 4];
      uVar11 = uVar17;
      do {
        uVar15 = uVar11 - 1;
        uVar14 = (uint)uVar15;
        if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_075cf504;
        if (plVar6 == (long *)0x0) goto LAB_075cf508;
        lVar18 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        lVar8 = plVar4[uVar11 + 3];
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185800) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_075cf3b8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185800,0);
LAB_075cf3b8:
        iVar2 = (*(code *)*puVar10)(plVar6,lVar8,lVar3,puVar10[1]);
        if (iVar2 < 1) {
          uVar15 = uVar11;
          if (!bVar1) goto LAB_075cf4b4;
          break;
        }
        if ((*(uint *)(lVar5 + 0x18) <= uVar14) || (*(uint *)(lVar5 + 0x18) <= (uint)uVar11))
        goto LAB_075cf504;
        *(undefined8 *)(lVar5 + 0x20 + uVar11 * 8) = *(undefined8 *)(lVar5 + 0x20 + uVar15 * 8);
        thunk_FUN_03f5d7b8(lVar5 + 0x20 + uVar11 * 8);
        uVar16 = *(uint *)(plVar4 + 3);
        if (uVar16 <= uVar14) goto LAB_075cf504;
        lVar18 = plVar4[uVar11 + 3];
        if (lVar18 != 0) {
          lVar8 = thunk_FUN_03f99350(lVar18,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar8 == 0) goto LAB_075cf50c;
          uVar16 = *(uint *)(plVar4 + 3);
        }
        if (uVar16 <= (uint)uVar11) goto LAB_075cf504;
        plVar4[uVar11 + 4] = lVar18;
        thunk_FUN_03f5d7b8(plVar4 + uVar11 + 4,lVar18);
        bVar1 = true;
        uVar11 = uVar15;
      } while (uVar15 != 0);
      uVar14 = (uint)uVar15;
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_075cf504;
      lVar18 = (long)(int)uVar14;
      *(undefined8 *)(lVar5 + lVar18 * 8 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8(lVar5 + 0x20 + lVar18 * 8);
      if ((lVar3 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
LAB_075cf50c:
        uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,0);
      }
      if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_075cf504;
      plVar4[lVar18 + 4] = lVar3;
      thunk_FUN_03f5d7b8(plVar4 + lVar18 + 4,lVar3);
LAB_075cf4b4:
      uVar11 = (ulong)*(uint *)(plVar4 + 3);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(plVar4 + 3));
  }
  *param_2 = lVar5;
  thunk_FUN_03f5d7b8(param_2,lVar5);
  *param_3 = (long)plVar4;
  thunk_FUN_03f5d7b8(param_3,plVar4);
  return;
}

