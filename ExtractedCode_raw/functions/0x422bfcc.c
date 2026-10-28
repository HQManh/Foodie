// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$Bind
// address: 0x422bfcc
// body: available
// range: 0x422bfcc-0x422c477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422c450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_OrderIngredientList__Bind
              (undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined8 local_a8 [9];
  
  if ((DAT_09516d8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091b19c8);
    FUN_03f5c2a4(&DAT_091aed30);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af618);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_091ae388);
    DAT_09516d8e = 1;
  }
  lVar7 = *(long *)(param_3 + 0x78);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    lVar7 = *(long *)(param_3 + 0x98);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      lVar7 = *(long *)(param_3 + 0xa8);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if ((*(long *)(param_3 + 0xa0) != 0) && (param_4 != (long *)0x0)) {
          lVar7 = *param_4;
          iVar1 = *(int *)(*(long *)(param_3 + 0xa0) + 0x18);
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917b388) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0422c158;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b388,0);
LAB_0422c158:
          iVar3 = (*(code *)*puVar5)(param_4,puVar5[1]);
          iVar11 = 0;
          do {
            lVar7 = *param_4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b388) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0422c1cc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b388,0);
LAB_0422c1cc:
            iVar4 = (*(code *)*puVar5)(param_4,puVar5[1]);
            if (iVar4 <= iVar11) {
              if ((*(long *)(param_3 + 0x78) != 0) &&
                 (lVar7 = *(long *)(param_3 + 0x70), lVar7 != 0)) {
                iVar11 = *(int *)(*(long *)(param_3 + 0x78) + 0x18);
                iVar1 = iVar11;
                goto LAB_0422c424;
              }
              break;
            }
            lVar7 = *param_4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b528) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0422c22c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b528,0);
LAB_0422c22c:
            (*(code *)*puVar5)(local_a8,param_4,iVar11,puVar5[1]);
            lVar7 = AnhPD_FoodOrder_OrderIngredientList__ResolveConfigs
                              (local_a8[0],*(undefined8 *)(param_3 + 0x88),
                               *(undefined8 *)(param_3 + 0x90));
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) {
              if ((*(long *)(param_3 + 0x78) == 0) ||
                 (lVar6 = AnhPD_FoodOrder_OrderIngredientList__GetBoard
                                    (param_3,*(undefined4 *)(*(long *)(param_3 + 0x78) + 0x18)),
                 lVar6 == 0)) break;
              AnhPD_FoodOrder_ListIngredientBoardView__Fill
                        (lVar6,lVar7,*(undefined8 *)(param_3 + 0x88),*(undefined8 *)(param_3 + 0x90)
                        );
              lVar7 = *param_4;
              lVar6 = *(long *)(param_3 + 0x78);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917b528) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0422c2d0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b528,0);
LAB_0422c2d0:
              (*(code *)*puVar5)(auStack_138,param_4,iVar11,puVar5[1]);
              if (lVar6 == 0) break;
              memcpy(auStack_f0,auStack_138,0x48);
              lVar7 = DAT_091aed20;
              lVar8 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 == 0) break;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar2 * 0x48;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                memcpy((void *)(lVar8 + 0x20),auStack_f0,0x48);
                thunk_FUN_03f5d7b8(lVar8 + 0x20,0);
              }
              else {
                uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
                memcpy(local_a8,auStack_f0,0x48);
                FUN_057ef254(lVar6,local_a8,uVar12);
              }
              if (iVar1 == iVar3) {
                if (*(long *)(param_3 + 0xa0) == 0) break;
                lVar6 = *(long *)(param_3 + 0xa8);
                uVar13 = FUN_058ac314(*(long *)(param_3 + 0xa0),iVar11,DAT_091b19e8);
                lVar7 = DAT_091b19b8;
                if (lVar6 == 0) break;
                lVar8 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 == 0) break;
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                  lVar8 = lVar8 + (long)(int)uVar2 * 8;
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined4 *)(lVar8 + 0x20) = uVar13;
                  *(undefined4 *)(lVar8 + 0x24) = param_2;
                }
                else {
                  FUN_058ac614(lVar6,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while( true );
        }
      }
    }
  }
  goto LAB_0422c450;
  while( true ) {
    AnhPD_FoodOrder_ListIngredientBoardView__Hide();
    lVar7 = *(long *)(param_3 + 0x70);
    iVar1 = iVar1 + 1;
    if (lVar7 == 0) break;
LAB_0422c424:
    if (*(int *)(lVar7 + 0x18) <= iVar1) {
      return iVar11;
    }
    lVar7 = FUN_057e0998(lVar7,iVar1,DAT_091ae388);
    if (lVar7 == 0) break;
  }
LAB_0422c450:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

