// rea decompile_all
// name: AnhPD.FoodOrder.IngCellStatus$$Setup
// address: 0x423286c
// body: available
// range: 0x423286c-0x4232ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4232cb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4232cdc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4232ce8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellStatus__Setup(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  
  if ((DAT_09516e40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191728);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09191730);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09204b18);
    DAT_09516e40 = 1;
  }
  if ((param_2 != 0) && (0 < (int)*(ulong *)(param_2 + 0x18))) {
    bVar1 = param_3 == 0;
    uVar7 = 0;
    uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar7) goto LAB_04232cdc;
      lVar5 = *(long *)(param_2 + 0x20 + uVar7 * 8);
      if (lVar5 != 0) {
        iVar8 = *(int *)(lVar5 + 0x10);
        uVar6 = (undefined4)uVar7;
        if (iVar8 < 3) {
          if (iVar8 == 1) {
            AnhPD_FoodOrder_IngCellStatus__BlockCell(param_1,uVar7 & 0xffffffff);
          }
          else if (iVar8 == 2) {
            lVar5 = *(long *)(lVar5 + 0x18);
            if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 1)) {
              iVar8 = 1;
            }
            else {
              iVar8 = *(int *)(lVar5 + 0x20);
              if (iVar8 < 2) {
                iVar8 = 1;
              }
            }
            lVar5 = thunk_FUN_03f9944c(DAT_09191730);
            System_Object___ctor(lVar5,0);
            if (lVar5 == 0) goto LAB_04232cb8;
            *(undefined4 *)(lVar5 + 0x10) = uVar6;
            *(int *)(lVar5 + 0x14) = iVar8;
LAB_04232a30:
            AnhPD_FoodOrder_IngCellStatus__AddOpenableLock(param_1,lVar5);
          }
        }
        else if (iVar8 == 3) {
          lVar5 = *(long *)(lVar5 + 0x18);
          bVar13 = bVar1;
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 1)) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(uint *)(lVar5 + 0x20);
            if ((param_3 != 0) && (-1 < (int)uVar11)) {
              if ((int)uVar11 < *(int *)(param_3 + 0x18)) {
                if (*(int *)(lVar5 + 0x18) == 1) {
                  iVar8 = 1;
                }
                else {
                  iVar8 = *(int *)(lVar5 + 0x24);
                  if (iVar8 < 2) {
                    iVar8 = 1;
                  }
                }
                uVar10 = *(undefined8 *)(param_3 + (ulong)uVar11 * 8 + 0x20);
                lVar5 = thunk_FUN_03f9944c(DAT_09191730);
                System_Object___ctor(lVar5,0);
                if (lVar5 == 0) goto LAB_04232cb8;
                *(undefined8 *)(lVar5 + 0x18) = uVar10;
                *(undefined4 *)(lVar5 + 0x10) = uVar6;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),uVar10);
                lVar3 = DAT_091881a0;
                *(int *)(lVar5 + 0x14) = iVar8;
                uVar12 = **(undefined8 **)(lVar3 + 0xb8);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = UnityEngine_Object__op_Implicit(uVar12,0);
                uVar12 = 0;
                if ((uVar4 & 1) != 0) {
                  if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
                     (lVar3 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar3 == 0))
                  goto LAB_04232cb8;
                  uVar12 = AnhPD_FoodOrder_LevelInfo__GetPrefabSprite(lVar3,uVar10,0);
                }
                *(undefined8 *)(lVar5 + 0x20) = uVar12;
                thunk_FUN_03f5d7b8();
                if (param_1 == 0) goto LAB_04232cb8;
                goto LAB_04232a30;
              }
              bVar13 = false;
            }
          }
          plVar2 = (long *)FUN_03f5c394(DAT_09180318,3);
          local_64 = uVar6;
          lVar5 = FUN_03f5c42c(DAT_09535420,&local_64);
          if (plVar2 == (long *)0x0) goto LAB_04232cb8;
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_04232ce0:
            uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,0);
          }
          if ((int)plVar2[3] == 0) {
LAB_04232cdc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2[4] = lVar5;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
          local_68 = uVar11;
          lVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_04232ce0;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_04232cdc;
          plVar2[5] = lVar5;
          thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
          uVar10 = DAT_09204b18;
          if (bVar13) {
            local_6c = 0;
          }
          else {
            local_6c = *(undefined4 *)(param_3 + 0x18);
          }
          lVar5 = FUN_03f5c42c(DAT_09535420,&local_6c);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_04232ce0;
          if (*(uint *)(plVar2 + 3) < 3) goto LAB_04232cdc;
          plVar2[6] = lVar5;
          thunk_FUN_03f5d7b8(plVar2 + 6,lVar5);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(uVar10,plVar2,0);
        }
        else if (iVar8 == 4) {
          lVar5 = *(long *)(lVar5 + 0x18);
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 1)) {
            uVar9 = 0;
LAB_04232a44:
            iVar8 = 1;
          }
          else {
            uVar9 = *(undefined4 *)(lVar5 + 0x20);
            if (*(int *)(lVar5 + 0x18) == 1) goto LAB_04232a44;
            iVar8 = *(int *)(lVar5 + 0x24);
            if (iVar8 < 2) {
              iVar8 = 1;
            }
          }
          lVar5 = thunk_FUN_03f9944c(DAT_09191728);
          System_Object___ctor(lVar5,0);
          if (lVar5 == 0) {
LAB_04232cb8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined4 *)(lVar5 + 0x10) = uVar6;
          *(undefined4 *)(lVar5 + 0x14) = uVar9;
          *(int *)(lVar5 + 0x18) = iVar8;
          *(int *)(lVar5 + 0x1c) = iVar8;
          AnhPD_FoodOrder_IngCellStatus__AddColorLock(param_1,lVar5);
        }
      }
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return;
}

