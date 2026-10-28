// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreview$$Group
// address: 0x4222ed8
// body: available
// range: 0x4222ed8-0x4223297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4223294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreview__Group(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  
  if ((DAT_09516d3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0298);
    FUN_03f5c2a4(&DAT_091b02a8);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b02b8);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091add30);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d3a = 1;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    iVar12 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar12,0);
    }
    lVar8 = DAT_09188ad0;
    lVar6 = DAT_091881a0;
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      uVar11 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar4 & 1) != 0) {
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04223294;
        lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
        if ((lVar6 != 0) && (param_2 != (long *)0x0)) {
          iVar12 = 0;
          do {
            lVar8 = *param_2;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b388) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0422309c;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b388,0);
LAB_0422309c:
            iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
            if (iVar2 <= iVar12) {
              return;
            }
            lVar8 = *param_2;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b528) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_042230fc;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b528,0);
LAB_042230fc:
            (*(code *)*puVar5)(auStack_a8,param_2,iVar12,puVar5[1]);
            uVar11 = AnhPD_FoodOrder_LevelInfo__GetDishIconOfId(lVar6,local_a0,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_04223294;
              iVar2 = FUN_057e1a08(*(long *)(param_1 + 0x40),uVar11,DAT_091b02b8);
              lVar8 = DAT_091b0298;
              if (iVar2 < 0) {
                lVar7 = *(long *)(param_1 + 0x40);
                if (lVar7 == 0) goto LAB_04223294;
                lVar9 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_04223294;
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar5 = uVar11;
                  thunk_FUN_03f5d7b8(puVar5,uVar11);
                }
                else {
                  FUN_057e0c68(lVar7,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = DAT_091adc88;
                lVar7 = *(long *)(param_1 + 0x48);
                if (lVar7 == 0) goto LAB_04223294;
                lVar9 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_04223294;
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 1;
                }
                else {
                  FUN_057971a8(lVar7,1,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                lVar8 = *(long *)(param_1 + 0x48);
                if (lVar8 == 0) goto LAB_04223294;
                iVar3 = FUN_05796eb0(lVar8,iVar2,DAT_091add20);
                FUN_05796f04(lVar8,iVar2,iVar3 + 1,DAT_091add30);
              }
            }
            iVar12 = iVar12 + 1;
          } while( true );
        }
      }
      return;
    }
  }
LAB_04223294:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

