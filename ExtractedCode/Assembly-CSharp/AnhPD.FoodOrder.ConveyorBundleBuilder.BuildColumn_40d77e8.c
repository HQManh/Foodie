// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorBundleBuilder$$BuildColumn
// address: 0x40d77e8
// body: available
// range: 0x40d77e8-0x40d7c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d7bf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d7bf8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d7c04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ConveyorBundleBuilder__BuildColumn(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  float fVar20;
  uint local_64;
  
  if ((DAT_0951601c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182bc8);
    FUN_03f5c2a4(&DAT_09180158);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091abd90);
    FUN_03f5c2a4(&DAT_091b0560);
    FUN_03f5c2a4(&DAT_091abd78);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_0951601c = 1;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0917bee0);
  FUN_057e0400(lVar6,DAT_091abd78);
  if (param_2 != 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e053c(lVar7,param_2,DAT_091b0560);
    iVar4 = AnhPD_FoodOrder_ConveyorBundleBuilder__get_MaxSize(param_1);
    iVar12 = *(int *)(param_1 + 0x10);
    iVar1 = iVar12;
    if (iVar4 <= iVar12) {
      iVar1 = iVar4;
    }
    if (iVar12 < 1) {
      iVar1 = 1;
    }
    if (*(float *)(param_1 + 0x24) <= 0.0) {
      iVar12 = 1;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x1c);
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      if (param_3 <= iVar12) {
        iVar12 = param_3;
      }
    }
    if (lVar7 == 0) {
LAB_040d7bf4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar19 = 0;
      do {
        if ((iVar12 < 2) ||
           (fVar20 = (float)UnityEngine_Random__get_value(0), *(float *)(param_1 + 0x24) <= fVar20))
        {
LAB_040d79dc:
          uVar5 = UnityEngine_Random__Range(iVar1,iVar4 + 1,0);
          uVar15 = *(int *)(lVar7 + 0x18) - iVar19;
          if ((int)uVar15 <= (int)uVar5) {
            uVar5 = uVar15;
          }
          uVar17 = (ulong)uVar5;
          plVar8 = (long *)FUN_03f5c394(DAT_09180158,uVar17);
          bVar3 = false;
          local_64 = 1;
          if (0 < (int)uVar5) goto LAB_040d7a2c;
        }
        else {
          local_64 = UnityEngine_Random__Range(2,iVar12 + 1,0);
          uVar5 = *(int *)(lVar7 + 0x18) - iVar19;
          if ((int)uVar5 <= (int)local_64) {
            local_64 = uVar5;
          }
          uVar17 = (ulong)local_64;
          if ((int)local_64 < 2) goto LAB_040d79dc;
          plVar8 = (long *)FUN_03f5c394(DAT_09180158,uVar17);
          bVar3 = true;
LAB_040d7a2c:
          uVar5 = (uint)uVar17;
          uVar16 = 0;
          plVar18 = plVar8 + 4;
          do {
            uVar9 = FUN_057e0998(lVar7,iVar19 + (int)uVar16,DAT_091b0610);
            lVar10 = thunk_FUN_03f9944c(DAT_09186c48);
            AnhPD_FoodOrder_IngredientState___ctor(lVar10,uVar9,1,0);
            if (plVar8 == (long *)0x0) goto LAB_040d7bf4;
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *plVar18 = lVar10;
            thunk_FUN_03f5d7b8(plVar18,lVar10);
            uVar16 = uVar16 + 1;
            plVar18 = plVar18 + 1;
          } while (uVar17 != uVar16);
        }
        if (*(float *)(param_1 + 0x34) <= 0.0) {
          uVar15 = 0;
        }
        else {
          fVar20 = (float)UnityEngine_Random__get_value(0);
          uVar15 = (uint)(fVar20 < *(float *)(param_1 + 0x34));
        }
        lVar10 = thunk_FUN_03f9944c(DAT_09182bc8);
        *(undefined8 *)(lVar10 + 0x20) = 0x100000001;
        *(undefined8 *)(lVar10 + 0x38) = 0xffffffffffffffff;
        System_Object___ctor(lVar10,0);
        *(undefined8 *)(lVar10 + 0x10) = plVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x10),plVar8);
        *(uint *)(lVar10 + 0x18) = uVar15;
        if (bVar3) {
          uVar2 = 1;
        }
        else {
          local_64 = 1;
          uVar2 = uVar5;
        }
        *(uint *)(lVar10 + 0x20) = local_64;
        *(uint *)(lVar10 + 0x24) = uVar2;
        if (uVar15 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(param_1 + 0x38);
        }
        *(undefined4 *)(lVar10 + 0x30) = uVar13;
        lVar11 = DAT_091abd90;
        if (lVar6 == 0) goto LAB_040d7bf4;
        lVar14 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_040d7bf4;
        uVar15 = *(uint *)(lVar6 + 0x18);
        if (uVar15 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar15 + 1;
          plVar8 = (long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
          *plVar8 = lVar10;
          thunk_FUN_03f5d7b8(plVar8,lVar10);
        }
        else {
          FUN_057e0c68(lVar6,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar19 = uVar5 + iVar19;
      } while (iVar19 < *(int *)(lVar7 + 0x18));
    }
  }
  return lVar6;
}

