// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$BuildCellsFromQueue
// address: 0x41ff318
// body: available
// range: 0x41ff318-0x41ff873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ff860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ff864 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ff870 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_StackModeService__BuildCellsFromQueue(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_68;
  
  if ((DAT_09516be1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00f8);
    FUN_03f5c2a4(&DAT_091c0228);
    FUN_03f5c2a4(&DAT_09182bc8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180158);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091abd90);
    FUN_03f5c2a4(&DAT_091abdd0);
    FUN_03f5c2a4(&DAT_091abd88);
    FUN_03f5c2a4(&DAT_091abdd8);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09214368);
    DAT_09516be1 = 1;
  }
  lVar6 = DAT_091c00f8;
  local_68 = 0;
  local_78 = 0;
  local_7c = 0;
  if (param_1 == 0) {
    lVar7 = *(long *)(DAT_091c00f8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c00f8);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar6 = thunk_FUN_03f9944c(DAT_0917bee0);
    FUN_057e0478(lVar6,*(undefined4 *)(param_1 + 0x18),DAT_091abd88);
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar13 = 0;
      uVar11 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      puVar14 = (undefined4 *)(param_1 + 0x20);
      do {
        if (uVar11 <= uVar13) {
LAB_041ff864:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar11 = CakeOrder_IngredientData__get_IsTool(puVar14,0);
        if ((uVar11 & 1) == 0) {
          uVar11 = AnhPD_FoodOrder_StackModeService__TryResolveSpawnId(param_2,*puVar14,&local_68);
          if ((uVar11 & 1) != 0) {
            uVar5 = AnhPD_FoodOrder_StackModeService__TryGetStatus(puVar14,1,(long)&local_78 + 4);
            uVar11 = AnhPD_FoodOrder_StackModeService__TryGetStatus(puVar14,3,&local_78);
            bVar3 = AnhPD_FoodOrder_StackModeService__TryGetStatus(puVar14,2,&local_7c);
            lVar7 = thunk_FUN_03f9944c(DAT_09182bc8);
            AnhPD_FoodOrder_ConveyorBundle___ctor(lVar7,0);
            plVar9 = (long *)FUN_03f5c394(DAT_09180158,1);
            uVar10 = local_68;
            uVar4 = puVar14[1];
            lVar8 = thunk_FUN_03f9944c(DAT_09186c48);
            AnhPD_FoodOrder_IngredientState___ctor(lVar8,uVar10,uVar4,0);
            if (plVar9 != (long *)0x0) {
              if ((lVar8 != 0) &&
                 (lVar12 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
              {
LAB_041ff868:
                uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar10,0);
              }
              if ((int)plVar9[3] == 0) goto LAB_041ff864;
              plVar9[4] = lVar8;
              thunk_FUN_03f5d7b8(plVar9 + 4,lVar8);
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0x10) = (long)plVar9;
                thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),plVar9);
                *(undefined8 *)(lVar7 + 0x20) = 0x100000001;
                *(byte *)(lVar7 + 0x34) = bVar3 & 1;
                uVar1 = (uint)local_78 & ((int)(uint)local_78 >> 0x1f ^ 0xffffffffU);
                iVar2 = local_78._4_4_;
                if (local_78._4_4_ < 1) {
                  iVar2 = 3;
                }
                if ((uVar5 & 1) == 0) {
                  iVar2 = 0;
                }
                *(uint *)(lVar7 + 0x18) = uVar5 & 1;
                *(int *)(lVar7 + 0x30) = iVar2;
                if ((uVar11 & 1) == 0) {
                  uVar1 = 0xffffffff;
                }
                *(uint *)(lVar7 + 0x38) = uVar1;
                if (lVar6 != 0) {
                  iVar2 = *(int *)(lVar6 + 0x1c);
                  lVar8 = *(long *)(lVar6 + 0x10);
                  *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(lVar6 + 0x18);
                  lVar12 = DAT_091abd90;
                  *(int *)(lVar6 + 0x1c) = iVar2 + 1;
                  if (lVar8 != 0) {
                    uVar5 = *(uint *)(lVar6 + 0x18);
                    if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                      lVar8 = *(long *)(lVar12 + 0x20);
                      goto LAB_041ff798;
                    }
                    lVar8 = lVar8 + (long)(int)uVar5 * 8;
                    *(uint *)(lVar6 + 0x18) = uVar5 + 1;
                    goto LAB_041ff6dc;
                  }
                }
              }
            }
            goto LAB_041ff860;
          }
          plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
          local_80 = *puVar14;
          lVar7 = FUN_03f5c42c(DAT_09535420,&local_80);
          if (plVar9 == (long *)0x0) goto LAB_041ff860;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
          goto LAB_041ff868;
          if ((int)plVar9[3] == 0) goto LAB_041ff864;
          plVar9[4] = lVar7;
          thunk_FUN_03f5d7b8(plVar9 + 4,lVar7);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(DAT_09214368,plVar9,0);
        }
        else {
          lVar7 = thunk_FUN_03f9944c(DAT_09182bc8);
          AnhPD_FoodOrder_ConveyorBundle___ctor(lVar7,0);
          lVar8 = DAT_091c0228;
          lVar12 = *(long *)(DAT_091c0228 + 0x38);
          if (lVar12 == 0) {
            FUN_03f95ac8(DAT_091c0228);
            lVar12 = *(long *)(lVar8 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          if (lVar7 == 0) goto LAB_041ff860;
          *(undefined8 *)(lVar7 + 0x10) = **(undefined8 **)(lVar8 + 0xb8);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x10));
          uVar4 = CakeOrder_IngredientData__KindOf(*puVar14,0);
          *(undefined8 *)(lVar7 + 0x20) = 0x100000001;
          *(undefined4 *)(lVar7 + 0x1c) = uVar4;
          lVar12 = DAT_091abd90;
          if (lVar6 == 0) goto LAB_041ff860;
          uVar5 = *(uint *)(lVar6 + 0x18);
          iVar2 = *(int *)(lVar6 + 0x1c);
          lVar8 = *(long *)(lVar6 + 0x10);
          *(uint *)(lVar7 + 0x3c) = uVar5;
          *(int *)(lVar6 + 0x1c) = iVar2 + 1;
          if (lVar8 == 0) goto LAB_041ff860;
          if (uVar5 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar5 * 8;
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
LAB_041ff6dc:
            *(long *)(lVar8 + 0x20) = lVar7;
            thunk_FUN_03f5d7b8((long *)(lVar8 + 0x20),lVar7);
          }
          else {
            lVar8 = *(long *)(lVar12 + 0x20);
LAB_041ff798:
            FUN_057e0c68(lVar6,lVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
          }
        }
        uVar11 = (ulong)*(uint *)(param_1 + 0x18);
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 6;
      } while ((long)uVar13 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    if (lVar6 == 0) {
LAB_041ff860:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = FUN_057e28a4(lVar6,DAT_091abdd0);
  }
  return uVar10;
}

