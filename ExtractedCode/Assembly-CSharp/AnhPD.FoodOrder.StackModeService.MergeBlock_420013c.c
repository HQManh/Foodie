// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$MergeBlock
// address: 0x420013c
// body: available
// range: 0x420013c-0x4200763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4200524 to 0x39af17c FUN_039af17c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4200750 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200754 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200760 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StackModeService__MergeBlock(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 local_80;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  
  if ((DAT_09516be4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182bc8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091adb18);
    FUN_03f5c2a4(&DAT_091adae0);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09214360);
    FUN_03f5c2a4(&DAT_09214370);
    DAT_09516be4 = 1;
  }
  if ((param_3 != 0) && (lVar15 = *(long *)(param_3 + 0x10), lVar15 != 0)) {
    iVar12 = (int)*(ulong *)(lVar15 + 0x18);
    if (1 < iVar12) {
      uVar13 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      uVar19 = 0x80000000;
      uVar18 = 0x7fffffff;
      uVar17 = 0x7fffffff;
      uVar20 = 0x80000000;
      puVar10 = (undefined8 *)(lVar15 + 0x20);
      do {
        uVar14 = (uint)*puVar10;
        if ((int)uVar14 <= (int)uVar18) {
          uVar18 = uVar14;
        }
        if ((int)uVar19 <= (int)uVar14) {
          uVar19 = uVar14;
        }
        uVar14 = (uint)((ulong)*puVar10 >> 0x20);
        if ((int)uVar14 <= (int)uVar17) {
          uVar17 = uVar14;
        }
        if ((int)uVar20 <= (int)uVar14) {
          uVar20 = uVar14;
        }
        uVar13 = uVar13 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar13 != 0);
      uVar14 = (uVar19 - uVar18) + 1;
      iVar1 = (uVar20 - uVar17) + 1;
      if (uVar14 * iVar1 == iVar12) {
        lVar8 = thunk_FUN_03f9944c(DAT_0917c4d0);
        FUN_057e0478(lVar8,*(undefined4 *)(lVar15 + 0x18),DAT_091adae0);
        local_80 = 0;
        bVar7 = false;
        local_70 = -1;
        uVar2 = uVar18;
        uVar3 = uVar17;
        do {
          lVar15 = AnhPD_FoodOrder_StackModeService__CellAt(param_1,uVar2,uVar3);
          if ((lVar15 == 0) ||
             (lVar9 = AnhPD_FoodOrder_StackModeService__CellAt(param_2,uVar2,uVar3),
             lVar6 = DAT_091adae8, lVar9 != lVar15)) {
            plVar16 = (long *)FUN_03f5c394(DAT_09180318,2);
            local_64 = uVar2;
            lVar15 = FUN_03f5c42c(DAT_09535420,&local_64);
            if (plVar16 == (long *)0x0) goto LAB_04200750;
            if ((lVar15 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
            goto LAB_04200758;
            if ((int)plVar16[3] == 0) goto LAB_04200754;
            plVar16[4] = lVar15;
            thunk_FUN_03f5d7b8(plVar16 + 4,lVar15);
            local_68 = uVar3;
            lVar15 = FUN_03f5c42c(DAT_09535420,&local_68);
            if ((lVar15 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
            goto LAB_04200758;
            if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_04200754;
            plVar16[5] = lVar15;
            thunk_FUN_03f5d7b8(plVar16 + 5,lVar15);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar10 = &DAT_09214370;
            goto LAB_04200720;
          }
          lVar9 = *(long *)(lVar15 + 0x10);
          if (lVar9 == 0) goto LAB_04200750;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_04200754;
          if (lVar8 == 0) goto LAB_04200750;
          uVar11 = *(undefined8 *)(lVar9 + 0x20);
          lVar9 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04200750;
          uVar4 = *(uint *)(lVar8 + 0x18);
          if (uVar4 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar8,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          if (local_70 < 0) {
            local_70 = *(int *)(lVar15 + 0x38);
          }
          bVar5 = *(byte *)(lVar15 + 0x34) | bVar7;
          bVar7 = bVar5 != 0;
          if (*(int *)(lVar15 + 0x18) == 1) {
            if (local_80._4_4_ <= *(int *)(lVar15 + 0x30)) {
              local_80._4_4_ = *(int *)(lVar15 + 0x30);
            }
            local_80 = CONCAT44(local_80._4_4_,1);
          }
          uVar2 = uVar2 + 1;
        } while (((int)uVar2 <= (int)uVar19) ||
                (uVar3 = uVar3 + 1, uVar2 = uVar18, (int)uVar3 <= (int)uVar20));
        lVar15 = thunk_FUN_03f9944c(DAT_09182bc8);
        AnhPD_FoodOrder_ConveyorBundle___ctor(lVar15,0);
        uVar11 = FUN_057e28a4(lVar8,DAT_091adb18);
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x10) = uVar11;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar15 + 0x10),uVar11);
          *(byte *)(lVar15 + 0x34) = bVar5;
          *(uint *)(lVar15 + 0x20) = uVar14;
          *(int *)(lVar15 + 0x24) = iVar1;
          *(undefined4 *)(lVar15 + 0x18) = (undefined4)local_80;
          if ((local_80 & 1) == 0) {
            local_80._4_4_ = 0;
          }
          *(int *)(lVar15 + 0x30) = local_80._4_4_;
          *(int *)(lVar15 + 0x38) = local_70;
          *(uint *)(lVar15 + 0x3c) = uVar17;
          uVar14 = uVar17;
          do {
            uVar2 = uVar18;
            if (param_1 == 0) goto LAB_04200750;
            do {
              if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04200754;
              lVar8 = *(long *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_04200750;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_04200754;
              puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
              *puVar10 = 0;
              thunk_FUN_03f5d7b8(puVar10,0);
              if (param_2 == 0) goto LAB_04200750;
              if (*(uint *)(param_2 + 0x18) <= uVar2) goto LAB_04200754;
              plVar16 = *(long **)(param_2 + (long)(int)uVar2 * 8 + 0x20);
              if (plVar16 == (long *)0x0) goto LAB_04200750;
              lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar8 == 0) goto LAB_04200758;
              if (*(uint *)(plVar16 + 3) <= uVar14) goto LAB_04200754;
              plVar16[(long)(int)uVar14 + 4] = lVar15;
              thunk_FUN_03f5d7b8(plVar16 + (long)(int)uVar14 + 4,lVar15);
              uVar2 = uVar2 + 1;
            } while ((int)uVar2 <= (int)uVar19);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 <= (int)uVar20);
          if (*(uint *)(param_1 + 0x18) <= uVar18) goto LAB_04200754;
          lVar8 = *(long *)(param_1 + (long)(int)uVar18 * 8 + 0x20);
          if (lVar8 != 0) {
            FUN_039b0da0(lVar8,lVar15);
            FUN_039af17c(lVar8,(long)(int)uVar17,lVar15);
            return;
          }
        }
      }
      else {
        plVar16 = (long *)FUN_03f5c394(DAT_09180318,3);
        if (*(long *)(param_3 + 0x10) != 0) {
          local_64 = (uint)*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x18);
          lVar15 = FUN_03f5c42c(DAT_09535420,&local_64);
          if (plVar16 != (long *)0x0) {
            if ((lVar15 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
LAB_04200758:
              uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar11,0);
            }
            if ((int)plVar16[3] != 0) {
              plVar16[4] = lVar15;
              thunk_FUN_03f5d7b8(plVar16 + 4,lVar15);
              local_68 = uVar14;
              lVar15 = FUN_03f5c42c(DAT_09535420,&local_68);
              if ((lVar15 != 0) &&
                 (lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
              goto LAB_04200758;
              if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
                plVar16[5] = lVar15;
                thunk_FUN_03f5d7b8(plVar16 + 5,lVar15);
                local_6c = iVar1;
                lVar15 = FUN_03f5c42c(DAT_09535420,&local_6c);
                if ((lVar15 != 0) &&
                   (lVar8 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)
                   ) goto LAB_04200758;
                if (2 < *(uint *)(plVar16 + 3)) {
                  plVar16[6] = lVar15;
                  thunk_FUN_03f5d7b8(plVar16 + 6,lVar15);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar10 = &DAT_09214360;
LAB_04200720:
                  UnityEngine_Debug__LogWarningFormat(*puVar10,plVar16,0);
                  return;
                }
              }
            }
LAB_04200754:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
LAB_04200750:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

