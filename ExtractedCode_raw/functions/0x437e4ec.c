// rea decompile_all
// name: CakeOrder.InGame.UIPopupNewItem$$ShowNextItem
// address: 0x437e4ec
// body: available
// range: 0x437e4ec-0x437e7cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437e7cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupNewItem__ShowNextItem(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long *plVar3;
  
  if ((DAT_09517957 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091ad648);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09517957 = 1;
  }
  uVar1 = *(int *)(param_1 + 0xf8) + 1;
  uVar6 = CONCAT44(0,uVar1);
  *(uint *)(param_1 + 0xf8) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar13 = auVar2 << 0x40;
  if (*(long *)(param_1 + 0xe8) != 0) {
    auVar13 = FUN_057e0998(*(long *)(param_1 + 0xe8),uVar6,DAT_091ad648);
    uVar6 = auVar13._8_8_;
    plVar3 = auVar13._0_8_;
    lVar8 = *(long *)(param_1 + 0xf0);
    if ((lVar8 == 0) ||
       (uVar6 = (ulong)*(uint *)(param_1 + 0xf8),
       *(int *)(lVar8 + 0x18) <= (int)*(uint *)(param_1 + 0xf8))) {
      auVar13._8_8_ = uVar6;
      auVar13._0_8_ = plVar3;
      iVar10 = 0;
    }
    else {
      auVar13 = FUN_05796eb0(lVar8,uVar6,DAT_091add20);
      iVar10 = auVar13._0_4_;
    }
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      lVar11 = *(long *)(param_1 + 0xc0);
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186500) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_0437e600;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186500,5);
LAB_0437e600:
      auVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar11 != 0) {
        UnityEngine_UI_Image__set_sprite(lVar11,auVar13._0_8_,0);
        lVar8 = *plVar3;
        plVar12 = *(long **)(param_1 + 200);
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09186500) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_0437e674;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186500,3);
LAB_0437e674:
        auVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x558))(plVar12,auVar13._0_8_,*(undefined8 *)(*plVar12 + 0x560));
          lVar8 = *plVar3;
          plVar12 = *(long **)(param_1 + 0xd0);
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09186500) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                goto LAB_0437e6f0;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186500,4);
LAB_0437e6f0:
          auVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar12 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar12 + 0x558))
                              (plVar12,auVar13._0_8_,*(undefined8 *)(*plVar12 + 0x560));
            plVar12 = *(long **)(param_1 + 0xd8);
            if (iVar10 < 1) {
              uVar7 = **(undefined8 **)(DAT_09535468 + 0xb8);
            }
            else {
              lVar8 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09186500) {
                    puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                    goto LAB_0437e794;
                  }
                  uVar6 = uVar6 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186500,7);
LAB_0437e794:
              uVar5 = (*(code *)*puVar4)(plVar3,iVar10,puVar4[1]);
              uVar7 = uVar5;
            }
            auVar13._8_8_ = uVar7;
            auVar13._0_8_ = uVar5;
            if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0437e7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar12 + 0x558))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x560));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar13._0_8_,auVar13._8_8_);
}

