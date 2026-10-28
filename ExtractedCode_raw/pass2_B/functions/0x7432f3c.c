// rea decompile_all
// name: System.String$$MakeSeparatorList
// address: 0x7432f3c
// body: available
// range: 0x7432f3c-0x74333e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74333dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74333e0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__MakeSeparatorList(long param_1,short *param_2,undefined8 param_3,long *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint local_90 [10];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((DAT_0952102a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091beb18);
    DAT_0952102a = 1;
  }
  iVar12 = (int)param_3;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  if (iVar12 < 2) {
    if (iVar12 == 0) {
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar13 = 0;
        do {
          uVar6 = *(undefined2 *)(param_1 + 0x14 + lVar13 * 2);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_Char__IsWhiteSpace(uVar6,0);
          lVar9 = DAT_091beb18;
          if ((uVar10 & 1) != 0) {
            uVar7 = *(uint *)(param_4 + 3);
            if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            uVar11 = *(uint *)(param_4 + 1);
            if ((int)uVar11 <= (int)uVar7) {
              lVar9 = *(long *)(lVar9 + 0x20);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
              uVar11 = *(uint *)(param_4 + 1);
            }
            if (uVar11 <= uVar7) goto LAB_074333cc;
            *(int *)(*param_4 + (long)(int)uVar7 * 4) = (int)lVar13;
            *(uint *)(param_4 + 3) = uVar7 + 1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(param_1 + 0x10));
      }
    }
    else if (iVar12 == 1) {
      iVar12 = *(int *)(param_1 + 0x10);
      if (0 < iVar12) {
        sVar1 = *param_2;
        lVar13 = 0;
        do {
          lVar9 = DAT_091beb18;
          if (*(short *)(param_1 + 0x14 + lVar13 * 2) == sVar1) {
            uVar7 = *(uint *)(param_4 + 3);
            if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            uVar11 = *(uint *)(param_4 + 1);
            if ((int)uVar11 <= (int)uVar7) {
              lVar9 = *(long *)(lVar9 + 0x20);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
              uVar11 = *(uint *)(param_4 + 1);
            }
            if (uVar11 <= uVar7) goto LAB_074333cc;
            *(int *)(*param_4 + (long)(int)uVar7 * 4) = (int)lVar13;
            iVar12 = *(int *)(param_1 + 0x10);
            *(uint *)(param_4 + 3) = uVar7 + 1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar12);
      }
    }
    else {
LAB_07433134:
      local_90[2] = 0;
      local_90[3] = 0;
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[6] = 0;
      local_90[7] = 0;
      local_90[4] = 0;
      local_90[5] = 0;
      System_String__InitializeProbabilisticMap(local_90,param_2,param_3);
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar13 = 0;
        do {
          uVar5 = *(ushort *)(param_1 + 0x14 + lVar13 * 2);
          if ((((local_90[(ulong)uVar5 & 7] >> (ulong)(uVar5 >> 3 & 0x1f) & 1) != 0) &&
              ((*(uint *)((long)local_90 + ((ulong)(uVar5 >> 6) & 0x1c)) >> (ulong)(uVar5 >> 0xb) &
               1) != 0)) &&
             (uVar10 = System_MemoryExtensions__Contains(param_2,param_3,(ulong)uVar5,0),
             lVar9 = DAT_091beb18, (uVar10 & 1) != 0)) {
            uVar7 = *(uint *)(param_4 + 3);
            if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            uVar11 = *(uint *)(param_4 + 1);
            if ((int)uVar11 <= (int)uVar7) {
              lVar9 = *(long *)(lVar9 + 0x20);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
              uVar11 = *(uint *)(param_4 + 1);
            }
            if (uVar11 <= uVar7) goto LAB_074333cc;
            *(int *)(*param_4 + (long)(int)uVar7 * 4) = (int)lVar13;
            *(uint *)(param_4 + 3) = uVar7 + 1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(param_1 + 0x10));
      }
    }
  }
  else if (iVar12 == 2) {
    iVar12 = *(int *)(param_1 + 0x10);
    if (0 < iVar12) {
      sVar1 = *param_2;
      sVar2 = param_2[1];
      lVar13 = 0;
      do {
        lVar9 = DAT_091beb18;
        sVar3 = *(short *)(param_1 + 0x14 + lVar13 * 2);
        if ((sVar3 == sVar1) || (sVar3 == sVar2)) {
          uVar7 = *(uint *)(param_4 + 3);
          if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar11 = *(uint *)(param_4 + 1);
          if ((int)uVar11 <= (int)uVar7) {
            lVar9 = *(long *)(lVar9 + 0x20);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
            uVar11 = *(uint *)(param_4 + 1);
          }
          if (uVar11 <= uVar7) goto LAB_074333cc;
          *(int *)(*param_4 + (long)(int)uVar7 * 4) = (int)lVar13;
          iVar12 = *(int *)(param_1 + 0x10);
          *(uint *)(param_4 + 3) = uVar7 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar12);
    }
  }
  else {
    if (iVar12 != 3) goto LAB_07433134;
    iVar12 = *(int *)(param_1 + 0x10);
    if (0 < iVar12) {
      sVar1 = *param_2;
      sVar2 = param_2[1];
      sVar3 = param_2[2];
      lVar13 = 0;
      do {
        lVar9 = DAT_091beb18;
        sVar4 = *(short *)(param_1 + 0x14 + lVar13 * 2);
        if (((sVar4 == sVar1) || (sVar4 == sVar2)) || (sVar4 == sVar3)) {
          uVar7 = *(uint *)(param_4 + 3);
          if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar11 = *(uint *)(param_4 + 1);
          if ((int)uVar11 <= (int)uVar7) {
            lVar9 = *(long *)(lVar9 + 0x20);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            FUN_0655f384(param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
            uVar11 = *(uint *)(param_4 + 1);
          }
          if (uVar11 <= uVar7) goto LAB_074333cc;
          *(int *)(*param_4 + (long)(int)uVar7 * 4) = (int)lVar13;
          iVar12 = *(int *)(param_1 + 0x10);
          *(uint *)(param_4 + 3) = uVar7 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar12);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_074333e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_074333cc:
  if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_074333e0;
}

