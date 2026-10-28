// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingSushiCompositeView$$Apply
// address: 0x44e114c
// body: available
// range: 0x44e114c-0x44e13ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e13e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e13fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingSushiCompositeView__Apply(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09518361 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b358);
    FUN_03f5c2a4(&DAT_0917b4f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518361 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar3 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_044e13e0;
    lVar6 = *param_2;
    lVar9 = *(long *)(param_1 + 0x40);
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b358) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044e1228;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b358,0);
LAB_044e1228:
    iVar1 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar9 == 0) goto LAB_044e13e0;
    UnityEngine_Renderer__set_enabled(lVar9,0 < iVar1,0);
  }
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    uVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar6 + uVar3 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
      if ((uVar5 & 1) != 0) {
        if (param_2 == (long *)0x0) break;
        lVar9 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b358) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_044e12f0;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b358,0);
LAB_044e12f0:
        iVar1 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if ((long)uVar3 < (long)iVar1) {
          lVar9 = *param_2;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b4f0) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_044e1360;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4f0,0);
LAB_044e1360:
          uVar8 = (*(code *)*puVar4)(param_2,uVar3 & 0xffffffff,puVar4[1]);
          uVar8 = CookOrder_Cooking_Implement_CookingSushiCompositeView__SpriteFor(param_1,uVar8);
        }
        else {
          uVar8 = 0;
        }
        if ((lVar6 == 0) || (UnityEngine_SpriteRenderer__set_sprite(lVar6,uVar8,0), lVar6 == 0))
        break;
        uVar8 = UnityEngine_SpriteRenderer__get_sprite(lVar6,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
        UnityEngine_Renderer__set_enabled(lVar6,uVar2 & 1,0);
      }
      lVar6 = *(long *)(param_1 + 0x48);
      uVar3 = uVar3 + 1;
    } while (lVar6 != 0);
  }
LAB_044e13e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

