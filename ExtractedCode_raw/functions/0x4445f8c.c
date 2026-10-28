// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$OutputNeeded
// address: 0x4445f8c
// body: available
// range: 0x4445f8c-0x44462f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44462ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44462f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44462f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong CookingGraph_CookingLevelSimulation__OutputNeeded
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09518047 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919d998);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adcc0);
    DAT_09518047 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  lVar4 = CookingGraph_CookingLevelSimulation__OpenDemand(param_1,param_3);
  if (lVar4 != 0) {
    uVar5 = FUN_06ee5ddc(lVar4,DAT_0919d998);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar6 = thunk_FUN_03f9944c(DAT_091764a0);
    FUN_06ee539c(lVar6,DAT_0919d948);
    if ((param_2 != 0) &&
       (lVar7 = CookingGraph_CookingLevelSimulation__SupplyUnits
                          (param_1,*(undefined4 *)(param_2 + 0x14),param_3,param_4,param_5),
       lVar7 != 0)) {
      FUN_05797d74(&local_a8,lVar7,DAT_091adcc0);
      local_70 = local_98;
      puStack_78 = puStack_a0;
      local_80 = local_a8;
      local_a8 = 0;
      puStack_a0 = &local_80;
      while (uVar8 = FUN_071ad7a4(&local_80,DAT_091a34d8), uVar5 = local_70, (uVar8 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = FUN_06ee7aac(lVar6,local_70 & 0xffffffff,(long)&local_88 + 4,DAT_0919d990);
        iVar10 = 1;
        if ((uVar8 & 1) != 0) {
          iVar10 = local_88._4_4_ + 1;
        }
        FUN_06ee612c(lVar6,uVar5 & 0xffffffff,iVar10,DAT_0919d9a8);
      }
      FUN_071ad7a0(&local_80,DAT_091a34d0);
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x48), lVar7 != 0)) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          uVar12 = 0;
          do {
            if (uVar2 <= uVar12) {
LAB_044462ec:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar2 = *(uint *)(lVar7 + (long)(int)uVar12 * 4 + 0x20);
            uVar5 = FUN_06ee7aac(lVar4,uVar2,&local_88,DAT_0919d990);
            if (lVar6 == 0) goto LAB_044462f0;
            iVar10 = (int)local_88;
            if ((uVar5 & 1) == 0) {
              iVar10 = 0;
            }
            uVar5 = FUN_06ee7aac(lVar6,uVar2,(long)&local_90 + 4,DAT_0919d990);
            iVar1 = local_90._4_4_;
            if ((uVar5 & 1) == 0) {
              iVar1 = 0;
            }
            iVar10 = iVar10 - iVar1;
            if (uVar2 == *(uint *)(param_2 + 0x14)) {
              return (ulong)(0 < iVar10);
            }
            if (0 < iVar10) {
              if ((*(long *)(param_1 + 0x78) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x38), lVar9 == 0))
              goto LAB_044462f0;
              if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_044462ec;
              lVar9 = *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar9 != 0) {
                lVar13 = *(long *)(lVar9 + 0x30);
                if (lVar13 == 0) goto LAB_044462f0;
                if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                  iVar1 = *(int *)(lVar9 + 0x18);
                  uVar5 = 0;
                  iVar3 = 0;
                  if (iVar1 != 0) {
                    iVar3 = (iVar10 + iVar1 + -1) / iVar1;
                  }
                  uVar8 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                  do {
                    if (uVar8 <= uVar5) goto LAB_044462ec;
                    uVar11 = *(ulong *)(lVar13 + 0x20 + uVar5 * 8);
                    uVar8 = FUN_06ee7aac(lVar4,uVar11 & 0xffffffff,&local_90,DAT_0919d990);
                    iVar10 = (int)local_90;
                    if ((uVar8 & 1) == 0) {
                      iVar10 = 0;
                    }
                    FUN_06ee612c(lVar4,uVar11 & 0xffffffff,iVar10 + iVar3,DAT_0919d9a8);
                    uVar8 = (ulong)*(uint *)(lVar13 + 0x18);
                    uVar5 = uVar5 + 1;
                  } while ((long)uVar5 < (long)(int)*(uint *)(lVar13 + 0x18));
                }
              }
            }
            uVar2 = *(uint *)(lVar7 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar2);
        }
        return 0;
      }
    }
  }
LAB_044462f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

