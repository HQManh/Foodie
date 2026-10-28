// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingOrderPreview$$Group
// address: 0x44dca84
// body: available
// range: 0x44dca84-0x44dceeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44dcee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dcee8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingOrderPreview__Group(long param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_09518339 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0298);
    FUN_03f5c2a4(&DAT_091b02a8);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b02b8);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091add30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518339 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar10) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar10,0);
    }
    lVar6 = DAT_09188ad0;
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(param_3,0,0);
      if (((uVar4 & 1) != 0) || (param_2 == (long *)0x0)) {
        return;
      }
      iVar10 = 0;
      do {
        lVar6 = *param_2;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b378) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_044dcc14;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b378,0);
LAB_044dcc14:
        iVar1 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if (iVar1 <= iVar10) {
          return;
        }
        lVar6 = *param_2;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b510) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_044dcc74;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b510,0);
LAB_044dcc74:
        iVar1 = (*(code *)*puVar5)(param_2,iVar10,puVar5[1]);
        if (iVar1 < 0) {
LAB_044dcd44:
          uVar11 = 0;
        }
        else {
          if (param_3 == 0) break;
          if (*(long *)(param_3 + 0x58) == 0) goto LAB_044dcd44;
          lVar6 = *param_2;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b510) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_044dcce0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b510,0);
LAB_044dcce0:
          iVar1 = (*(code *)*puVar5)(param_2,iVar10,puVar5[1]);
          lVar6 = *(long *)(param_3 + 0x58);
          if (lVar6 == 0) break;
          if (*(int *)(lVar6 + 0x18) <= iVar1) goto LAB_044dcd44;
          lVar7 = *param_2;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b510) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_044dcea0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b510,0);
LAB_044dcea0:
          uVar3 = (*(code *)*puVar5)(param_2,iVar10,puVar5[1]);
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar11 = *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) break;
          iVar1 = FUN_057e1a08(*(long *)(param_1 + 0x40),uVar11,DAT_091b02b8);
          lVar6 = DAT_091b0298;
          if (iVar1 < 0) {
            lVar7 = *(long *)(param_1 + 0x40);
            if (lVar7 == 0) break;
            lVar8 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) break;
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
              *puVar5 = uVar11;
              thunk_FUN_03f5d7b8(puVar5,uVar11);
            }
            else {
              FUN_057e0c68(lVar7,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            lVar6 = DAT_091adc88;
            lVar7 = *(long *)(param_1 + 0x48);
            if (lVar7 == 0) break;
            lVar8 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) break;
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = 1;
            }
            else {
              FUN_057971a8(lVar7,1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          else {
            lVar6 = *(long *)(param_1 + 0x48);
            if (lVar6 == 0) break;
            iVar2 = FUN_05796eb0(lVar6,iVar1,DAT_091add20);
            FUN_05796f04(lVar6,iVar1,iVar2 + 1,DAT_091add30);
          }
        }
        iVar10 = iVar10 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

